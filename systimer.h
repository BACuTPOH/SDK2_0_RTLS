/**----------------------------------------------------------------------------
Проект:     SDK-2.0 
Название:   Драйвер системного таймера
Файл:       systimer.h
Версия:     1.0.2
-----------------------------------------------------------------------------*/

#ifndef __SYSTIMER_H
#define __SYSTIMER_H

extern void init_systimer0( void );
extern void start_timer0( void );
extern unsigned long clock_ms( void );
extern unsigned long dtime_ms( unsigned long t2 );
extern void delay_ms( unsigned long ms );

extern void init_systimer1( void );
extern void start_timer1( void );
extern void reset_timer1( void );
extern unsigned long clock_mcs( void );
extern unsigned long dtime_mcs( unsigned long t2 );
extern void delay_mcs( unsigned long ms );

#endif // __SYSTIMER_H
