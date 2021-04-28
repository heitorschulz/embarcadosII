/** ***************************************************************************
 * @file    main.c
 * @brief   Simple LED Blink Demo for EFM32GG_STK3700
 * @version 1.0
******************************************************************************/

#include <stdint.h>
/*
 * Including this file, it is possible to define which processor using command line
 * E.g. -DEFM32GG995F1024
 * The alternative is to include the processor specific file directly
 * #include "efm32gg995f1024.h"
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "em_device.h"
//#include "led.h"
#include "lcd.h"
#include "pwm.h"
#include "gpio.h"
#include "clock_efm32gg2.h"
#include "button.h"

static int ACTUAL = 0;
//static int SOFTDIVIDERDYNAMIC[13] = {48,45,43,40,38,36,34,32,30,28,27,25,24}; //800000
static int SOFTDIVIDERDYNAMIC[13] = {58,55,52,49,46,43,41,38,36,34,32,30,29};   //950000
char names[13][8]={"A4-440\0","A4#-466\0","B4-493\0","C5-523\0","C5#-554\0","D5-587\0",
                   "D5#-622\0","E5-659\0","F5-698\0","F5#-739\0","G5-783\0","G5#-830\0","A5-880\0"};

/*
//Para SYSTICKDIVIDER 960000:
A4    -  440.000  -   58  - 439.8      ~ 0.04 %
A4#   -  466.164  -   55  - 463.3      ~ 0.61 %
B4    -  493.883  -   52  - 489.5      ~ 0.88 %
C5    -  523.251  -   49  - 518.9      ~ 0.83 %
C5#   -  554.365  -   46  - 552.0      ~ 0.42 %
D5    -  587.330  -   43  - 589.7      ~ 0.40 %
D5#   -  622.254  -   41  - 617.8      ~ 0.71 %
E5    -  659.255  -   38  - 665.3      ~ 0.91 %
F5    -  698.456  -   36  - 701.2      ~ 0.39 %
F5#   -  739.989  -   34  - 741.3      ~ 0.17 %
G5    -  783.991  -   32  - 786.2      ~ 0.28 %
G5#   -  830.609  -   30  - 836.9      ~ 0.75 %
A5    -  880.000  -   28  - 894.7      ~ 1.67 %*/



///@{
#define PWM_GPIO                    GPIOD
#define PWM_PIN0                    1
#define PWM_PIN1                    2
#define PWM_PIN2                    3
#define PWM_PIN3                    6
// #define QUADRATURE_PIN1             6
// #define QUADRATURE_PINBUTTON        5
///@}

/**
 * @brief   Mask for decoder signals and button
 */

///@{
#define PWM_M            ((1U<<PWM_PIN0)|(1U<<PWM_PIN1)|(1U<<PWM_PIN2)|(1U<<PWM_PIN3))


/*****************************************************************************
 * @brief  SysTick interrupt handler
 *
 * @note   Called every 1/DIVIDER seconds (1 ms)
 */

//{
//#define SYSTICKDIVIDER 16777215
#define SYSTICKDIVIDER  960000
#define SOFTDIVIDER 48

/*
//Para SYSTICKDIVIDER 800000:
A4    -  440.000  -   48  - 441.32   ~ 0.30 %
A4#   -  466.164  -   45  - 470      ~ 0.82 %
B4    -  493.883  -   43  - 491.71   ~ 0.44 %
C5    -  523.251  -   40  - 527      ~ 0.71 %
C5#   -  554.365  -   38  - 554.43   ~ 0.19 %
D5    -  587.330  -   36  - 584      ~ 0.56 %
D5#   -  622.254  -   34  - 617      ~ 0.84 %
E5    -  659.255  -   32  - 655      ~ 0.64 %
F5    -  698.456  -   30  - 697      ~ 0.20 %
F5#   -  739.989  -   28  - 745      ~ 0.67 %
G5    -  783.991  -   27  - 772      ~ 1.53 %
G5#   -  830.609  -   25  - 832      ~ 0.16 %
A5    -  880.000  -   24  - 865      ~ 1.70 %
*/

/*
//Para SYSTICKDIVIDER 950000:
A4    -  440.000  -   48  - 441.32   ~ 0.30 %
A4#   -  466.164  -   45  - 470      ~ 0.82 %
B4    -  493.883  -   43  - 491.71   ~ 0.44 %
C5    -  523.251  -   40  - 527      ~ 0.71 %
C5#   -  554.365  -   38  - 554.43   ~ 0.19 %
D5    -  587.330  -   36  - 584      ~ 0.56 %
D5#   -  622.254  -   34  - 617      ~ 0.84 %
E5    -  659.255  -   32  - 655      ~ 0.64 %
F5    -  698.456  -   30  - 697      ~ 0.20 %
F5#   -  739.989  -   28  - 745      ~ 0.67 %
G5    -  783.991  -   27  - 772      ~ 1.53 %
G5#   -  830.609  -   25  - 832      ~ 0.16 %
A5    -  880.000  -   24  - 865      ~ 1.70 %
*/


const uint8_t max_counter = 36;
const uint8_t sine_LUT[36] = {128,150,171,191,209,225,238,247,253,255,253,247,238,225,209,191,171,150,128,105,84,64,46,30,17,8,2,0,2,8,17,30,46,64,84,105}; // samples of a sine wave

//500000/100000 = 5s
//

static uint32_t ticks = 0;

void SysTick_Handler(void) {
static int counter = 0;             // must be static
static int table_counter = 0;
    //ticks++;                    // overflow in 49 days

    /* Blink */
    if( counter != 0 ) {
        counter--;
    } else {
        counter = SOFTDIVIDERDYNAMIC[ACTUAL]-1;
        if(table_counter<max_counter){
            PWM_Write(TIMER1,0,sine_LUT[table_counter]);
            table_counter++;
        }else{
            table_counter=0;
            PWM_Write(TIMER1,0,sine_LUT[table_counter]);
        }
    }
}

//}

/*****************************************************************************
 * @brief  Delay function based on SysTick
 *****************************************************************************/


void
Delay(uint32_t v) {
uint32_t lim = ticks+v;       // Missing processing of overflow here
    while ( ticks < lim ) {}
}

/**
 * @brief printbin
 */
void printbin(unsigned v, int n) {
unsigned m = 1<<(n-1);

    while(m) {
        if( (v&m) != 0 )
            putchar('1');
        else
            putchar('0');
        m>>=1;
    }

}


/************************************************************************//**
 * @brief  Button callback
 *
 * @note   runs with disabled interrupts
 */

void buttoncallback(uint32_t v) {

    if( Button_ReadReleased() ){

        if(ACTUAL<12){
            ACTUAL++;
        }else{
            ACTUAL=0;
        }
        LCD_ClearAll();
        //Delay(2);
        LCD_WriteString(names[ACTUAL]);
    }
}

/*****************************************************************************
 * @brief  Main function
 *
 * @note   Using default clock configuration
 *         HFCLK = HFRCO
 *         HFCORECLK = HFCLK
 *         HFPERCLK  = HFCLK
 */

#include "uart2.h"

#define DELAYVAL 2

int main(void) {
//unsigned val;
//char s[10];

    // ACTUAL=0;

    // int i=0;

    // for(;i<12;i++){
    //     SOFTDIVIDERDYNAMIC[i]=48-i;
    // }

    /* Configure LEDs */
    //LED_Init(LED1|LED2);

    /* Configure buttons */
    Button_Init(BUTTON1|BUTTON2);
    Button_SetCallback(buttoncallback);

    // Set clock source to external crystal: 48 MHz
    (void) SystemCoreClockSet(CLOCK_HFXO,1,1);

    // Message
    //printf("\nHello!");

    // Message
    //printf("\nStarting......\n");

    // Turn on LEDs
    //LED_Write(0,LED1|LED2);

    // Configure SysTick
    SysTick_Config(SystemCoreClock/SYSTICKDIVIDER);

    //SystemCoreClockUpdate();

    // Configure LCD
    LCD_Init();

    LCD_SetAll();
    //Delay(DELAYVAL);

    LCD_ClearAll();
    //Delay(DELAYVAL);

    //s[0] = 0;
    //LCD_WriteString(s);

    LCD_WriteString("A4-440");

    // Configure touch sensor 
    PWM_Init(TIMER1,PWM_LOC4,PWM_LOC_UNUSED,PWM_LOC_UNUSED);

    GPIO_Init(PWM_GPIO,0,PWM_M);
   
    // Enable IRQs
    __enable_irq();

    while (1) {
        //printf("Enter new value: ");
        //fgets(s,9,stdin);
        //if( s[0] == '\n' ) continue;
        //LED_Toggle(LED2);
        //val = (unsigned) atoi(s);
        //PWM_Write(TIMER1,0,val);
        //__WFI();        // Enter low power state
    }

}






