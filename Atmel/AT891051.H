/*--------------------------------------------------------------------------
AT891051.H

Header file for the Atmel AT89C1051.
Copyright (c) 1995-1996 Keil Software, Inc.  All rights reserved.
--------------------------------------------------------------------------*/

#ifndef AT89C1051_HEADER_FILE
#define AT89C1051_HEADER_FILE 1

/*------------------------------------------------
Byte Registers
------------------------------------------------*/
sfr SP      = 0x81;
sfr DPL     = 0x82;
sfr DPH     = 0x83;
sfr PCON    = 0x87;
sfr TCON    = 0x88;
sfr TMOD    = 0x89;
sfr TL0     = 0x8A;
sfr TH0     = 0x8C;
sfr P1      = 0x90;
sfr IE      = 0xA8;
sfr P3      = 0xB0;
sfr IP      = 0xB8;
sfr PSW     = 0xD0;
sfr ACC     = 0xE0;
sfr B       = 0xF0;

/*------------------------------------------------
PCON Bit Values
------------------------------------------------*/
#define IDL_    0x01
#define STOP_   0x02
#define EWT_    0x04
#define EPFW_   0x08
#define WTR_    0x10
#define PFW_    0x20
#define POR_    0x40
#define SMOD_   0x80

/*------------------------------------------------
TCON Bit Registers
------------------------------------------------*/
sbit IT0  = 0x88;
sbit IE0  = 0x89;
sbit IT1  = 0x8A;
sbit IE1  = 0x8B;
sbit TR0  = 0x8C;
sbit TF0  = 0x8D;
sbit TR1  = 0x8E;
sbit TF1  = 0x8F;

/*------------------------------------------------
TMOD Bit Values
------------------------------------------------*/
#define T0_M0_   0x01
#define T0_M1_   0x02
#define T0_CT_   0x04
#define T0_GATE_ 0x08
#define T1_M0_   0x10
#define T1_M1_   0x20
#define T1_CT_   0x40
#define T1_GATE_ 0x80

#define T1_MASK_ 0xF0
#define T0_MASK_ 0x0F

/*------------------------------------------------
P1 Bit Registers
------------------------------------------------*/
sbit P1_0 = 0x90;
sbit P1_1 = 0x91;
sbit P1_2 = 0x92;
sbit P1_3 = 0x93;
sbit P1_4 = 0x94;
sbit P1_5 = 0x95;
sbit P1_6 = 0x96;
sbit P1_7 = 0x97;

sbit AIN0 = 0x90;       /* + Analog comparator input */
sbit AIN1 = 0x91;       /* - Analog comparator input */

/*------------------------------------------------
IE Bit Registers
------------------------------------------------*/
sbit EX0  = 0xA8;       /* 1=Enable External interrupt 0 */
sbit ET0  = 0xA9;       /* 1=Enable Timer 0 interrupt */
sbit EX1  = 0xAA;       /* 1=Enable External interrupt 1 */

sbit EA   = 0xAF;       /* 0=Disable all interrupts */

/*------------------------------------------------
P3 Bit Registers (Mnemonics & Ports)
------------------------------------------------*/
sbit P3_0 = 0xB0;
sbit P3_1 = 0xB1;
sbit P3_2 = 0xB2;
sbit P3_3 = 0xB3;
sbit P3_4 = 0xB4;
sbit P3_5 = 0xB5;
/* P3_6 Hardwired as AOUT */
sbit P3_7 = 0xB7;

sbit INT0 = 0xB2;       /* External interrupt 0 */
sbit INT1 = 0xB3;       /* External interrupt 1 */
sbit T0   = 0xB4;       /* Timer 0 external input */
sbit AOUT = 0xB6;       /* Analog comparator output */

/*------------------------------------------------
IP Bit Registers
------------------------------------------------*/
sbit PX0  = 0xB8;
sbit PT0  = 0xB9;
sbit PX1  = 0xBA;
sbit PT1  = 0xBB;
sbit PS   = 0xBC;

/*------------------------------------------------
PSW Bit Registers
------------------------------------------------*/
sbit P    = 0xD0;
sbit FL   = 0xD1;
sbit OV   = 0xD2;
sbit RS0  = 0xD3;
sbit RS1  = 0xD4;
sbit F0   = 0xD5;
sbit AC   = 0xD6;
sbit CY   = 0xD7;

/*------------------------------------------------
Interrupt Vectors:
Interrupt Address = (Number * 8) + 3
------------------------------------------------*/
#define IE0_VECTOR	0  /* 0x03 External interrupt 0 */
#define TF0_VECTOR	1  /* 0x0B Timer 0 */
#define IE1_VECTOR	2  /* 0x13 External interrupt 1 */

/*------------------------------------------------
------------------------------------------------*/
#endif



