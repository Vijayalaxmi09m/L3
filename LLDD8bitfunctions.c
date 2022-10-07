/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-09-30, 16:27, # CodeGen: 0
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
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/*void waterfall();
void waterrise();*/
void lldd_ca3210_cc7654_leds(unsigned char);


/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	unsigned char i,j;
	unsigned int z,n;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */

  
	  
	  /*waterfall();
	  for(z=0;z<0x7ffff;z++);
	  waterrise();
	  for(z=0;z<0x7ffff;z++);*/
	 
	  		while(1)
	  		{
	  			for(n=80;n>0;n=n>>1)
	  			
	  		 {
	  				
	  				for(i=n;i>0;i=i>>1)
	  			 {
	  			 	lldd_ca3210_cc7654_leds(i);
	  			 	for(z=0;z<0x7ffff;z++);
	  			 }	
	  			
	  		 
	  		for(j=01;j<n;j=j<<1)
	  		 			 			 	{
	  		 			 			 		lldd_ca3210_cc7654_leds(j);
	  		 			 			 		for(z=0;z<0x7ffff;z++);
	  		 			 			 	}
	  		
	  }
	 

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
/*void waterfall(){
	unsigned char i;
		unsigned int z;
	 for(i=0x01;i>0;i=i<<1)
	 {
		 
		 	lldd_ca3210_cc7654_leds(i);
		 	for(z=0;z<0x7ffff;z++);
		 	
		
	 }
}
void waterrise(){
	unsigned char i;
		unsigned int z;
	for(i=0x80;i>0;i=i>>1)
	{
		lldd_ca3210_cc7654_leds(i);
		for(z=0;z<0x7ffff;z++);
	}
}*/
void lldd_ca3210_cc7654_leds(unsigned char userdata)
{
	unsigned char uccadata, ucccdata;
	uccadata=userdata;
	uccadata=~uccadata;
	uccadata=uccadata&0x0f;
	ucccdata=userdata&0xf0;
	userdata=uccadata|ucccdata;
	Bits1_PutVal(userdata);
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
