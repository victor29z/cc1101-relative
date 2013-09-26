/* =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *   BSP (Board Support Package)
 *   Target : STM32
 *            "STM32 Board"
 *   LED definition file.
 * =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 */

#ifndef BSP_LED_DEFS_H
#define BSP_LED_DEFS_H

/* ------------------------------------------------------------------------------------------------
 *                                           Includes
 * ------------------------------------------------------------------------------------------------
 */
#include "bsp_board_defs.h"


/* ------------------------------------------------------------------------------------------------
 *                                      Configuration
 * ------------------------------------------------------------------------------------------------
 */
#if defined(STM32VLDISCOVERY)

	#define __bsp_NUM_LEDS__			2

	#define __bsp_LED1_PIN__			PC9
	#define __bsp_LED1_BIT__            (__bsp_LED1_PIN__ & 0xF)
	#define __bsp_LED1_PORT__           GPIOC->ODR
	#define __bsp_LED1_DDR__			0
	#define __bsp_LED1_MODE__			((uint32_t)GPIO_Mode_Out_PP | (uint32_t)GPIO_Speed_2MHz)
	#define __bsp_LED1_IS_ACTIVE_LOW__  0

	#define __bsp_LED2_PIN__			PC8
	#define __bsp_LED2_BIT__            (__bsp_LED2_PIN__ & 0xF)
	#define __bsp_LED2_PORT__           GPIOC->ODR
	#define __bsp_LED2_DDR__			0
	#define __bsp_LED2_MODE__			((uint32_t)GPIO_Mode_Out_PP | (uint32_t)GPIO_Speed_2MHz)
	#define __bsp_LED2_IS_ACTIVE_LOW__  0

#elif defined(MACH_RBT6)
	#define __bsp_NUM_LEDS__			4
	
	#define __bsp_LED1_PIN__			PB9
	#define __bsp_LED1_BIT__            (__bsp_LED1_PIN__ & 0xF)
	#define __bsp_LED1_PORT__           GPIOB->ODR
	#define __bsp_LED1_DDR__			0
	#define __bsp_LED1_MODE__			((uint32_t)GPIO_Mode_Out_PP | (uint32_t)GPIO_Speed_2MHz)
	#define __bsp_LED1_IS_ACTIVE_LOW__  0

	#define __bsp_LED2_PIN__			PB8
	#define __bsp_LED2_BIT__            (__bsp_LED2_PIN__ & 0xF)
	#define __bsp_LED2_PORT__           GPIOB->ODR
	#define __bsp_LED2_DDR__			0
	#define __bsp_LED2_MODE__			((uint32_t)GPIO_Mode_Out_PP | (uint32_t)GPIO_Speed_2MHz)
	#define __bsp_LED2_IS_ACTIVE_LOW__  0

	#define __bsp_LED3_PIN__			PB7
	#define __bsp_LED3_BIT__			(__bsp_LED3_PIN__ & 0xF)
	#define __bsp_LED3_PORT__			GPIOB->ODR
	#define __bsp_LED3_DDR__			0
	#define __bsp_LED3_MODE__			((uint32_t)GPIO_Mode_Out_PP | (uint32_t)GPIO_Speed_2MHz)
	#define __bsp_LED3_IS_ACTIVE_LOW__	0

	#define __bsp_LED4_PIN__			PB6
	#define __bsp_LED4_BIT__			(__bsp_LED4_PIN__ & 0xF)
	#define __bsp_LED4_PORT__			GPIOB->ODR
	#define __bsp_LED4_DDR__			0
	#define __bsp_LED4_MODE__			((uint32_t)GPIO_Mode_Out_PP | (uint32_t)GPIO_Speed_2MHz)
	#define __bsp_LED4_IS_ACTIVE_LOW__	0

#else
	#define __bsp_NUM_LEDS__			0
#endif

#define __bsp_LED_BLINK_LOOP_COUNT__	(3000ul * BSP_CONFIG_CLOCK_MHZ / 72)


/* ------------------------------------------------------------------------------------------------
 *                                 Include Generic LED Macros
 * ------------------------------------------------------------------------------------------------
 */
#include "code/bsp_generic_leds.h"

#if (__bsp_NUM_LED1_DEFINES__ == 4)
	#undef  __bsp_LED1_CONFIG__
	#define __bsp_LED1_CONFIG__()	__bsp_PIN_CONFIG__  ( __bsp_LED1_PIN__, __bsp_LED1_MODE__ )
#endif
#if (__bsp_NUM_LED2_DEFINES__ == 4)
	#undef  __bsp_LED2_CONFIG__
	#define __bsp_LED2_CONFIG__()	__bsp_PIN_CONFIG__  ( __bsp_LED2_PIN__, __bsp_LED2_MODE__ )
#endif
#if (__bsp_NUM_LED3_DEFINES__ == 4)
	#undef  __bsp_LED3_CONFIG__
	#define __bsp_LED3_CONFIG__()	__bsp_PIN_CONFIG__  ( __bsp_LED3_PIN__, __bsp_LED3_MODE__ )
#endif
#if (__bsp_NUM_LED4_DEFINES__ == 4)
	#undef  __bsp_LED4_CONFIG__
	#define __bsp_LED4_CONFIG__()	__bsp_PIN_CONFIG__  ( __bsp_LED4_PIN__, __bsp_LED4_MODE__ )
#endif


#endif
