/*
 * LCD_cfg.h
 *
 *  Created on: Dec 22, 2022
 *      Author: kholoud
 */

#ifndef HAL_LCD_LCD_CFG_H_
#define HAL_LCD_LCD_CFG_H_


/* options : 0 for 8bit_Mode
			 1 for 4bit_Mode
*/
#define LCD_MODE  0


/* options : 0 for LOW_NIBBLE
			 1 for HIGH_NIBBLE
*/
#define LCD_NIBBLE  1

/* options : PORT_A  ->0
			 PORT_B  ->1
             PORT_C  ->2
             PORT_D  ->3
*/
#define LCD_PORT  0


/* options : PORT_A  ->0
			 PORT_B  ->1
             PORT_C  ->2
             PORT_D  ->3
*/
#define LCD_RS_PORT	  1
/* options : 0~7*/
#define LCD_RS_PIN    0


/* options : PORT_A  ->0
			 PORT_B  ->1
             PORT_C  ->2
             PORT_D  ->3
*/
#define LCD_RW_PORT	  1
/* options : 0~7*/
#define LCD_RW_PIN    1


/* options : PORT_A  ->0
			 PORT_B  ->1
             PORT_C  ->2
             PORT_D  ->3
*/
#define LCD_EN_PORT	  1
/* options : 0~7*/
#define LCD_EN_PIN    2




#endif /* HAL_LCD_LCD_CFG_H_ */
