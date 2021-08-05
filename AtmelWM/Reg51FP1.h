/*-------------------------------------------------------------------------
REG51FP1.H

Header file for Atmel Wireless & uC 80C51FP1
  
Copyright (c) 1988-2000 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------*/
sfr  P0      =   0x80;			 

sbit  P0_7    =   P0^7;
sbit  P0_6    =   P0^6;
sbit  P0_5    =   P0^5;
sbit  P0_4    =   P0^4;
sbit  P0_3    =   P0^3;
sbit  P0_2    =   P0^2;
sbit  P0_1    =   P0^1;
sbit  P0_0    =   P0^0;

sfr  SP      =   0x81;
sfr  DPL     =   0x82;
sfr  DPH     =   0x83;

sfr  CKSEL   =   0x85;
sfr  OSCCON  =   0x86;
sfr  PCON    =   0x87;			 

sfr  TCON    =   0x88;             

sbit  TF1    =   TCON^7;
sbit  TR1    =   TCON^6;
sbit  TF0    =   TCON^5;
sbit  TR0    =   TCON^4;
sbit  IE1_   =   TCON^3;
sbit  IT1    =   TCON^2;
sbit  IE0_   =   TCON^1;
sbit  IT0    =   TCON^0;

sfr  TMOD    =   0x89;			 

sfr  TL0     =   0x8A;			 

sfr  TL1     =   0x8B;			 

sfr  TH0     =   0x8C;			 

sfr  TH1     =   0x8D;			 

sfr  AUXR    =   0x8E;			 


sfr  P1      =   0x90;			 

sbit  P1_7    =   P1^7;
sbit  P1_6    =   P1^6;
sbit  P1_5    =   P1^5;
sbit  P1_4    =   P1^4;
sbit  P1_3    =   P1^3;
sbit  P1_2    =   P1^2;
sbit  P1_1    =   P1^1;
sbit  P1_0    =   P1^0;

sbit  MOSI    =   P1^7;
sbit  SPSCK   =   P1^6;
sbit  MISO    =   P1^5;
sbit  CEX1    =   P1^4;
sbit  CEX0    =   P1^3;
sbit  ECI     =   P1^2;
sbit  T2EX    =   P1^1;
sbit  T2      =   P1^0;

sfr  SSCON    =   0x93;
sfr  SSCS     =   0x94;
sfr  SSDAT    =   0x95;
sfr  SSADR    =   0x96;
sfr  CKRL     =   0x97;

sfr  SCON    =   0x98;			 

sbit  SM0    =   SCON^7;
sbit  FE     =   SCON^7;
sbit  SM1    =   SCON^6;
sbit  SM2    =   SCON^5;
sbit  REN    =   SCON^4;
sbit  TB8    =   SCON^3;
sbit  RB8    =   SCON^2;
sbit  TI     =   SCON^1;
sbit  RI     =   SCON^0;

sfr  SBUF    =   0x99;			 
sfr  BRL     =   0x9A;
sfr  BDRCON  =   0x9B;
sfr  P4IE    =   0x9D;
sfr  P4F     =   0x9E;
                

sfr  P2      =   0xA0;			 

sbit  P2_7    =   P2^7;
sbit  P2_6    =   P2^6;
sbit  P2_5    =   P2^5;
sbit  P2_4    =   P2^4;
sbit  P2_3    =   P2^3;
sbit  P2_2    =   P2^2;
sbit  P2_1    =   P2^1;
sbit  P2_0    =   P2^0;

sfr  WDRST   =   0xA6;			 
sfr  WDTPRG  =   0xA7;			 

sfr  AUXR1  =   0xA2;              
sfr  COMCON =   0xA3;

sfr  IE     =   0xA8;			     
sfr  IE0    =   0xA8;

sbit  EA     =   IE^7;
sbit  EC     =   IE^6;
sbit  ET2    =   IE^5;
sbit  ES     =   IE^4;
sbit  ET1    =   IE^3;
sbit  EX1    =   IE^2;
sbit  ET0    =   IE^1;
sbit  EX0    =   IE^0;

sfr  SADDR   =   0xA9;			 
			 

sfr  P3      =   0xB0;			 

sbit  P3_7    =   P3^7;
sbit  P3_6    =   P3^6;
sbit  P3_5    =   P3^5;
sbit  P3_4    =   P3^4;
sbit  P3_3    =   P3^3;
sbit  P3_2    =   P3^2;
sbit  P3_1    =   P3^1;
sbit  P3_0    =   P3^0;

sbit  RD      =   P3^7;
sbit  WR      =   P3^6;
sbit  T1      =   P3^5;
sbit  T0      =   P3^4;
sbit  INT1    =   P3^3;
sbit  INT0    =   P3^2;
sbit  TXD     =   P3^1;
sbit  RXD     =   P3^0;

sfr  P4   =  0xB1;

sfr  IPL1   =   0xB2;

sfr  IPH1    =   0xB3;			     
sfr  IPH0    =   0xB7;

sfr  IPL0    =   0xB8;	

sbit  PPC      =   IPL0^6;
sbit  PT2      =   IPL0^5;
sbit  PS       =   IPL0^4;
sbit  PT1      =   IPL0^3;
sbit  PX1      =   IPL0^2;
sbit  PT0      =   IPL0^1;
sbit  PX0      =   IPL0^0;


sfr  SADEN   =   0xB9;			 


sfr   IE1    =    0xC0;

sbit  SPI    =    IE1^2;
sbit  I2C    =    IE1^1;
sbit  KBIE   =    IE1^0;

sfr  SPCR    =   0xC3;
sfr  SPSCR   =   0xC4;
sfr  SPDR    =   0xC5;

sfr  T2CON   =   0xC8;             

sbit  TF2    =   T2CON^7;
sbit  EXF2   =   T2CON^6;
sbit  RCLK   =   T2CON^5;
sbit  TCLK   =   T2CON^4;
sbit  EXEN2  =   T2CON^3;
sbit  TR2    =   T2CON^2;
sbit  CT2    =   T2CON^1;
sbit  CPRL2  =   T2CON^0;

sfr  T2MOD   =   0xC9;			 

sfr  RCAP2L  =   0xCA;			 
sfr  RCAP2H  =   0xCB;			 
sfr  TL2     =   0xCC;			 
sfr  TH2     =   0xCD;			 

sfr  PSW     =   0xD0;			 
sbit  CY     =   PSW^7;
sbit  AC     =   PSW^6;
sbit  F0     =   PSW^5;
sbit  RS1    =   PSW^4;
sbit  RS0    =   PSW^3;
sbit  OV     =   PSW^2;
sbit  F1     =   PSW^1;
sbit  P      =   PSW^0;

sfr  CCON    =   0xD8;			 

sbit  CF      =   CCON^7;
sbit  CR      =   CCON^6;
sbit  CCF1    =   CCON^1;
sbit  CCF0    =   CCON^0;

sfr  CMOD    =   0xD9;			 

sfr  CCAPM0  =   0xDA;			 
sfr  CCAPM1  =   0xDB;			 

sfr  ACC     =   0xE0;			 

sfr  LCDCON  =   0xE3;
sfr  LCDPS   =   0xE4;
sfr  LCDAC   =   0xE5;
sfr  LCDIR   =   0xE6;
sfr  LCDDR   =   0xE7;

sfr  P5      =   0xE8;

sfr  CL      =   0xE9;			 

sfr  CCAP0L  =   0xEA;			 

sfr  CCAP1L  =   0xEB;			 

sfr  B       =   0xF0;			 

sfr  P6      =   0xF8;

sfr  CH      =   0xF9;			 

sfr  CCAP0H  =   0xFA;			 

sfr  CCAP1H  =   0xFB;
