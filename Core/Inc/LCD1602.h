/*
 * LCD1602.h
 *
 *  Created on: Feb 16, 2024
 *      Author: LENOVO
 */

#ifndef INC_LCD1602_H_
#define INC_LCD1602_H_

#include "main.h"

void lcd_init (void);
void lcd_put_cur(int row, int col);
void LCDSendString( char *str );
void LCDClear( void );

#endif /* INC_LCD1602_H_ */
