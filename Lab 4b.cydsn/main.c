/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int currentSpeed = 1;
int state = 1;

CY_ISR(uartISR)
{
    uint32 rxData;
    rxData = UART_1_GetChar();
    UART_1_PutChar(rxData);
    UART_1_PutString("\n\r");
    
    if(rxData >= '1' && rxData <= '5' && state == 1){
        currentSpeed = (int) rxData - '0';
    }else{
        UART_1_PutString("Please input a value between 1 and 5 or enable input mode.");
        UART_1_PutString("\n\r");
    }
    UART_1_ClearRxBuffer();
}


CY_ISR(switchISR)
{
    CyDelay(50);
    while(!SW_Read());
    CyDelay(50);
    
    if(state == 1){
        state = 0;
        UART_1_PutString("Input mode DISABLED.");
        UART_1_PutString("\n\r");
    }else{
        UART_1_PutString("INPUT mode ENABLED.");
        UART_1_PutString("\n\r");
        state = 1;
    }
    
    SW_ClearInterrupt();
}

int main()
{
    CyGlobalIntDisable;
    UART_Int_Start();
    UART_Int_SetVector(uartISR);
    
    SW_Int_Start();
    SW_Int_SetVector(switchISR);
    CyGlobalIntEnable;

    UART_1_Start();
    
    for(;;)
    {
        CyDelay(500*currentSpeed);
        LED_Write(!(LED_Read()));
        
    }
}

/* [] END OF FILE */
