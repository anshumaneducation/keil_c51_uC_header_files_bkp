/*------------------------------------------------------------------------
ADUC812.H

Header file for Analog Devices ADuC812 controller.
Based on the Analog Devices Datasheet REV.0

Copyright (c) 1999 - 2000 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
------------------------------------------------------------------------*/

/*  BYTE Registers  */
sfr P0    = 0x80;
sfr P1    = 0x90;
sfr P2    = 0xA0;
sfr P3    = 0xB0;
sfr PSW   = 0xD0;
sfr ACC   = 0xE0;
sfr B     = 0xF0;
sfr SP    = 0x81;
sfr DPL   = 0x82;
sfr DPH   = 0x83;
sfr PCON  = 0x87;
sfr TCON  = 0x88;
sfr TMOD  = 0x89;
sfr TL0   = 0x8A;
sfr TL1   = 0x8B;
sfr TH0   = 0x8C;
sfr TH1   = 0x8D;
sfr IE    = 0xA8;
sfr IP    = 0xB8;
sfr SCON  = 0x98;
sfr SBUF  = 0x99;
sfr T2CON  = 0xC8;
sfr RCAP2L = 0xCA;
sfr RCAP2H = 0xCB;
sfr TL2    = 0xCC;
sfr TH2    = 0xCD;

/*  ADuC812 extensions  */
sfr DPP      = 0x84;
sfr I2CDAT   = 0x9A;
sfr I2CADD   = 0x9B;
sfr IE2      = 0xA9;
sfr ECON     = 0xB9;
sfr ETIM1    = 0xBA;
sfr ETIM2    = 0xBB;
sfr EDATA1   = 0xBC;
sfr EDATA2   = 0xBD;
sfr EDATA3   = 0xBE;
sfr EDATA4   = 0xBF;
sfr WDCON    = 0xC0;
sfr ETIM3    = 0xC4;
sfr EADRL    = 0xC6;
sfr DMAL     = 0xD2;
sfr DMAH     = 0xD3;
sfr DMAP     = 0xD4;
sfr ADCCON2  = 0xD8;
sfr ADCDATAL = 0xD9;
sfr ADCDATAH = 0xDA;
sfr PSMCON   = 0xDF;
sfr I2CCON   = 0xE8;
sfr ADCCON1  = 0xEF;
sfr ADCOFSL  = 0xF1;
sfr ADCOFSH  = 0xF2;
sfr ADCGAINL = 0xF3;
sfr ADCGAINH = 0xF4;
sfr ADCCON3  = 0xF5;
sfr SPIDAT   = 0xF7;
sfr SPICON   = 0xF8;
sfr DAC0L    = 0xF9;
sfr DAC0H    = 0xFA;
sfr DAC1L    = 0xFB;
sfr DAC1H    = 0xFC;
sfr DACCON   = 0xFD;


/*  BIT Registers  */
/*  PSW  */
sbit CY    = PSW^7;
sbit AC    = PSW^6;
sbit F0    = PSW^5;
sbit RS1   = PSW^4;
sbit RS0   = PSW^3;
sbit OV    = PSW^2;
sbit P     = PSW^0;

/*  TCON  */
sbit TF1   = TCON^7;
sbit TR1   = TCON^6;
sbit TF0   = TCON^5;
sbit TR0   = TCON^4;
sbit IE1   = TCON^3;
sbit IT1   = TCON^2;
sbit IE0   = TCON^1;
sbit IT0   = TCON^0;

/*  IE  */
sbit EA    = IE^7;
sbit EADC  = IE^6;
sbit ET2   = IE^5;
sbit ES    = IE^4;
sbit ET1   = IE^3;
sbit EX1   = IE^2;
sbit ET0   = IE^1;
sbit EX0   = IE^0;

/*  IP  */
sbit PS1   = IP^7;
sbit PADC  = IP^6;
sbit PT2   = IP^5;
sbit PS    = IP^4;
sbit PT1   = IP^3;
sbit PX1   = IP^2;
sbit PT0   = IP^1;
sbit PX0   = IP^0;

/*  P3  */
sbit RD    = P3^7;
sbit WR    = P3^6;
sbit T1    = P3^5;
sbit T0    = P3^4;
sbit INT1  = P3^3;
sbit INT0  = P3^2;
sbit TXD   = P3^1;
sbit RXD   = P3^0;

/*  SCON  */
sbit SM0   = SCON^7;
sbit SM1   = SCON^6;
sbit SM2   = SCON^5;
sbit REN   = SCON^4;
sbit TB8   = SCON^3;
sbit RB8   = SCON^2;
sbit TI    = SCON^1;
sbit RI    = SCON^0;

/*  P1  */
sbit SS    = P1^5;
sbit T2EX  = P1^1;
sbit T2    = P1^0;
             
/*  T2CON  */
sbit TF2    = T2CON^7;
sbit EXF2   = T2CON^6;
sbit RCLK   = T2CON^5;
sbit TCLK   = T2CON^4;
sbit EXEN2  = T2CON^3;
sbit XEN    = T2CON^3;
sbit TR2    = T2CON^2;
sbit CNT2   = T2CON^1;
sbit CAP2   = T2CON^0;

/*  WDCON  */
sbit PRE2  = WDCON^7;
sbit PRE1  = WDCON^6;
sbit PRE0  = WDCON^5;
sbit WDR1  = WDCON^3;
sbit WDR2  = WDCON^2;
sbit WDS   = WDCON^1;
sbit WDE   = WDCON^0;

/*  ADCCON2  */
sbit ADCI  = ADCCON2^7;
sbit DMA   = ADCCON2^6;
sbit CCONV = ADCCON2^5;
sbit SCONV = ADCCON2^4;
sbit CS3   = ADCCON2^3;
sbit CS2   = ADCCON2^2;
sbit CS1   = ADCCON2^1;
sbit CS0   = ADCCON2^0;

/*  I2CCON  */
sbit MDO   = I2CCON^7;
sbit MDE   = I2CCON^6;
sbit MCO   = I2CCON^5;
sbit MDI   = I2CCON^4;
sbit I2CM  = I2CCON^3;
sbit I2CRS = I2CCON^2;
sbit I2CTX = I2CCON^1;
sbit I2CI  = I2CCON^0;

/*  SPICON  */
sbit ISPI  = SPICON^7;
sbit WCOL  = SPICON^6;
sbit SPE   = SPICON^5;
sbit SPIM  = SPICON^4;
sbit CPOL  = SPICON^3;
sbit CPHA  = SPICON^2;
sbit SPR1  = SPICON^1;
sbit SPR0  = SPICON^0;