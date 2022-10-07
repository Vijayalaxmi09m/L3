/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-07, 12:25, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Bits1.h"
#include "BitsIoLdd1.h"
#include "trigger.h"
#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
void clock(unsigned char,unsigned char,unsigned char,unsigned char);
/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	
	
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
while(1){
	clock(0x7,0xb,0xd,0xe);
}

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/
void clock(unsigned char min,unsigned char min1,unsigned char sec,unsigned char sec1)
{
	
	unsigned char j,k,l,m;
	unsigned int z,y;
		char ac7segClockMux[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
		char ainitval[]={0x3f,0x3f,0xbf,0x3f};
	
		for(m=0;m<6;m++){
			for(l=0;l<10;l++){
				for(k=0;k<6;k++){
					 for(j=0;j<=9;j++)
										 {
						 for(y=0;y<50;y++){
							trigger_PutVal(sec1);
							 Bits1_PutVal(~ac7segClockMux[m]);
							 for(z=0;z<0X7FF;z++);
			
						trigger_PutVal(sec);
						 Bits1_PutVal(~ac7segClockMux[l]);
						 for(z=0;z<0X7FF;z++);
				
					trigger_PutVal(min1);
					 Bits1_PutVal(~ac7segClockMux[k]); 
					
					 for(z=0;z<0X7FF;z++);		 	 
					 			 trigger_PutVal(min);
					 			 Bits1_PutVal(~ac7segClockMux[j]); 
					 			 for(z=0;z<0X7FF;z++);
						 }
				}
				 
				 }
			}
				
}
}
/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
