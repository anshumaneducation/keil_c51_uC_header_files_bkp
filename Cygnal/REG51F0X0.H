/*-------------------------------------------------------------------------
REG51F0X0.H

Header file for Cygnal 80C51F000 and 80C51F010
  
Copyright (c) 1988-2000 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------*/


sfr  P0     =    0x80;

sfr  SP     =    0x81;
sfr  DPL    =    0x82;
sfr  DPH    =    0x83;
sfr  PCON   =    0x87;
sfr  TCON   =    0x88;

sfr  TMOD   =    0x89;
sfr  TL0    =    0x8A;
sfr  TL1    =    0x8B;
sfr  TH0    =    0x8C;
sfr  TH1    =    0x8D;
sfr  CKCON  =    0x8E;
sfr  PSCTL  =    0x8F;
sfr  P1     =    0x90;

sfr  TMR3CN =    0x91;
sfr  TMR3RLL=    0x92;
sfr  TMR3RLH=    0x93;
sfr  TMR3L  =    0x94;
sfr  TMR3H  =    0x95;
sfr  SCON   =    0x98;

sfr  SBUF   =    0x99;
sfr  SPI0CFG=    0x9A;
sfr  SPI0DAT=    0x9B;
sfr  SPI0CKR=    0x9D;
sfr  CPT0CN =    0x9E;
sfr  CPT1CN =    0x9F;
sfr  P2     =    0xA0;

sfr  PRT0CF =    0xA4;
sfr  PRT1CF =    0xA5;
sfr  PRT2CF =    0xA6;
sfr  PRT3CF =    0xA7;
sfr  IE     =    0xA8;

sfr  PR1IF  =    0xAD;
sfr  P3     =    0xB0;

sfr  OSCXCN =    0xB1;
sfr  OSCICN =    0xB2;
sfr  FLASCL =    0xB6;
sfr  FLARDL =    0xB7;
sfr  IP     =    0xB8;

sfr  AMX0CF =    0xBA;
sfr  AMX0SL =    0xBB;
sfr  ADC0CF =    0xBC;
sfr  ADC0L  =    0xBE;
sfr  ADC0H  =    0xBF;
sfr  SMB0CN =    0xC0;

sfr  SMB0STA=    0xC1;
sfr  SMB0DAT=    0xC2;
sfr  SMB0ADR=    0xC3;
sfr  ADC0GTL=    0xC4;
sfr  ADC0GTH=    0xC5;
sfr  ADC0LTL=    0xC6;
sfr  ADC0LTH=    0xC7;
sfr  T2CON  =    0xC8;

sfr  RCAP2L =    0xCA;
sfr  RCAP2H =    0xCB;
sfr  TL2    =    0xCC;
sfr  TH2    =    0xCD;
sfr  DSROP  =    0xCE;
sfr  SMB0CR =    0xCF;
sfr  PSW    =    0xD0;

sfr  REF0CN =    0xD1;
sfr  DAC0L  =    0xD2;
sfr  DAC0H  =    0xD3;
sfr  DAC0CN =    0xD4;
sfr  DAC1L  =    0xD5;
sfr  DAC1H  =    0xD6;
sfr  DAC1CN =    0xD7;
sfr  PCA0CN =    0xD8;

sfr  PCA0MD =    0xD9;
sfr  PCA0CPM0=    0xDA;
sfr  PCA0CPM1=    0xDB;
sfr  PCA0CPM2=    0xDC;
sfr  PCA0CPM3=    0xDD;
sfr  PCA0CPM4=    0xDE;
sfr  ACC    =    0xE0;

sfr  XBR0   =    0xE1;
sfr  XBR1   =    0xE2;
sfr  XBR2   =    0xE3;
sfr  EIE1   =    0xE6;
sfr  EIE2   =    0xE7;
sfr  ADC0CN =    0xE8;

sfr  PCA0L  =    0xE9;
sfr  PCA0CPL0=    0xEA;
sfr  PCA0CPL1=    0xEB;
sfr  PCA0CPL2=    0xEC;
sfr  PCA0CPL3=    0xED;
sfr  PCA0CPL4=    0xEE;
sfr  RSTSRC =    0xEF;
sfr  B      =    0xF0;

sfr  EIP1   =    0xF6;
sfr  EIP2   =    0xF7;
sfr  SPI0CN =    0xF8;
sfr  PCA0H  =    0xF9;
sfr  PCA0CPH0=    0xFA;
sfr  PCA0CPH1=    0xFB;
sfr  PCA0CPH2=    0xFC;
sfr  PCA0CPH3=    0xFD;
sfr  PCA0CPH4=    0xFE;
sfr  WDTCN  =    0xFF;
   


