/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-27, 14:57, # CodeGen: 0
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
#include "Red.h"
#include "BitIoLdd1.h"
#include "green.h"
#include "BitIoLdd2.h"
#include "blue.h"
#include "BitIoLdd3.h"
#include "FRTOS1.h"
#include "MCUC1.h"
#include "UTIL1.h"
#include "UTIL2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
static void MyTask3();
static void MyTask2();
static void MyTask1();
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
  xTaskCreate(MyTask1, "Task1",100,NULL,10,NULL);
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
static void MyTask3(void* pvParameters)
{
//    printf("from MyTask2 H Entry\n");
//    printf("from MyTask2 H Exit\n");
	unsigned char z;
				int i;
				for(i=0;i<9;i++)
					{
					blue_ClrVal();
					for(z=0;z=0xFFFF;z++);
					blue_SetVal();
					}
	 

}
static void MyTask2(void* pvParameters)
{

//    printf("from MyTask2 M Entry\n");
//    printf("from MyTask1 Creating task3\n");
	unsigned char z;
			int i;
			for(i=0;i<9;i++)
				{
				green_ClrVal();
				for(z=0;z=0xFFFF;z++);
				green_SetVal();
				}
    xTaskCreate(MyTask3, "Task3",100,NULL,12,NULL);
//    printf("from MyTask2 M Exit\n");
  
	   
//	   printf("7\n");
	   

}
static void MyTask1(void* pvParameters)
{

//    printf("from MyTask1 L Entry\n");
//    printf("from MyTask1 Creating task2\n");
	
		
		int z,i;
		for(i=0;i<9;i++)
			{
			Red_ClrVal();
			for(z=0;z=0xFFFF;z++);
			Red_SetVal();
			}
		
		
    xTaskCreate(MyTask2, "Task2",100,NULL,11,NULL);
//    printf("from MyTask1 L giving SEM\n");
//    printf("from MyTask1 L Exit\n");
   
   while(1)
	   {
	   ;
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
