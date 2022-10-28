/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-28, 14:00, # CodeGen: 0
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
#include "FRTOS1.h"
#include "MCUC1.h"
#include "UTIL1.h"
#include "UTIL2.h"
#include "UTIL3.h"
#include "CsIO1.h"
#include "IO1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#define USER_DELAY_MYTASK1 1000
#define USER_DELAY_MYTASK2 50
#define USER_DELAY_MYTASK3 1000
static void MyTask3();
static void MyTask2();
static void MyTask1();
SemaphoreHandle_t xSemaphore=NULL;
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
 vSemaphoreCreateBinary( xSemaphore);
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
}
/*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/
SemaphoreHandle_t xSemaphore;
static void MyTask3(void* pvParameters)
{
	
	
	printf("H entry\n");
	xSemaphoreTake( xSemaphore,portMAX_DELAY );
	printf("h release semaphore\n");
	 xSemaphoreGive(  xSemaphore );
	 printf("h exit\n");
	 vTaskDelay(USER_DELAY_MYTASK3/portTICK_PERIOD_MS);
	 fflush(stdout);
	 vTaskDelay(USER_DELAY_MYTASK3/portTICK_PERIOD_MS);

}
static void MyTask2(void* pvParameters)
{
printf("M entry\n");
vTaskDelay(USER_DELAY_MYTASK2/portTICK_PERIOD_MS);
printf("m exit\n");
vTaskDelay(USER_DELAY_MYTASK2/portTICK_PERIOD_MS);
fflush(stdout);
vTaskDelay(USER_DELAY_MYTASK2/portTICK_PERIOD_MS);
	   

}

static void MyTask1(void* pvParameters)
{
	printf("L entry\n");
	xSemaphoreTake( xSemaphore,portMAX_DELAY );
	printf("creating task m\n");
	 
		  xTaskCreate(MyTask2, "Task2",100,NULL,11,NULL);
		 printf("creating h\n");
		 
		 xTaskCreate(MyTask3, "Task3",100,NULL,12,NULL);
		 xSemaphoreGive(  xSemaphore );
		 printf("L exit\n");
		 fflush(stdout);
	      
	    
	 
	
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
