/*--------------------------------------------------------------------------
SETJMP.H

Prototypes for longjmp facility.
Copyright (c) 1988-2001 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
--------------------------------------------------------------------------*/

/* define the buffer type for holding the state information */

#pragma SAVE
#pragma REGPARMS
#ifndef _JMP_BUF_DEFINED
#define _JBLEN	7  /* RET-ADDR, ?C_XBP, ?C_IBP, ?C_BP, SP */
typedef  char jmp_buf[_JBLEN];
#define _JMP_BUF_DEFINED
#endif

/* function prototypes */
int  setjmp  (jmp_buf);
void longjmp (jmp_buf, int);
#pragma RESTORE
