/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-27, 12:14, # CodeGen: 0
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
#include "CsIO1.h"
#include "IO1.h"
#include "FRTOS1.h"
#include "MCUC1.h"
#include "UTIL1.h"
#include "Bit1.h"
#include "BitIoLdd1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#define USER_DELAY_MYTASK1 1000
#define USER_DELAY_MYTASK2 1000
#define USER_DELAY_MYTASK3 1000
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
	 printf("8\n");
	 printf("9\n");
	 fflush(stdout);
	 vTaskDelay(USER_DELAY_MYTASK3/portTICK_PERIOD_MS);
	 

}
static void MyTask2(void* pvParameters)
{

//    printf("from MyTask2 M Entry\n");
//    printf("from MyTask1 Creating task3\n");
	 printf("5\n");
	 printf("6\n");
    xTaskCreate(MyTask3, "Task3",100,NULL,12,NULL);
    
//    printf("from MyTask2 M Exit\n");
  
	   
	   printf("7\n");
	   fflush(stdout);
	       vTaskDelay(USER_DELAY_MYTASK2/portTICK_PERIOD_MS);
	   

}
static void MyTask1(void* pvParameters)
{

//    printf("from MyTask1 L Entry\n");
//    printf("from MyTask1 Creating task2\n");
	
		
		printf("1\n");
		
	 printf("2\n");
    xTaskCreate(MyTask2, "Task2",100,NULL,11,NULL);
  
//    printf("from MyTask1 L giving SEM\n");
//    printf("from MyTask1 L Exit\n");
    printf("3\n");
    	   
        printf("4\n");
        fflush(stdout);
          vTaskDelay(USER_DELAY_MYTASK1/portTICK_PERIOD_MS);
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
