/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-07, 10:15, # CodeGen: 0
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

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
unsigned char j;
unsigned int z;
char aMuxVar[]={0x06,0x5b,0x4f,0x66};
char aTrigger[]={0xE,0xd,0xb,0x7};
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
while(1){
	for(j=0;j<4;j++){
		trigger_PutVal(aTrigger[j]);
			Bits1_PutVal(~aMuxVar[j]);
			 for(z=0;z<0X7FF;z++);
			
	}
	 
	/*trigger_PutVal(0xe);
	Bits1_PutVal(~0x06);
	 for(z=0;z<0XFFFFF;z++);
	 trigger_PutVal(0xd);
	 	Bits1_PutVal(~0x5b);
	 	 for(z=0;z<0XFFFFF;z++);
	 	trigger_PutVal(0xb);
	 		Bits1_PutVal(~0x4f);
	 		 for(z=0;z<0XFFFFF;z++);
	 		trigger_PutVal(0x7);
	 			Bits1_PutVal(~0x66);
	 			 for(z=0;z<0XFFFFF;z++);
			        
			       /* for(j=0;j<4;j++)
			        	{
			        	trigger_PutVal(aTrigger[j]);
			        	for(i=0;i<4;i++)
			        			         {
			        			          Bits1_PutVal(~aMuxVar[i]);
			                              for(z=0;z<0XFFFFF;z++);
			        			         }*/
			        	      
			        	
			     
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
