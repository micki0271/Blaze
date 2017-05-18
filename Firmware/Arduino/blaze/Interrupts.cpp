#include <stdint.h>

#include "interrupts.h"


void __attribute__ ((interrupt)) non_maskable_interrupt(void) {
	
}

void __attribute__ ((interrupt)) default_interrupt(void) {
	
		

}


/*lint -esym(765,__vect_table) Disable MISRA rule (8.10) checking for symbols (__vect_table). Definition of the interrupt vector table placed by linker on a predefined location. */
/*lint -save  -e926 -e927 -e928 -e929 Disable MISRA rule (11.4) checking. Need to explicitly cast pointers to the general ISR for Interrupt vector table */
  

__attribute__ ((section (".vectortable"))) 
const VectorTable __vect_table = { /* Interrupt vector table */
  
    /* ISR name                             		No. Address      Pri Name                           Description */
    &__SP_INIT,                        				/* 0x00  0x00000000   -   ivINT_Initial_Stack_Pointer    used by PE */
    {
		(InterruptFunc)&__thumb_startup,        /* 0x01  0x00000004   -   ivINT_Initial_Program_Counter  used by PE */
		(InterruptFunc)&non_maskable_interrupt,   /* 0x02  0x00000008   -2   ivINT_NMI                      used by PE */
		(InterruptFunc)&default_interrupt,   /* 0x03  0x0000000C   -1   ivINT_Hard_Fault               unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x04  0x00000010   -   ivINT_Mem_Manage_Fault         unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x05  0x00000014   -   ivINT_Bus_Fault                unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x06  0x00000018   -   ivINT_Usage_Fault              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x07  0x0000001C   -   ivINT_Reserved7                unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x08  0x00000020   -   ivINT_Reserved8                unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x09  0x00000024   -   ivINT_Reserved9                unused by PE */
		(InterruptFunc)&default_interrupt,   /* 0x0A  0x00000028   -   ivINT_Reserved10               unused by PE */
		(InterruptFunc)&default_interrupt,       /* 0x0B  0x0000002C   -   ivINT_SVCall                   unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x0C  0x00000030   -   ivINT_DebugMonitor             unused by PE */
		(InterruptFunc)&default_interrupt,   /* 0x0D  0x00000034   -   ivINT_Reserved13               unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x0E  0x00000038   -   ivINT_PendableSrvReq           unused by PE */
		(InterruptFunc)&default_interrupt,      /* 0x0F  0x0000003C   -   ivINT_SysTick                  unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x10  0x00000040   -   ivINT_DMA0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x11  0x00000044   -   ivINT_DMA1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x12  0x00000048   -   ivINT_DMA2                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x13  0x0000004C   -   ivINT_DMA3                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x14  0x00000050   -   ivINT_DMA4                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x15  0x00000054   -   ivINT_DMA5                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x16  0x00000058   -   ivINT_DMA6                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x17  0x0000005C   -   ivINT_DMA7                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x18  0x00000060   -   ivINT_DMA8                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x19  0x00000064   -   ivINT_DMA9                     unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x1A  0x00000068   -   ivINT_DMA10                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x1B  0x0000006C   -   ivINT_DMA11                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x1C  0x00000070   -   ivINT_DMA12                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x1D  0x00000074   -   ivINT_DMA13                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x1E  0x00000078   -   ivINT_DMA14                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x1F  0x0000007C   -   ivINT_DMA15                    unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x20  0x00000080   -   ivINT_DMA_Error                unused by PE */
		(InterruptFunc)&default_interrupt,          /* 0x21  0x00000084   -   ivINT_MCM                      unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x22  0x00000088   -   ivINT_FTFE                     unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x23  0x0000008C   -   ivINT_Read_Collision           unused by PE */
		(InterruptFunc)&default_interrupt,      /* 0x24  0x00000090   -   ivINT_LVD_LVW                  unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x25  0x00000094   -   ivINT_LLWU                     unused by PE */
		(InterruptFunc)&default_interrupt,     /* 0x26  0x00000098   -   ivINT_WDOG_EWM                 unused by PE */
		(InterruptFunc)&default_interrupt,   /* 0x27  0x0000009C   -   ivINT_Reserved39               unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x28  0x000000A0   8   ivINT_I2C0                     used by PE */
		(InterruptFunc)&default_interrupt,         /* 0x29  0x000000A4   -   ivINT_I2C1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x2A  0x000000A8   -   ivINT_SPI0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x2B  0x000000AC   -   ivINT_SPI1                     unused by PE */
		(InterruptFunc)&default_interrupt,      /* 0x2C  0x000000B0   -   ivINT_I2S0_Tx                  unused by PE */
		(InterruptFunc)&default_interrupt,      /* 0x2D  0x000000B4   -   ivINT_I2S0_Rx                  unused by PE */
		(InterruptFunc)&default_interrupt,   /* 0x2E  0x000000B8   -   ivINT_Reserved46               unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x2F  0x000000BC   -   ivINT_UART0_RX_TX              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x30  0x000000C0   -   ivINT_UART0_ERR                unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x31  0x000000C4   -   ivINT_UART1_RX_TX              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x32  0x000000C8   -   ivINT_UART1_ERR                unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x33  0x000000CC   -   ivINT_UART2_RX_TX              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x34  0x000000D0   -   ivINT_UART2_ERR                unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x35  0x000000D4   -   ivINT_UART3_RX_TX              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x36  0x000000D8   -   ivINT_UART3_ERR                unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x37  0x000000DC   -   ivINT_ADC0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x38  0x000000E0   -   ivINT_CMP0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x39  0x000000E4   -   ivINT_CMP1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x3A  0x000000E8   -   ivINT_FTM0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x3B  0x000000EC   -   ivINT_FTM1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x3C  0x000000F0   -   ivINT_FTM2                     unused by PE */
		(InterruptFunc)&default_interrupt,          /* 0x3D  0x000000F4   -   ivINT_CMT                      unused by PE */
		(InterruptFunc)&default_interrupt,          /* 0x3E  0x000000F8   -   ivINT_RTC                      unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x3F  0x000000FC   -   ivINT_RTC_Seconds              unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x40  0x00000100   -   ivINT_PIT0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x41  0x00000104   -   ivINT_PIT1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x42  0x00000108   -   ivINT_PIT2                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x43  0x0000010C   -   ivINT_PIT3                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x44  0x00000110   -   ivINT_PDB0                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x45  0x00000114   -   ivINT_USB0                     unused by PE */
		(InterruptFunc)&default_interrupt,       /* 0x46  0x00000118   -   ivINT_USBDCD                   unused by PE */
		(InterruptFunc)&default_interrupt,   /* 0x47  0x0000011C   -   ivINT_Reserved71               unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x48  0x00000120   -   ivINT_DAC0                     unused by PE */
		(InterruptFunc)&default_interrupt,          /* 0x49  0x00000124   -   ivINT_MCG                      unused by PE */
		(InterruptFunc)&default_interrupt,       /* 0x4A  0x00000128   -   ivINT_LPTMR0                   unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x4B  0x0000012C   -   ivINT_PORTA                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x4C  0x00000130   -   ivINT_PORTB                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x4D  0x00000134   -   ivINT_PORTC                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x4E  0x00000138   -   ivINT_PORTD                    unused by PE */
		(InterruptFunc)&default_interrupt,        /* 0x4F  0x0000013C   -   ivINT_PORTE                    unused by PE */
		(InterruptFunc)&default_interrupt,          /* 0x50  0x00000140   -   ivINT_SWI                      unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x51  0x00000144   -   ivINT_SPI2                     unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x52  0x00000148   -   ivINT_UART4_RX_TX              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x53  0x0000014C   -   ivINT_UART4_ERR                unused by PE */
		(InterruptFunc)&default_interrupt,  /* 0x54  0x00000150   -   ivINT_UART5_RX_TX              unused by PE */
		(InterruptFunc)&default_interrupt,    /* 0x55  0x00000154   -   ivINT_UART5_ERR                unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x56  0x00000158   -   ivINT_CMP2                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x57  0x0000015C   -   ivINT_FTM3                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x58  0x00000160   -   ivINT_DAC1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x59  0x00000164   -   ivINT_ADC1                     unused by PE */
		(InterruptFunc)&default_interrupt,         /* 0x5A  0x00000168   -   ivINT_I2C2                     unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x5B  0x0000016C   -   ivINT_CAN0_ORed_Message_buffer unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x5C  0x00000170   -   ivINT_CAN0_Bus_Off             unused by PE */
		(InterruptFunc)&default_interrupt,   /* 0x5D  0x00000174   -   ivINT_CAN0_Error               unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x5E  0x00000178   -   ivINT_CAN0_Tx_Warning          unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x5F  0x0000017C   -   ivINT_CAN0_Rx_Warning          unused by PE */
		(InterruptFunc)&default_interrupt, /* 0x60  0x00000180   -   ivINT_CAN0_Wake_Up             unused by PE */
		(InterruptFunc)&default_interrupt          /* 0x61  0x00000184   -   ivINT_SDHC                     unused by PE */
    }
  };
  /*lint -restore Enable MISRA rule (11.4) checking. */
  
  
  void attachInterrupt(uint8_t pin, void (*isr)(void), int mode) {
	  
	  #warning "Not yet implemented"
	  
  }
  
  void detachInterrupt(uint8_t pin) {
	  
	  #warning "Not yet implemented"
	  
  }
  