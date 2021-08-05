/*----------------------------------------------------------------------
REG868.H

Header file for Infineon C868
Copyright (c) 1988-1999 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
----------------------------------------------------------------------*/

//  C800 core
sfr ACC    = 0xE0;
sfr B      = 0xF0;
sfr DPL    = 0x82;
sfr DPH    = 0x83;
sfr DPSEL  = 0x84;
sfr PSW    = 0xD0;
sfr SP     = 0x81;
sfr SCON   = 0x98;
sfr SBUF   = 0x99;
sfr IEN0   = 0xA8;
sfr IEN1   = 0xA9;
sfr IP0    = 0xB8;
sfr TCON   = 0x88;
sfr TMOD   = 0x89;
sfr TL0    = 0x8A;
sfr TL1    = 0x8B;
sfr TH0    = 0x8C;
sfr TH1    = 0x8D;
sfr PCON   = 0x87;

//  SCU
sfr  PMCON0 = 0x8E;
sfr  CMCON  = 0x8F;
sfr  EXICON = 0x91;
sfr  IRCON0 = 0x92;
sfr  IRCON1 = 0x93;
sfr  PMCON1 = 0xE8;
sfr  PMCON2 = 0xF8;
sfr  SCUWDT = 0xC0;
sfr  TMODE  = 0xA4;

//  AD-Converter
sfr ADCON0  = 0xD8;
sfr ADCON1  = 0xD9;
sfr ADDATH  = 0xDB;
sfr ADDATL  = 0xDA;

//  DSI
sfr SYSCON  = 0xAD;
sfr XPAGE   = 0xAE;

//  Ports
sfr P0     = 0x80;
sfr P1     = 0x90;
sfr P1DIR  = 0x90;
sfr P2     = 0xA0;
sfr P3     = 0xB0;
sfr P3DIR  = 0xB0;
sfr P3ALT  = 0xB1;

//  Timer2
sfr T2CON  = 0xC8;
sfr T2MOD  = 0xC9;
sfr RC2H   = 0xCB;
sfr RC2L   = 0xCA;
sfr T2H    = 0xCD;
sfr T2L    = 0xCC;

//  Watchdog
sfr WDTCON = 0xA2;
sfr WDTREL = 0xA3;
sfr WDTL   = 0xB2;
sfr WDTH   = 0xB3;

// Compare/Capture Unit
sfr T12L     = 0xEC;
sfr T12H     = 0xED;
sfr T13L     = 0xEE;
sfr T13H     = 0xEF;
sfr T12PL    = 0xDE;
sfr T12PH    = 0xDF;
sfr T13PL    = 0xD2;
sfr T13PH    = 0xD3;
sfr CC60L    = 0xC2;
sfr CC60H    = 0xC3;
sfr CC61L    = 0xC4;
sfr CC61H    = 0xC5;
sfr CC62L    = 0xC6;
sfr CC62H    = 0xC7;
sfr CC63L    = 0xD4;
sfr CC63H    = 0xD5;
sfr T12DTCL  = 0xE6;
sfr T12DTCH  = 0xE7;
sfr CMPSTATL = 0xF4;
sfr CMPSTATH = 0xF5;
sfr CMPMODL  = 0xEA;
sfr CMPMODH  = 0xEB;
sfr CTCONL   = 0xE2;
sfr CTCONH   = 0xE3;
sfr CTCON1L  = 0xF2;
sfr CTCON1H  = 0xF3;
sfr TRCONL   = 0xCE;
sfr TRCONH   = 0xCF;
sfr MCSTATE  = 0xDC;
sfr CC6MCONL = 0xD6;
sfr CC6MCONH = 0xD7;
sfr CC6MSELL = 0xF6;
sfr CC6MSELH = 0xF7;
sfr CC6MICL  = 0xE4;
sfr CC6MICH  = 0xE5;


// BIT Registers
// Port0
sbit P0_7  = P0^7;
sbit P0_6  = P0^6;
sbit P0_5  = P0^5;
sbit P0_4  = P0^4;
sbit P0_3  = P0^3;
sbit P0_2  = P0^2;
sbit P0_1  = P0^1;
sbit P0_0  = P0^0;

// Port1
sbit P1_7  = P1^7;
sbit P1_6  = P1^6;
sbit P1_5  = P1^5;
sbit P1_4  = P1^4;
sbit P1_3  = P1^3;
sbit P1_2  = P1^2;
sbit P1_1  = P1^1;
sbit P1_0  = P1^0;

sbit P1DIR_7 = P1DIR^7;
sbit P1DIR_6 = P1DIR^6;
sbit P1DIR_5 = P1DIR^5;
sbit P1DIR_4 = P1DIR^4;
sbit P1DIR_3 = P1DIR^3;
sbit P1DIR_2 = P1DIR^2;
sbit P1DIR_1 = P1DIR^1;
sbit P1DIR_0 = P1DIR^0;

// Port2
sbit P2_7  = P2^7;
sbit P2_6  = P2^6;
sbit P2_5  = P2^5;
sbit P2_4  = P2^4;
sbit P2_3  = P2^3;
sbit P2_2  = P2^2;
sbit P2_1  = P2^1;
sbit P2_0  = P2^0;

// Port3
sbit P3_7  = P3^7;
sbit P3_6  = P3^6;
sbit P3_5  = P3^5;
sbit P3_4  = P3^4;
sbit P3_3  = P3^3;
sbit P3_2  = P3^2;
sbit P3_1  = P3^1;
sbit P3_0  = P3^0;

sbit P3DIR_7 = P3DIR^7;
sbit P3DIR_6 = P3DIR^6;
sbit P3DIR_5 = P3DIR^5;
sbit P3DIR_4 = P3DIR^4;
sbit P3DIR_3 = P3DIR^3;
sbit P3DIR_2 = P3DIR^2;
sbit P3DIR_1 = P3DIR^1;
sbit P3DIR_0 = P3DIR^0;

// PSW
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit F1    = PSW^1;
sbit P     = PSW^0;

// SCON
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

// IEN0
sbit EA    = IEN0^7;
sbit ET2   = IEN0^5;
sbit ES    = IEN0^4;
sbit ET1   = IEN0^3;
sbit EX1   = IEN0^2;
sbit ET0   = IEN0^1;
sbit EX0   = IEN0^0;

// IP0
sbit IP0_5 = IP0^5;
sbit IP0_4 = IP0^4;
sbit IP0_3 = IP0^3;
sbit IP0_2 = IP0^2;
sbit IP0_1 = IP0^1;
sbit IP0_0 = IP0^0;

// TCON
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit IE1   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

// PMCON1
sbit WDT_DIS = PMCON1^3;
sbit CCU_DIS = PMCON1^2;
sbit T2_DIS  = PMCON1^1;
sbit ADC_DIS = PMCON1^0;

// PMCON2
sbit WDT_ST  = PMCON2^3;
sbit CCU_ST  = PMCON2^2;
sbit T2_ST   = PMCON2^1;
sbit ADC_ST  = PMCON2^0;

// SCUWDT
sbit PLLR   = SCUWDT^6;
sbit OWDR   = SCUWDT^5;
sbit WDTR   = SCUWDT^4;
sbit WDTEOI = SCUWDT^3;
sbit WDTDIS = SCUWDT^2;
sbit WDTRS  = SCUWDT^1;
sbit WDTRE  = SCUWDT^0;

// ADCON0
sbit ADST   = ADCON0^7;
sbit ADBSY  = ADCON0^6;
sbit ADM0   = ADCON0^5;
sbit ADM1   = ADCON0^4;
sbit ADCH3  = ADCON0^3;
sbit ADCH2  = ADCON0^2;
sbit ADCH1  = ADCON0^1;
sbit ADCH0  = ADCON0^0;

// T2CON
sbit TF2    = T2CON^7;
sbit EXF2   = T2CON^6;
sbit RCLK   = T2CON^5;
sbit TCLK   = T2CON^4;
sbit EXEN2  = T2CON^3;
sbit TR2    = T2CON^2;
sbit C_T2   = T2CON^1;
sbit CP_RL2 = T2CON^0;
