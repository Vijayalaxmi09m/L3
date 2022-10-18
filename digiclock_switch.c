/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-07, 10:17, # CodeGen: 0
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
#include "Set.h"
#include "BitIoLdd1.h"
#include "IN.h"
#include "BitIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

void time(int tm,int um,int ts,int us)
{
	int i,k;
	unsigned char mux7segdisplay[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	for(k=0;k<10;k++)
	{
	trigger_PutVal(0x7);
	Bits1_PutVal(~mux7segdisplay[tm]);
	for(i=0;i<0xfff;i++);
	trigger_PutVal(0xb);
	Bits1_PutVal(~mux7segdisplay[um]);
	for(i=0;i<0xfff;i++);
	trigger_PutVal(0xd);
	Bits1_PutVal(~mux7segdisplay[ts]);
	for(i=0;i<0xfff;i++);
	trigger_PutVal(0xe);
	Bits1_PutVal(~mux7segdisplay[us]);
	for(i=0;i<0xfff;i++);
	}
	
}

void run(int i,int j,int k,int l)
{
	int tm,um,ts,us;
	for(i=tm;i<6;i++)
				  {
					  for(j=um;j<10;j++)
					  {
						  for(k=ts;k<6;k++)
						  {
							  for(l=us;l<10;l++)
							  {
								  time(i,j,k,l); 
								  if(Set_GetVal()==0)
								  {
									  return;
								  }
							  }
						  }
					  }
				  }
}




/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	
	int tm, um, ts, us,i,j,k,l;
	tm=0,um=0,ts=0,us=0;
// unsigned char mux7segdisplay[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
// unsigned char trigger[]={0x7,0xb,0xd,0xe};
//unsigned int k,i,j,l;
// unsigned int data;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  while(1)
  {
	  time(tm,um,ts,us);
	
			  if(IN_GetVal()==0)
			  {
				  us++;
				  if(us==10)
				  {
					  us=0;
					  ts=ts+1;
				  }
				  if(ts==6)
				  {
					  ts=0;
					  um=um+1;
				  }
				  if(um==10)
				  {
					  um=0;
					  tm=tm+1;
				  }
				  if(tm==6)
				  {
					  tm=0;
					  um=0;
					  ts=0;
					  us=0;
				  }
				  time(tm,um,ts,us);
				  
				 
			  }
			  if(Set_GetVal()==0)
			  {
			  	run(tm,um,ts,us                                                                                                                       
			  }
		  }
		  
	  
		//run();
			  
   
//	/
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