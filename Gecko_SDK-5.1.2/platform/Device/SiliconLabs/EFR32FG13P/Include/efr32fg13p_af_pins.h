/**************************************************************************//**
 * @file efr32fg13p_af_pins.h
 * @brief EFR32FG13P_AF_PINS register and bit field definitions
 * @version 5.1.2
 ******************************************************************************
 * @section License
 * <b>Copyright 2017 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/
/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32FG13P_AF_Pins
 * @{
 *****************************************************************************/

/** AF pin number for location number i */
#define AF_CMU_CLK0_PIN(i)          ((i) == 0 ? 1 : (i) == 1 ? 15 : (i) == 2 ? 6 : (i) == 3 ? 11 : (i) == 4 ? 9 : (i) == 5 ? 14 : (i) == 6 ? 2 : (i) == 7 ? 7 :  -1)
#define AF_CMU_CLK1_PIN(i)          ((i) == 0 ? 0 : (i) == 1 ? 14 : (i) == 2 ? 7 : (i) == 3 ? 10 : (i) == 4 ? 10 : (i) == 5 ? 15 : (i) == 6 ? 3 : (i) == 7 ? 6 :  -1)
#define AF_CMU_CLKI0_PIN(i)         ((i) == 0 ? 13 : (i) == 1 ? 7 : (i) == 2 ? 6 : (i) == 3 ? -1 : (i) == 4 ? 5 :  -1)
#define AF_PRS_CH0_PIN(i)           ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 6 : (i) == 7 ? 7 : (i) == 8 ? 6 : (i) == 9 ? 7 : (i) == 10 ? 8 : (i) == 11 ? 9 : (i) == 12 ? 10 : (i) == 13 ? 11 :  -1)
#define AF_PRS_CH1_PIN(i)           ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 6 : (i) == 6 ? 7 : (i) == 7 ? 0 :  -1)
#define AF_PRS_CH2_PIN(i)           ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 6 : (i) == 5 ? 7 : (i) == 6 ? 0 : (i) == 7 ? 1 :  -1)
#define AF_PRS_CH3_PIN(i)           ((i) == 0 ? 3 : (i) == 1 ? 4 : (i) == 2 ? 5 : (i) == 3 ? 6 : (i) == 4 ? 7 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 2 : (i) == 8 ? 9 : (i) == 9 ? 10 : (i) == 10 ? 11 : (i) == 11 ? 12 : (i) == 12 ? 13 : (i) == 13 ? 14 : (i) == 14 ? 15 :  -1)
#define AF_PRS_CH4_PIN(i)           ((i) == 0 ? 9 : (i) == 1 ? 10 : (i) == 2 ? 11 : (i) == 3 ? 12 : (i) == 4 ? 13 : (i) == 5 ? 14 : (i) == 6 ? 15 :  -1)
#define AF_PRS_CH5_PIN(i)           ((i) == 0 ? 10 : (i) == 1 ? 11 : (i) == 2 ? 12 : (i) == 3 ? 13 : (i) == 4 ? 14 : (i) == 5 ? 15 : (i) == 6 ? 9 :  -1)
#define AF_PRS_CH6_PIN(i)           ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 9 : (i) == 12 ? 10 : (i) == 13 ? 11 : (i) == 14 ? 12 : (i) == 15 ? 13 : (i) == 16 ? 14 : (i) == 17 ? 15 :  -1)
#define AF_PRS_CH7_PIN(i)           ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 0 :  -1)
#define AF_PRS_CH8_PIN(i)           ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 11 : (i) == 5 ? 12 : (i) == 6 ? 13 : (i) == 7 ? 14 : (i) == 8 ? 15 : (i) == 9 ? 0 : (i) == 10 ? 1 :  -1)
#define AF_PRS_CH9_PIN(i)           ((i) == 0 ? 3 : (i) == 1 ? 4 : (i) == 2 ? 5 : (i) == 3 ? 11 : (i) == 4 ? 12 : (i) == 5 ? 13 : (i) == 6 ? 14 : (i) == 7 ? 15 : (i) == 8 ? 0 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 :  -1)
#define AF_PRS_CH10_PIN(i)          ((i) == 0 ? 6 : (i) == 1 ? 7 : (i) == 2 ? 8 : (i) == 3 ? 9 : (i) == 4 ? 10 : (i) == 5 ? 11 :  -1)
#define AF_PRS_CH11_PIN(i)          ((i) == 0 ? 7 : (i) == 1 ? 8 : (i) == 2 ? 9 : (i) == 3 ? 10 : (i) == 4 ? 11 : (i) == 5 ? 6 :  -1)
#define AF_TIMER0_CC0_PIN(i)        ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_TIMER0_CC1_PIN(i)        ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_TIMER0_CC2_PIN(i)        ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 11 : (i) == 5 ? 12 : (i) == 6 ? 13 : (i) == 7 ? 14 : (i) == 8 ? 15 : (i) == 9 ? 6 : (i) == 10 ? 7 : (i) == 11 ? 8 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 9 : (i) == 16 ? 10 : (i) == 17 ? 11 : (i) == 18 ? 12 : (i) == 19 ? 13 : (i) == 20 ? 14 : (i) == 21 ? 15 : (i) == 22 ? 0 : (i) == 23 ? 1 : (i) == 24 ? 2 : (i) == 25 ? 3 : (i) == 26 ? 4 : (i) == 27 ? 5 : (i) == 28 ? 6 : (i) == 29 ? 7 : (i) == 30 ? 0 : (i) == 31 ? 1 :  -1)
#define AF_TIMER0_CC3_PIN(i)        (-1)
#define AF_TIMER0_CDTI0_PIN(i)      ((i) == 0 ? 3 : (i) == 1 ? 4 : (i) == 2 ? 5 : (i) == 3 ? 11 : (i) == 4 ? 12 : (i) == 5 ? 13 : (i) == 6 ? 14 : (i) == 7 ? 15 : (i) == 8 ? 6 : (i) == 9 ? 7 : (i) == 10 ? 8 : (i) == 11 ? 9 : (i) == 12 ? 10 : (i) == 13 ? 11 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 12 : (i) == 18 ? 13 : (i) == 19 ? 14 : (i) == 20 ? 15 : (i) == 21 ? 0 : (i) == 22 ? 1 : (i) == 23 ? 2 : (i) == 24 ? 3 : (i) == 25 ? 4 : (i) == 26 ? 5 : (i) == 27 ? 6 : (i) == 28 ? 7 : (i) == 29 ? 0 : (i) == 30 ? 1 : (i) == 31 ? 2 :  -1)
#define AF_TIMER0_CDTI1_PIN(i)      ((i) == 0 ? 4 : (i) == 1 ? 5 : (i) == 2 ? 11 : (i) == 3 ? 12 : (i) == 4 ? 13 : (i) == 5 ? 14 : (i) == 6 ? 15 : (i) == 7 ? 6 : (i) == 8 ? 7 : (i) == 9 ? 8 : (i) == 10 ? 9 : (i) == 11 ? 10 : (i) == 12 ? 11 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 12 : (i) == 17 ? 13 : (i) == 18 ? 14 : (i) == 19 ? 15 : (i) == 20 ? 0 : (i) == 21 ? 1 : (i) == 22 ? 2 : (i) == 23 ? 3 : (i) == 24 ? 4 : (i) == 25 ? 5 : (i) == 26 ? 6 : (i) == 27 ? 7 : (i) == 28 ? 0 : (i) == 29 ? 1 : (i) == 30 ? 2 : (i) == 31 ? 3 :  -1)
#define AF_TIMER0_CDTI2_PIN(i)      ((i) == 0 ? 5 : (i) == 1 ? 11 : (i) == 2 ? 12 : (i) == 3 ? 13 : (i) == 4 ? 14 : (i) == 5 ? 15 : (i) == 6 ? 6 : (i) == 7 ? 7 : (i) == 8 ? 8 : (i) == 9 ? 9 : (i) == 10 ? 10 : (i) == 11 ? 11 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 12 : (i) == 16 ? 13 : (i) == 17 ? 14 : (i) == 18 ? 15 : (i) == 19 ? 0 : (i) == 20 ? 1 : (i) == 21 ? 2 : (i) == 22 ? 3 : (i) == 23 ? 4 : (i) == 24 ? 5 : (i) == 25 ? 6 : (i) == 26 ? 7 : (i) == 27 ? 0 : (i) == 28 ? 1 : (i) == 29 ? 2 : (i) == 30 ? 3 : (i) == 31 ? 4 :  -1)
#define AF_TIMER0_CDTI3_PIN(i)      (-1)
#define AF_TIMER1_CC0_PIN(i)        ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_TIMER1_CC1_PIN(i)        ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_TIMER1_CC2_PIN(i)        ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 11 : (i) == 5 ? 12 : (i) == 6 ? 13 : (i) == 7 ? 14 : (i) == 8 ? 15 : (i) == 9 ? 6 : (i) == 10 ? 7 : (i) == 11 ? 8 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 9 : (i) == 16 ? 10 : (i) == 17 ? 11 : (i) == 18 ? 12 : (i) == 19 ? 13 : (i) == 20 ? 14 : (i) == 21 ? 15 : (i) == 22 ? 0 : (i) == 23 ? 1 : (i) == 24 ? 2 : (i) == 25 ? 3 : (i) == 26 ? 4 : (i) == 27 ? 5 : (i) == 28 ? 6 : (i) == 29 ? 7 : (i) == 30 ? 0 : (i) == 31 ? 1 :  -1)
#define AF_TIMER1_CC3_PIN(i)        ((i) == 0 ? 3 : (i) == 1 ? 4 : (i) == 2 ? 5 : (i) == 3 ? 11 : (i) == 4 ? 12 : (i) == 5 ? 13 : (i) == 6 ? 14 : (i) == 7 ? 15 : (i) == 8 ? 6 : (i) == 9 ? 7 : (i) == 10 ? 8 : (i) == 11 ? 9 : (i) == 12 ? 10 : (i) == 13 ? 11 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 12 : (i) == 18 ? 13 : (i) == 19 ? 14 : (i) == 20 ? 15 : (i) == 21 ? 0 : (i) == 22 ? 1 : (i) == 23 ? 2 : (i) == 24 ? 3 : (i) == 25 ? 4 : (i) == 26 ? 5 : (i) == 27 ? 6 : (i) == 28 ? 7 : (i) == 29 ? 0 : (i) == 30 ? 1 : (i) == 31 ? 2 :  -1)
#define AF_TIMER1_CDTI0_PIN(i)      (-1)
#define AF_TIMER1_CDTI1_PIN(i)      (-1)
#define AF_TIMER1_CDTI2_PIN(i)      (-1)
#define AF_TIMER1_CDTI3_PIN(i)      (-1)
#define AF_WTIMER0_CC0_PIN(i)       ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? 11 : (i) == 16 ? 12 : (i) == 17 ? 13 : (i) == 18 ? 14 : (i) == 19 ? 15 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? 6 : (i) == 27 ? 7 : (i) == 28 ? 8 : (i) == 29 ? 9 : (i) == 30 ? 10 : (i) == 31 ? 11 :  -1)
#define AF_WTIMER0_CC1_PIN(i)       ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? 11 : (i) == 14 ? 12 : (i) == 15 ? 13 : (i) == 16 ? 14 : (i) == 17 ? 15 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? 6 : (i) == 25 ? 7 : (i) == 26 ? 8 : (i) == 27 ? 9 : (i) == 28 ? 10 : (i) == 29 ? 11 : (i) == 30 ? -1 : (i) == 31 ? 9 :  -1)
#define AF_WTIMER0_CC2_PIN(i)       ((i) == 0 ? 4 : (i) == 1 ? 5 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? 11 : (i) == 12 ? 12 : (i) == 13 ? 13 : (i) == 14 ? 14 : (i) == 15 ? 15 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? 6 : (i) == 23 ? 7 : (i) == 24 ? 8 : (i) == 25 ? 9 : (i) == 26 ? 10 : (i) == 27 ? 11 : (i) == 28 ? -1 : (i) == 29 ? 9 : (i) == 30 ? 10 : (i) == 31 ? 11 :  -1)
#define AF_WTIMER0_CC3_PIN(i)       (-1)
#define AF_WTIMER0_CDTI0_PIN(i)     ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? 11 : (i) == 8 ? 12 : (i) == 9 ? 13 : (i) == 10 ? 14 : (i) == 11 ? 15 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? 6 : (i) == 19 ? 7 : (i) == 20 ? 8 : (i) == 21 ? 9 : (i) == 22 ? 10 : (i) == 23 ? 11 : (i) == 24 ? -1 : (i) == 25 ? 9 : (i) == 26 ? 10 : (i) == 27 ? 11 : (i) == 28 ? 12 : (i) == 29 ? 13 : (i) == 30 ? 14 : (i) == 31 ? 15 :  -1)
#define AF_WTIMER0_CDTI1_PIN(i)     ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? 6 : (i) == 17 ? 7 : (i) == 18 ? 8 : (i) == 19 ? 9 : (i) == 20 ? 10 : (i) == 21 ? 11 : (i) == 22 ? -1 : (i) == 23 ? 9 : (i) == 24 ? 10 : (i) == 25 ? 11 : (i) == 26 ? 12 : (i) == 27 ? 13 : (i) == 28 ? 14 : (i) == 29 ? 15 : (i) == 30 ? 0 : (i) == 31 ? 1 :  -1)
#define AF_WTIMER0_CDTI2_PIN(i)     ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 11 : (i) == 4 ? 12 : (i) == 5 ? 13 : (i) == 6 ? 14 : (i) == 7 ? 15 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? 6 : (i) == 15 ? 7 : (i) == 16 ? 8 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? -1 : (i) == 21 ? 9 : (i) == 22 ? 10 : (i) == 23 ? 11 : (i) == 24 ? 12 : (i) == 25 ? 13 : (i) == 26 ? 14 : (i) == 27 ? 15 : (i) == 28 ? 0 : (i) == 29 ? 1 : (i) == 30 ? 2 : (i) == 31 ? 3 :  -1)
#define AF_WTIMER0_CDTI3_PIN(i)     (-1)
#define AF_USART0_TX_PIN(i)         ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_USART0_RX_PIN(i)         ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_USART0_CLK_PIN(i)        ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 11 : (i) == 5 ? 12 : (i) == 6 ? 13 : (i) == 7 ? 14 : (i) == 8 ? 15 : (i) == 9 ? 6 : (i) == 10 ? 7 : (i) == 11 ? 8 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 9 : (i) == 16 ? 10 : (i) == 17 ? 11 : (i) == 18 ? 12 : (i) == 19 ? 13 : (i) == 20 ? 14 : (i) == 21 ? 15 : (i) == 22 ? 0 : (i) == 23 ? 1 : (i) == 24 ? 2 : (i) == 25 ? 3 : (i) == 26 ? 4 : (i) == 27 ? 5 : (i) == 28 ? 6 : (i) == 29 ? 7 : (i) == 30 ? 0 : (i) == 31 ? 1 :  -1)
#define AF_USART0_CS_PIN(i)         ((i) == 0 ? 3 : (i) == 1 ? 4 : (i) == 2 ? 5 : (i) == 3 ? 11 : (i) == 4 ? 12 : (i) == 5 ? 13 : (i) == 6 ? 14 : (i) == 7 ? 15 : (i) == 8 ? 6 : (i) == 9 ? 7 : (i) == 10 ? 8 : (i) == 11 ? 9 : (i) == 12 ? 10 : (i) == 13 ? 11 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 12 : (i) == 18 ? 13 : (i) == 19 ? 14 : (i) == 20 ? 15 : (i) == 21 ? 0 : (i) == 22 ? 1 : (i) == 23 ? 2 : (i) == 24 ? 3 : (i) == 25 ? 4 : (i) == 26 ? 5 : (i) == 27 ? 6 : (i) == 28 ? 7 : (i) == 29 ? 0 : (i) == 30 ? 1 : (i) == 31 ? 2 :  -1)
#define AF_USART0_CTS_PIN(i)        ((i) == 0 ? 4 : (i) == 1 ? 5 : (i) == 2 ? 11 : (i) == 3 ? 12 : (i) == 4 ? 13 : (i) == 5 ? 14 : (i) == 6 ? 15 : (i) == 7 ? 6 : (i) == 8 ? 7 : (i) == 9 ? 8 : (i) == 10 ? 9 : (i) == 11 ? 10 : (i) == 12 ? 11 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 12 : (i) == 17 ? 13 : (i) == 18 ? 14 : (i) == 19 ? 15 : (i) == 20 ? 0 : (i) == 21 ? 1 : (i) == 22 ? 2 : (i) == 23 ? 3 : (i) == 24 ? 4 : (i) == 25 ? 5 : (i) == 26 ? 6 : (i) == 27 ? 7 : (i) == 28 ? 0 : (i) == 29 ? 1 : (i) == 30 ? 2 : (i) == 31 ? 3 :  -1)
#define AF_USART0_RTS_PIN(i)        ((i) == 0 ? 5 : (i) == 1 ? 11 : (i) == 2 ? 12 : (i) == 3 ? 13 : (i) == 4 ? 14 : (i) == 5 ? 15 : (i) == 6 ? 6 : (i) == 7 ? 7 : (i) == 8 ? 8 : (i) == 9 ? 9 : (i) == 10 ? 10 : (i) == 11 ? 11 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 12 : (i) == 16 ? 13 : (i) == 17 ? 14 : (i) == 18 ? 15 : (i) == 19 ? 0 : (i) == 20 ? 1 : (i) == 21 ? 2 : (i) == 22 ? 3 : (i) == 23 ? 4 : (i) == 24 ? 5 : (i) == 25 ? 6 : (i) == 26 ? 7 : (i) == 27 ? 0 : (i) == 28 ? 1 : (i) == 29 ? 2 : (i) == 30 ? 3 : (i) == 31 ? 4 :  -1)
#define AF_USART1_TX_PIN(i)         ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_USART1_RX_PIN(i)         ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_USART1_CLK_PIN(i)        ((i) == 0 ? 2 : (i) == 1 ? 3 : (i) == 2 ? 4 : (i) == 3 ? 5 : (i) == 4 ? 11 : (i) == 5 ? 12 : (i) == 6 ? 13 : (i) == 7 ? 14 : (i) == 8 ? 15 : (i) == 9 ? 6 : (i) == 10 ? 7 : (i) == 11 ? 8 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 9 : (i) == 16 ? 10 : (i) == 17 ? 11 : (i) == 18 ? 12 : (i) == 19 ? 13 : (i) == 20 ? 14 : (i) == 21 ? 15 : (i) == 22 ? 0 : (i) == 23 ? 1 : (i) == 24 ? 2 : (i) == 25 ? 3 : (i) == 26 ? 4 : (i) == 27 ? 5 : (i) == 28 ? 6 : (i) == 29 ? 7 : (i) == 30 ? 0 : (i) == 31 ? 1 :  -1)
#define AF_USART1_CS_PIN(i)         ((i) == 0 ? 3 : (i) == 1 ? 4 : (i) == 2 ? 5 : (i) == 3 ? 11 : (i) == 4 ? 12 : (i) == 5 ? 13 : (i) == 6 ? 14 : (i) == 7 ? 15 : (i) == 8 ? 6 : (i) == 9 ? 7 : (i) == 10 ? 8 : (i) == 11 ? 9 : (i) == 12 ? 10 : (i) == 13 ? 11 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 12 : (i) == 18 ? 13 : (i) == 19 ? 14 : (i) == 20 ? 15 : (i) == 21 ? 0 : (i) == 22 ? 1 : (i) == 23 ? 2 : (i) == 24 ? 3 : (i) == 25 ? 4 : (i) == 26 ? 5 : (i) == 27 ? 6 : (i) == 28 ? 7 : (i) == 29 ? 0 : (i) == 30 ? 1 : (i) == 31 ? 2 :  -1)
#define AF_USART1_CTS_PIN(i)        ((i) == 0 ? 4 : (i) == 1 ? 5 : (i) == 2 ? 11 : (i) == 3 ? 12 : (i) == 4 ? 13 : (i) == 5 ? 14 : (i) == 6 ? 15 : (i) == 7 ? 6 : (i) == 8 ? 7 : (i) == 9 ? 8 : (i) == 10 ? 9 : (i) == 11 ? 10 : (i) == 12 ? 11 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 12 : (i) == 17 ? 13 : (i) == 18 ? 14 : (i) == 19 ? 15 : (i) == 20 ? 0 : (i) == 21 ? 1 : (i) == 22 ? 2 : (i) == 23 ? 3 : (i) == 24 ? 4 : (i) == 25 ? 5 : (i) == 26 ? 6 : (i) == 27 ? 7 : (i) == 28 ? 0 : (i) == 29 ? 1 : (i) == 30 ? 2 : (i) == 31 ? 3 :  -1)
#define AF_USART1_RTS_PIN(i)        ((i) == 0 ? 5 : (i) == 1 ? 11 : (i) == 2 ? 12 : (i) == 3 ? 13 : (i) == 4 ? 14 : (i) == 5 ? 15 : (i) == 6 ? 6 : (i) == 7 ? 7 : (i) == 8 ? 8 : (i) == 9 ? 9 : (i) == 10 ? 10 : (i) == 11 ? 11 : (i) == 12 ? 9 : (i) == 13 ? 10 : (i) == 14 ? 11 : (i) == 15 ? 12 : (i) == 16 ? 13 : (i) == 17 ? 14 : (i) == 18 ? 15 : (i) == 19 ? 0 : (i) == 20 ? 1 : (i) == 21 ? 2 : (i) == 22 ? 3 : (i) == 23 ? 4 : (i) == 24 ? 5 : (i) == 25 ? 6 : (i) == 26 ? 7 : (i) == 27 ? 0 : (i) == 28 ? 1 : (i) == 29 ? 2 : (i) == 30 ? 3 : (i) == 31 ? 4 :  -1)
#define AF_USART2_TX_PIN(i)         ((i) == 0 ? 5 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? 0 : (i) == 15 ? 1 : (i) == 16 ? 3 : (i) == 17 ? 4 : (i) == 18 ? 5 : (i) == 19 ? 6 : (i) == 20 ? 7 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_USART2_RX_PIN(i)         ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? 0 : (i) == 14 ? 1 : (i) == 15 ? 3 : (i) == 16 ? 4 : (i) == 17 ? 5 : (i) == 18 ? 6 : (i) == 19 ? 7 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? 5 :  -1)
#define AF_USART2_CLK_PIN(i)        ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? 0 : (i) == 13 ? 1 : (i) == 14 ? 3 : (i) == 15 ? 4 : (i) == 16 ? 5 : (i) == 17 ? 6 : (i) == 18 ? 7 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? 5 : (i) == 31 ? -1 :  -1)
#define AF_USART2_CS_PIN(i)         ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? 0 : (i) == 12 ? 1 : (i) == 13 ? 3 : (i) == 14 ? 4 : (i) == 15 ? 5 : (i) == 16 ? 6 : (i) == 17 ? 7 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? 5 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_USART2_CTS_PIN(i)        ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? 0 : (i) == 11 ? 1 : (i) == 12 ? 3 : (i) == 13 ? 4 : (i) == 14 ? 5 : (i) == 15 ? 6 : (i) == 16 ? 7 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? 5 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_USART2_RTS_PIN(i)        ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? 0 : (i) == 10 ? 1 : (i) == 11 ? 3 : (i) == 12 ? 4 : (i) == 13 ? 5 : (i) == 14 ? 6 : (i) == 15 ? 7 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? 5 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_LEUART0_TX_PIN(i)        ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_LEUART0_RX_PIN(i)        ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_LETIMER0_OUT0_PIN(i)     ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_LETIMER0_OUT1_PIN(i)     ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_PCNT0_S0IN_PIN(i)        ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_PCNT0_S1IN_PIN(i)        ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_I2C0_SDA_PIN(i)          ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_I2C0_SCL_PIN(i)          ((i) == 0 ? 1 : (i) == 1 ? 2 : (i) == 2 ? 3 : (i) == 3 ? 4 : (i) == 4 ? 5 : (i) == 5 ? 11 : (i) == 6 ? 12 : (i) == 7 ? 13 : (i) == 8 ? 14 : (i) == 9 ? 15 : (i) == 10 ? 6 : (i) == 11 ? 7 : (i) == 12 ? 8 : (i) == 13 ? 9 : (i) == 14 ? 10 : (i) == 15 ? 11 : (i) == 16 ? 9 : (i) == 17 ? 10 : (i) == 18 ? 11 : (i) == 19 ? 12 : (i) == 20 ? 13 : (i) == 21 ? 14 : (i) == 22 ? 15 : (i) == 23 ? 0 : (i) == 24 ? 1 : (i) == 25 ? 2 : (i) == 26 ? 3 : (i) == 27 ? 4 : (i) == 28 ? 5 : (i) == 29 ? 6 : (i) == 30 ? 7 : (i) == 31 ? 0 :  -1)
#define AF_I2C1_SDA_PIN(i)          ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? 10 : (i) == 20 ? 11 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_I2C1_SCL_PIN(i)          ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_ACMP0_OUT_PIN(i)         ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_ACMP1_OUT_PIN(i)         ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 3 : (i) == 4 ? 4 : (i) == 5 ? 5 : (i) == 6 ? 11 : (i) == 7 ? 12 : (i) == 8 ? 13 : (i) == 9 ? 14 : (i) == 10 ? 15 : (i) == 11 ? 6 : (i) == 12 ? 7 : (i) == 13 ? 8 : (i) == 14 ? 9 : (i) == 15 ? 10 : (i) == 16 ? 11 : (i) == 17 ? 9 : (i) == 18 ? 10 : (i) == 19 ? 11 : (i) == 20 ? 12 : (i) == 21 ? 13 : (i) == 22 ? 14 : (i) == 23 ? 15 : (i) == 24 ? 0 : (i) == 25 ? 1 : (i) == 26 ? 2 : (i) == 27 ? 3 : (i) == 28 ? 4 : (i) == 29 ? 5 : (i) == 30 ? 6 : (i) == 31 ? 7 :  -1)
#define AF_LESENSE_CH0_PIN(i)       (-1)
#define AF_LESENSE_CH1_PIN(i)       ((i) == 0 ? 9 :  -1)
#define AF_LESENSE_CH2_PIN(i)       ((i) == 0 ? 10 :  -1)
#define AF_LESENSE_CH3_PIN(i)       ((i) == 0 ? 11 :  -1)
#define AF_LESENSE_CH4_PIN(i)       ((i) == 0 ? 12 :  -1)
#define AF_LESENSE_CH5_PIN(i)       ((i) == 0 ? 13 :  -1)
#define AF_LESENSE_CH6_PIN(i)       ((i) == 0 ? 14 :  -1)
#define AF_LESENSE_CH7_PIN(i)       ((i) == 0 ? 15 :  -1)
#define AF_LESENSE_CH8_PIN(i)       ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH9_PIN(i)       ((i) == 0 ? 1 :  -1)
#define AF_LESENSE_CH10_PIN(i)      ((i) == 0 ? 2 :  -1)
#define AF_LESENSE_CH11_PIN(i)      ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH12_PIN(i)      ((i) == 0 ? 4 :  -1)
#define AF_LESENSE_CH13_PIN(i)      ((i) == 0 ? 5 :  -1)
#define AF_LESENSE_CH14_PIN(i)      (-1)
#define AF_LESENSE_CH15_PIN(i)      (-1)
#define AF_LESENSE_ALTEX0_PIN(i)    (-1)
#define AF_LESENSE_ALTEX1_PIN(i)    (-1)
#define AF_LESENSE_ALTEX2_PIN(i)    (-1)
#define AF_LESENSE_ALTEX3_PIN(i)    (-1)
#define AF_LESENSE_ALTEX4_PIN(i)    (-1)
#define AF_LESENSE_ALTEX5_PIN(i)    (-1)
#define AF_LESENSE_ALTEX6_PIN(i)    (-1)
#define AF_LESENSE_ALTEX7_PIN(i)    (-1)
#define AF_DBG_TDI_PIN(i)           ((i) == 0 ? 3 :  -1)
#define AF_DBG_TDO_PIN(i)           ((i) == 0 ? 2 :  -1)
#define AF_DBG_SWV_PIN(i)           ((i) == 0 ? 2 : (i) == 1 ? 13 : (i) == 2 ? 15 : (i) == 3 ? 11 :  -1)
#define AF_DBG_SWDIOTMS_PIN(i)      ((i) == 0 ? 1 :  -1)
#define AF_DBG_SWCLKTCK_PIN(i)      ((i) == 0 ? 0 :  -1)
#define AF_ETM_TCLK_PIN(i)          ((i) == 0 ? -1 : (i) == 1 ? 5 : (i) == 2 ? -1 : (i) == 3 ? 6 :  -1)
#define AF_ETM_TD0_PIN(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 7 :  -1)
#define AF_ETM_TD1_PIN(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 8 :  -1)
#define AF_ETM_TD2_PIN(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 9 :  -1)
#define AF_ETM_TD3_PIN(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 10 :  -1)

/** @} End of group EFR32FG13P_AF_Pins */
/** @} End of group Parts */

