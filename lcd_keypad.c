/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-13, 12:09, # CodeGen: 0
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
#include "LCD_DATA_CMD_PINS.h"
#include "BitsIoLdd1.h"
#include "LCD_REG_SELECT.h"
#include "BitIoLdd1.h"
#include "LCD_READ_WRITE.h"
#include "BitIoLdd2.h"
#include "LCD_ENABLE.h"
#include "BitIoLdd3.h"
#include "col.h"
#include "BitsIoLdd2.h"
#include "row.h"
#include "BitsIoLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
void LCD_delay(unsigned char ms)
  {
  	unsigned char n;
  	unsigned int i;
  	for(n=0;n<ms;n++)
  		for(i=0;i<0x7fff;i++);
  }
  void LCD_command(unsigned char command)
  {
  	LCD_DATA_CMD_PINS_PutVal(command);
  	LCD_REG_SELECT_PutVal(0);
  	LCD_READ_WRITE_PutVal(0);
  	LCD_ENABLE_PutVal(1);
  	LCD_delay(1);
  	LCD_ENABLE_PutVal(0);
  }
  void LCD_data(unsigned char ascii)
  {
  	LCD_DATA_CMD_PINS_PutVal(ascii);
  	LCD_REG_SELECT_PutVal(1);
  	LCD_READ_WRITE_PutVal(0);
  	LCD_ENABLE_PutVal(1);
  	LCD_delay(1);
  	LCD_ENABLE_PutVal(0);
  }
  void LCD_puts(unsigned char *lcd_string)
  {
  	while(*lcd_string)
  	{
  		LCD_data(*lcd_string++);
  	}
  }
  void LCD_init()
  {
	  LCD_command(0x38);
	  	LCD_command(0x0f);
	    	LCD_command(0x06);
	    	LCD_command(0x01);
	    	LCD_command(0x80);
	    	LCD_delay(1);
	    }
	    void LCD_TestingApp()
	    {
	    	int r,c;
	    	c=col_GetVal();
	    	r=row_GetVal();
	    	if(r==0xe && c==0xe)
	    		  {
	    			  LCD_data(48);
	    			  
	    		  }
	    		  else if(r==0xe && c==0xd)
	    		  {
	    			  LCD_data(49);
	    			  
	    		  }
	    		  else if(r==0xe && c==0xb)
	    		  {
	    			  LCD_data(50);
	    		  }
	    		  else if(r==0xe && c==0x7)
	    		  {
	    			  
	    			  LCD_data(51);
	    		  }
	    		  else if(r==0xd && c==0xe)
	    		  {
	    			  LCD_data(52);
	    		  }
	    		  else if(r==0xd && c==0xd)
	    		  {
	    			  LCD_data(53);
	    		  }
	    		  else if(r==0xd &&  c==0xb)
	    		  {
	    			  LCD_data(54);
	    		  }
	    		  else if(r==0xd && c==0x7)
	    		  {
	    			  LCD_data(55);
	    		  }
	    		  else if(r==0xb && c==0xe)
	    		  {
	    			  LCD_data(56);
	    		  }
	    		  else if(r==0xb && c==0xd)
	    		  {
	    			  LCD_data(57);
	    		  }
	    		  else if(r==0xb && c==0xb)
	    		  {
	    			  LCD_data(65);
	    		  }
	    		  else if(r==0xb && c==0x7)
	    		  {
	    			  LCD_data(66);
	    		  }
	    		  else if(r==0x7 && c==0xe)
	    		  {
	    			  LCD_data(67);
	    		  }
	    		  else if(r==0x7 && c==0xd)
	    		  {
	    			  LCD_data(68);
	    		  }
	    		  else if(r==0x7 && c==0xb)
	    		  {
	    			  LCD_data(69);
	    		  }
	    		  else if(r==0x7 && c==0x7)
	    		  {
	    			  LCD_data(70);
	    		  }
	    	while(1);
  }
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
  LCD_TestingApp();
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
