/*--------------------------------------------------------------------------
RTX51TNY.H

Prototypes for RTX51 Tiny Real-Time Operating System Version 1.07
Copyright (c) 1988-2001 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
--------------------------------------------------------------------------*/

/* constants for os_wait function */
#define K_SIG      1                 /* Wait for Signal   */
#define K_TMO      2                 /* Wait for Timeout  */
#define K_IVL      128               /* Wait for Interval */

/* function return values */
#define NOT_OK     255               /* Parameter Error */
#define TMO_EVENT  8                 /* Timeout Event */
#define SIG_EVENT  4                 /* Signal  Event */

extern char os_create_task     (unsigned char task_id);
extern char os_delete_task     (unsigned char task_id);
extern char os_wait            (unsigned char typ, unsigned char ticks, unsigned int dummy);
extern char os_wait1           (unsigned char typ);
extern char os_wait2           (unsigned char typ, unsigned char ticks);
extern char os_send_signal     (unsigned char task_id);
extern char os_clear_signal    (unsigned char task_id);
extern char isr_send_signal    (unsigned char task_id);
extern char os_running_task_id (void);
