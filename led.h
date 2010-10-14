/**----------------------------------------------------------------------------
Проект:     SDK-2.0 
Название:   Управление светодиодными индикаторами
Файл:       led.h
Версия:     1.0.3
------------------------------------------------------------------------------*/

#ifndef __LED_H
#define __LED_H

#define LED_ON				1   // Светодиод включен
#define LED_OFF				0   // Светодиод выключен

#define LL_SEL_00			0
#define LL_SEL_01			1
#define LL_SEL_10			2
#define LL_SEL_11			3


extern void init_led( void );

extern void init_led_status( void );
extern void led_status( unsigned char mode );

extern void init_led_line( void );
extern void led_line( unsigned char light );
extern void led_line_refresh( void );
extern void set_led_line_selection( unsigned char sel );
extern void set_led_line_data( unsigned char light );

#endif // __LED_H
