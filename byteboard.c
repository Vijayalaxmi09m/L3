/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-09-28, 16:18, # CodeGen: 0
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
#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
void waterfall();
void waterrise();
  
/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
int i;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
  while(1){
	
   	waterfall();
   	for(i=0;i<0x7ffff;i++);
   	waterrise();
	for(i=0;i<0x7ffff;i++);

   }
 
 
  /* Write your code here */
  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
}

	     
  /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/
  void waterfall(){
  	  int i;
  	  Bits1_PutBit(0,0);
  	    	for(i=0;i<0x7ffff;i++);
  	    	Bits1_SetBit(0);
  	    	for(i=0;i<0x7ffff;i++);
  	  	Bits1_PutBit(1,0);
  	  	  	for(i=0;i<0x7ffff;i++);
  	  	  	Bits1_SetBit(1);
  	  	  	  	for(i=0;i<0x7ffff;i++);
  	  		Bits1_PutBit(2,0);
  	  		  	for(i=0;i<0x7ffff;i++);
  	  		  	Bits1_SetBit(2);
  	  		  		  	  	for(i=0;i<0x7ffff;i++);
  	  			Bits1_PutBit(3,0);
  	  			  	for(i=0;i<0x7ffff;i++);
  	  			  	Bits1_SetBit(3);
  	  			  		  	  	for(i=0;i<0x7ffff;i++);
  	  				Bits1_PutBit(4,1);
  	  				  	for(i=0;i<0x7ffff;i++);
  	  					Bits1_ClrBit(4);
  	  					for(i=0;i<0x7ffff;i++);
  	  					Bits1_PutBit(5,1);
  	  					  	for(i=0;i<0x7ffff;i++);
  	  						Bits1_ClrBit(5);
  	  						for(i=0;i<0x7ffff;i++);
  	  						Bits1_PutBit(6,1);
  	  						  	for(i=0;i<0x7ffff;i++);
  	  							Bits1_ClrBit(6);
  	  							for(i=0;i<0x7ffff;i++);
  	  							Bits1_PutBit(7,1);
  	  							  	for(i=0;i<0x7ffff;i++);
  	  								Bits1_ClrBit(7);
  	  								for(i=0;i<0x7ffff;i++);
  	     
    }
    void waterrise(){
  	  int i;
  	  				Bits1_PutBit(7,1);
  	  				  	for(i=0;i<0x7ffff;i++);
  	  					Bits1_ClrBit(7);
  	  					for(i=0;i<0x7ffff;i++);
  	  					Bits1_PutBit(6,1);
  	  					  	for(i=0;i<0x7ffff;i++);
  	  						Bits1_ClrBit(6);
  	  						for(i=0;i<0x7ffff;i++);
  	  						Bits1_PutBit(5,1);
  	  						  	for(i=0;i<0x7ffff;i++);
  	  							Bits1_ClrBit(5);
  	  							for(i=0;i<0x7ffff;i++);
  	  							Bits1_PutBit(4,1);
  	  							  	for(i=0;i<0x7ffff;i++);
  	  								Bits1_ClrBit(4);
  	  								for(i=0;i<0x7ffff;i++);
  	  								Bits1_PutBit(3,0);
  	  									    	for(i=0;i<0x7ffff;i++);
  	  									    	Bits1_SetBit(3);
  	  									    	for(i=0;i<0x7ffff;i++);
  	  									  	Bits1_PutBit(2,0);
  	  									  	  	for(i=0;i<0x7ffff;i++);
  	  									  	  	Bits1_SetBit(2);
  	  									  	  	  	for(i=0;i<0x7ffff;i++);
  	  									  		Bits1_PutBit(1,0);
  	  									  		  	for(i=0;i<0x7ffff;i++);
  	  									  		  	Bits1_SetBit(1);
  	  									  		  		  	  	for(i=0;i<0x7ffff;i++);
  	  									  			Bits1_PutBit(0,0);
  	  									  			  	for(i=0;i<0x7ffff;i++);
  	  									  			  	Bits1_SetBit(0);
  	  									  			  		  	  	for(i=0;i<0x7ffff;i++);
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
