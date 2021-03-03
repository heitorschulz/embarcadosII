/**************************************************************************//**
 * @file
 * @brief em359x_event_usb Register and Bit Field definitions
 * @version 5.1.2
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
 * obligation to support this Software. Silicon Labs is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Silicon Labs will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/
/**************************************************************************//**
 * @defgroup EM359X_EVENT_USB
 * @{
 * @brief EM359X_EVENT_USB Register Declaration
 *****************************************************************************/

typedef struct
{
  __IO uint32_t FLAG;
  __IO uint32_t CFG;
} EVENT_USB_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup EM359X_EVENT_USB_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for EVENT_USB FLAG */
#define _EVENT_USB_FLAG_RESETVALUE             0x00000000UL
#define _EVENT_USB_FLAG_MASK                   0x00FFFFFFUL
#define EVENT_USB_FLAG_WAKEUP                  (0x1UL << 23)
#define _EVENT_USB_FLAG_WAKEUP_SHIFT           23
#define _EVENT_USB_FLAG_WAKEUP_MASK            0x800000UL
#define _EVENT_USB_FLAG_WAKEUP_DEFAULT         0x00000000UL
#define EVENT_USB_FLAG_WAKEUP_DEFAULT          (_EVENT_USB_FLAG_WAKEUP_DEFAULT << 23)
#define EVENT_USB_FLAG_RESUME                  (0x1UL << 22)
#define _EVENT_USB_FLAG_RESUME_SHIFT           22
#define _EVENT_USB_FLAG_RESUME_MASK            0x400000UL
#define _EVENT_USB_FLAG_RESUME_DEFAULT         0x00000000UL
#define EVENT_USB_FLAG_RESUME_DEFAULT          (_EVENT_USB_FLAG_RESUME_DEFAULT << 22)
#define EVENT_USB_FLAG_SUSPEND                 (0x1UL << 21)
#define _EVENT_USB_FLAG_SUSPEND_SHIFT          21
#define _EVENT_USB_FLAG_SUSPEND_MASK           0x200000UL
#define _EVENT_USB_FLAG_SUSPEND_DEFAULT        0x00000000UL
#define EVENT_USB_FLAG_SUSPEND_DEFAULT         (_EVENT_USB_FLAG_SUSPEND_DEFAULT << 21)
#define EVENT_USB_FLAG_RESET                   (0x1UL << 20)
#define _EVENT_USB_FLAG_RESET_SHIFT            20
#define _EVENT_USB_FLAG_RESET_MASK             0x100000UL
#define _EVENT_USB_FLAG_RESET_DEFAULT          0x00000000UL
#define EVENT_USB_FLAG_RESET_DEFAULT           (_EVENT_USB_FLAG_RESET_DEFAULT << 20)
#define EVENT_USB_FLAG_SOF                     (0x1UL << 19)
#define _EVENT_USB_FLAG_SOF_SHIFT              19
#define _EVENT_USB_FLAG_SOF_MASK               0x80000UL
#define _EVENT_USB_FLAG_SOF_DEFAULT            0x00000000UL
#define EVENT_USB_FLAG_SOF_DEFAULT             (_EVENT_USB_FLAG_SOF_DEFAULT << 19)
#define EVENT_USB_FLAG_NAK                     (0x1UL << 18)
#define _EVENT_USB_FLAG_NAK_SHIFT              18
#define _EVENT_USB_FLAG_NAK_MASK               0x40000UL
#define _EVENT_USB_FLAG_NAK_DEFAULT            0x00000000UL
#define EVENT_USB_FLAG_NAK_DEFAULT             (_EVENT_USB_FLAG_NAK_DEFAULT << 18)
#define EVENT_USB_FLAG_PIPERXOVF               (0x1UL << 17)
#define _EVENT_USB_FLAG_PIPERXOVF_SHIFT        17
#define _EVENT_USB_FLAG_PIPERXOVF_MASK         0x20000UL
#define _EVENT_USB_FLAG_PIPERXOVF_DEFAULT      0x00000000UL
#define EVENT_USB_FLAG_PIPERXOVF_DEFAULT       (_EVENT_USB_FLAG_PIPERXOVF_DEFAULT << 17)
#define EVENT_USB_FLAG_PIPETXUND               (0x1UL << 16)
#define _EVENT_USB_FLAG_PIPETXUND_SHIFT        16
#define _EVENT_USB_FLAG_PIPETXUND_MASK         0x10000UL
#define _EVENT_USB_FLAG_PIPETXUND_DEFAULT      0x00000000UL
#define EVENT_USB_FLAG_PIPETXUND_DEFAULT       (_EVENT_USB_FLAG_PIPETXUND_DEFAULT << 16)
#define EVENT_USB_FLAG_BUFRXOVF                (0x1UL << 15)
#define _EVENT_USB_FLAG_BUFRXOVF_SHIFT         15
#define _EVENT_USB_FLAG_BUFRXOVF_MASK          0x8000UL
#define _EVENT_USB_FLAG_BUFRXOVF_DEFAULT       0x00000000UL
#define EVENT_USB_FLAG_BUFRXOVF_DEFAULT        (_EVENT_USB_FLAG_BUFRXOVF_DEFAULT << 15)
#define EVENT_USB_FLAG_BUFTXUND                (0x1UL << 14)
#define _EVENT_USB_FLAG_BUFTXUND_SHIFT         14
#define _EVENT_USB_FLAG_BUFTXUND_MASK          0x4000UL
#define _EVENT_USB_FLAG_BUFTXUND_DEFAULT       0x00000000UL
#define EVENT_USB_FLAG_BUFTXUND_DEFAULT        (_EVENT_USB_FLAG_BUFTXUND_DEFAULT << 14)
#define EVENT_USB_FLAG_RXVALIDEP6              (0x1UL << 13)
#define _EVENT_USB_FLAG_RXVALIDEP6_SHIFT       13
#define _EVENT_USB_FLAG_RXVALIDEP6_MASK        0x2000UL
#define _EVENT_USB_FLAG_RXVALIDEP6_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP6_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP6_DEFAULT << 13)
#define EVENT_USB_FLAG_RXVALIDEP5              (0x1UL << 12)
#define _EVENT_USB_FLAG_RXVALIDEP5_SHIFT       12
#define _EVENT_USB_FLAG_RXVALIDEP5_MASK        0x1000UL
#define _EVENT_USB_FLAG_RXVALIDEP5_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP5_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP5_DEFAULT << 12)
#define EVENT_USB_FLAG_RXVALIDEP4              (0x1UL << 11)
#define _EVENT_USB_FLAG_RXVALIDEP4_SHIFT       11
#define _EVENT_USB_FLAG_RXVALIDEP4_MASK        0x800UL
#define _EVENT_USB_FLAG_RXVALIDEP4_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP4_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP4_DEFAULT << 11)
#define EVENT_USB_FLAG_RXVALIDEP3              (0x1UL << 10)
#define _EVENT_USB_FLAG_RXVALIDEP3_SHIFT       10
#define _EVENT_USB_FLAG_RXVALIDEP3_MASK        0x400UL
#define _EVENT_USB_FLAG_RXVALIDEP3_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP3_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP3_DEFAULT << 10)
#define EVENT_USB_FLAG_RXVALIDEP2              (0x1UL << 9)
#define _EVENT_USB_FLAG_RXVALIDEP2_SHIFT       9
#define _EVENT_USB_FLAG_RXVALIDEP2_MASK        0x200UL
#define _EVENT_USB_FLAG_RXVALIDEP2_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP2_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP2_DEFAULT << 9)
#define EVENT_USB_FLAG_RXVALIDEP1              (0x1UL << 8)
#define _EVENT_USB_FLAG_RXVALIDEP1_SHIFT       8
#define _EVENT_USB_FLAG_RXVALIDEP1_MASK        0x100UL
#define _EVENT_USB_FLAG_RXVALIDEP1_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP1_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP1_DEFAULT << 8)
#define EVENT_USB_FLAG_RXVALIDEP0              (0x1UL << 7)
#define _EVENT_USB_FLAG_RXVALIDEP0_SHIFT       7
#define _EVENT_USB_FLAG_RXVALIDEP0_MASK        0x80UL
#define _EVENT_USB_FLAG_RXVALIDEP0_DEFAULT     0x00000000UL
#define EVENT_USB_FLAG_RXVALIDEP0_DEFAULT      (_EVENT_USB_FLAG_RXVALIDEP0_DEFAULT << 7)
#define EVENT_USB_FLAG_TXACTIVEEP6             (0x1UL << 6)
#define _EVENT_USB_FLAG_TXACTIVEEP6_SHIFT      6
#define _EVENT_USB_FLAG_TXACTIVEEP6_MASK       0x40UL
#define _EVENT_USB_FLAG_TXACTIVEEP6_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP6_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP6_DEFAULT << 6)
#define EVENT_USB_FLAG_TXACTIVEEP5             (0x1UL << 5)
#define _EVENT_USB_FLAG_TXACTIVEEP5_SHIFT      5
#define _EVENT_USB_FLAG_TXACTIVEEP5_MASK       0x20UL
#define _EVENT_USB_FLAG_TXACTIVEEP5_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP5_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP5_DEFAULT << 5)
#define EVENT_USB_FLAG_TXACTIVEEP4             (0x1UL << 4)
#define _EVENT_USB_FLAG_TXACTIVEEP4_SHIFT      4
#define _EVENT_USB_FLAG_TXACTIVEEP4_MASK       0x10UL
#define _EVENT_USB_FLAG_TXACTIVEEP4_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP4_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP4_DEFAULT << 4)
#define EVENT_USB_FLAG_TXACTIVEEP3             (0x1UL << 3)
#define _EVENT_USB_FLAG_TXACTIVEEP3_SHIFT      3
#define _EVENT_USB_FLAG_TXACTIVEEP3_MASK       0x8UL
#define _EVENT_USB_FLAG_TXACTIVEEP3_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP3_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP3_DEFAULT << 3)
#define EVENT_USB_FLAG_TXACTIVEEP2             (0x1UL << 2)
#define _EVENT_USB_FLAG_TXACTIVEEP2_SHIFT      2
#define _EVENT_USB_FLAG_TXACTIVEEP2_MASK       0x4UL
#define _EVENT_USB_FLAG_TXACTIVEEP2_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP2_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP2_DEFAULT << 2)
#define EVENT_USB_FLAG_TXACTIVEEP1             (0x1UL << 1)
#define _EVENT_USB_FLAG_TXACTIVEEP1_SHIFT      1
#define _EVENT_USB_FLAG_TXACTIVEEP1_MASK       0x2UL
#define _EVENT_USB_FLAG_TXACTIVEEP1_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP1_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP1_DEFAULT << 1)
#define EVENT_USB_FLAG_TXACTIVEEP0             (0x1UL << 0)
#define _EVENT_USB_FLAG_TXACTIVEEP0_SHIFT      0
#define _EVENT_USB_FLAG_TXACTIVEEP0_MASK       0x1UL
#define _EVENT_USB_FLAG_TXACTIVEEP0_DEFAULT    0x00000000UL
#define EVENT_USB_FLAG_TXACTIVEEP0_DEFAULT     (_EVENT_USB_FLAG_TXACTIVEEP0_DEFAULT << 0)

/* Bit fields for EVENT_USB CFG */
#define _EVENT_USB_CFG_RESETVALUE             0x00000000UL
#define _EVENT_USB_CFG_MASK                   0x00FFFFFFUL
#define EVENT_USB_CFG_WAKEUP                  (0x1UL << 23)
#define _EVENT_USB_CFG_WAKEUP_SHIFT           23
#define _EVENT_USB_CFG_WAKEUP_MASK            0x800000UL
#define _EVENT_USB_CFG_WAKEUP_DEFAULT         0x00000000UL
#define EVENT_USB_CFG_WAKEUP_DEFAULT          (_EVENT_USB_CFG_WAKEUP_DEFAULT << 23)
#define EVENT_USB_CFG_RESUME                  (0x1UL << 22)
#define _EVENT_USB_CFG_RESUME_SHIFT           22
#define _EVENT_USB_CFG_RESUME_MASK            0x400000UL
#define _EVENT_USB_CFG_RESUME_DEFAULT         0x00000000UL
#define EVENT_USB_CFG_RESUME_DEFAULT          (_EVENT_USB_CFG_RESUME_DEFAULT << 22)
#define EVENT_USB_CFG_SUSPEND                 (0x1UL << 21)
#define _EVENT_USB_CFG_SUSPEND_SHIFT          21
#define _EVENT_USB_CFG_SUSPEND_MASK           0x200000UL
#define _EVENT_USB_CFG_SUSPEND_DEFAULT        0x00000000UL
#define EVENT_USB_CFG_SUSPEND_DEFAULT         (_EVENT_USB_CFG_SUSPEND_DEFAULT << 21)
#define EVENT_USB_CFG_RESET                   (0x1UL << 20)
#define _EVENT_USB_CFG_RESET_SHIFT            20
#define _EVENT_USB_CFG_RESET_MASK             0x100000UL
#define _EVENT_USB_CFG_RESET_DEFAULT          0x00000000UL
#define EVENT_USB_CFG_RESET_DEFAULT           (_EVENT_USB_CFG_RESET_DEFAULT << 20)
#define EVENT_USB_CFG_SOF                     (0x1UL << 19)
#define _EVENT_USB_CFG_SOF_SHIFT              19
#define _EVENT_USB_CFG_SOF_MASK               0x80000UL
#define _EVENT_USB_CFG_SOF_DEFAULT            0x00000000UL
#define EVENT_USB_CFG_SOF_DEFAULT             (_EVENT_USB_CFG_SOF_DEFAULT << 19)
#define EVENT_USB_CFG_NAK                     (0x1UL << 18)
#define _EVENT_USB_CFG_NAK_SHIFT              18
#define _EVENT_USB_CFG_NAK_MASK               0x40000UL
#define _EVENT_USB_CFG_NAK_DEFAULT            0x00000000UL
#define EVENT_USB_CFG_NAK_DEFAULT             (_EVENT_USB_CFG_NAK_DEFAULT << 18)
#define EVENT_USB_CFG_PIPERXOVF               (0x1UL << 17)
#define _EVENT_USB_CFG_PIPERXOVF_SHIFT        17
#define _EVENT_USB_CFG_PIPERXOVF_MASK         0x20000UL
#define _EVENT_USB_CFG_PIPERXOVF_DEFAULT      0x00000000UL
#define EVENT_USB_CFG_PIPERXOVF_DEFAULT       (_EVENT_USB_CFG_PIPERXOVF_DEFAULT << 17)
#define EVENT_USB_CFG_PIPETXUND               (0x1UL << 16)
#define _EVENT_USB_CFG_PIPETXUND_SHIFT        16
#define _EVENT_USB_CFG_PIPETXUND_MASK         0x10000UL
#define _EVENT_USB_CFG_PIPETXUND_DEFAULT      0x00000000UL
#define EVENT_USB_CFG_PIPETXUND_DEFAULT       (_EVENT_USB_CFG_PIPETXUND_DEFAULT << 16)
#define EVENT_USB_CFG_BUFRXOVF                (0x1UL << 15)
#define _EVENT_USB_CFG_BUFRXOVF_SHIFT         15
#define _EVENT_USB_CFG_BUFRXOVF_MASK          0x8000UL
#define _EVENT_USB_CFG_BUFRXOVF_DEFAULT       0x00000000UL
#define EVENT_USB_CFG_BUFRXOVF_DEFAULT        (_EVENT_USB_CFG_BUFRXOVF_DEFAULT << 15)
#define EVENT_USB_CFG_BUFTXUND                (0x1UL << 14)
#define _EVENT_USB_CFG_BUFTXUND_SHIFT         14
#define _EVENT_USB_CFG_BUFTXUND_MASK          0x4000UL
#define _EVENT_USB_CFG_BUFTXUND_DEFAULT       0x00000000UL
#define EVENT_USB_CFG_BUFTXUND_DEFAULT        (_EVENT_USB_CFG_BUFTXUND_DEFAULT << 14)
#define EVENT_USB_CFG_RXVALIDEP6              (0x1UL << 13)
#define _EVENT_USB_CFG_RXVALIDEP6_SHIFT       13
#define _EVENT_USB_CFG_RXVALIDEP6_MASK        0x2000UL
#define _EVENT_USB_CFG_RXVALIDEP6_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP6_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP6_DEFAULT << 13)
#define EVENT_USB_CFG_RXVALIDEP5              (0x1UL << 12)
#define _EVENT_USB_CFG_RXVALIDEP5_SHIFT       12
#define _EVENT_USB_CFG_RXVALIDEP5_MASK        0x1000UL
#define _EVENT_USB_CFG_RXVALIDEP5_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP5_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP5_DEFAULT << 12)
#define EVENT_USB_CFG_RXVALIDEP4              (0x1UL << 11)
#define _EVENT_USB_CFG_RXVALIDEP4_SHIFT       11
#define _EVENT_USB_CFG_RXVALIDEP4_MASK        0x800UL
#define _EVENT_USB_CFG_RXVALIDEP4_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP4_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP4_DEFAULT << 11)
#define EVENT_USB_CFG_RXVALIDEP3              (0x1UL << 10)
#define _EVENT_USB_CFG_RXVALIDEP3_SHIFT       10
#define _EVENT_USB_CFG_RXVALIDEP3_MASK        0x400UL
#define _EVENT_USB_CFG_RXVALIDEP3_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP3_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP3_DEFAULT << 10)
#define EVENT_USB_CFG_RXVALIDEP2              (0x1UL << 9)
#define _EVENT_USB_CFG_RXVALIDEP2_SHIFT       9
#define _EVENT_USB_CFG_RXVALIDEP2_MASK        0x200UL
#define _EVENT_USB_CFG_RXVALIDEP2_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP2_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP2_DEFAULT << 9)
#define EVENT_USB_CFG_RXVALIDEP1              (0x1UL << 8)
#define _EVENT_USB_CFG_RXVALIDEP1_SHIFT       8
#define _EVENT_USB_CFG_RXVALIDEP1_MASK        0x100UL
#define _EVENT_USB_CFG_RXVALIDEP1_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP1_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP1_DEFAULT << 8)
#define EVENT_USB_CFG_RXVALIDEP0              (0x1UL << 7)
#define _EVENT_USB_CFG_RXVALIDEP0_SHIFT       7
#define _EVENT_USB_CFG_RXVALIDEP0_MASK        0x80UL
#define _EVENT_USB_CFG_RXVALIDEP0_DEFAULT     0x00000000UL
#define EVENT_USB_CFG_RXVALIDEP0_DEFAULT      (_EVENT_USB_CFG_RXVALIDEP0_DEFAULT << 7)
#define EVENT_USB_CFG_TXACTIVEEP6             (0x1UL << 6)
#define _EVENT_USB_CFG_TXACTIVEEP6_SHIFT      6
#define _EVENT_USB_CFG_TXACTIVEEP6_MASK       0x40UL
#define _EVENT_USB_CFG_TXACTIVEEP6_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP6_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP6_DEFAULT << 6)
#define EVENT_USB_CFG_TXACTIVEEP5             (0x1UL << 5)
#define _EVENT_USB_CFG_TXACTIVEEP5_SHIFT      5
#define _EVENT_USB_CFG_TXACTIVEEP5_MASK       0x20UL
#define _EVENT_USB_CFG_TXACTIVEEP5_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP5_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP5_DEFAULT << 5)
#define EVENT_USB_CFG_TXACTIVEEP4             (0x1UL << 4)
#define _EVENT_USB_CFG_TXACTIVEEP4_SHIFT      4
#define _EVENT_USB_CFG_TXACTIVEEP4_MASK       0x10UL
#define _EVENT_USB_CFG_TXACTIVEEP4_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP4_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP4_DEFAULT << 4)
#define EVENT_USB_CFG_TXACTIVEEP3             (0x1UL << 3)
#define _EVENT_USB_CFG_TXACTIVEEP3_SHIFT      3
#define _EVENT_USB_CFG_TXACTIVEEP3_MASK       0x8UL
#define _EVENT_USB_CFG_TXACTIVEEP3_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP3_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP3_DEFAULT << 3)
#define EVENT_USB_CFG_TXACTIVEEP2             (0x1UL << 2)
#define _EVENT_USB_CFG_TXACTIVEEP2_SHIFT      2
#define _EVENT_USB_CFG_TXACTIVEEP2_MASK       0x4UL
#define _EVENT_USB_CFG_TXACTIVEEP2_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP2_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP2_DEFAULT << 2)
#define EVENT_USB_CFG_TXACTIVEEP1             (0x1UL << 1)
#define _EVENT_USB_CFG_TXACTIVEEP1_SHIFT      1
#define _EVENT_USB_CFG_TXACTIVEEP1_MASK       0x2UL
#define _EVENT_USB_CFG_TXACTIVEEP1_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP1_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP1_DEFAULT << 1)
#define EVENT_USB_CFG_TXACTIVEEP0             (0x1UL << 0)
#define _EVENT_USB_CFG_TXACTIVEEP0_SHIFT      0
#define _EVENT_USB_CFG_TXACTIVEEP0_MASK       0x1UL
#define _EVENT_USB_CFG_TXACTIVEEP0_DEFAULT    0x00000000UL
#define EVENT_USB_CFG_TXACTIVEEP0_DEFAULT     (_EVENT_USB_CFG_TXACTIVEEP0_DEFAULT << 0)

/** @} End of group EM359X_EVENT_USB_BitFields */
