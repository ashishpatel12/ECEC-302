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

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    // Initialize
    UART_1_Start();
    uint32 rxData;
    uint32 rxInfo;
    
    for(;;)
    {
        rxData = UART_1_GetChar();
        if(rxData){
            UART_1_PutChar(rxData);
            if(rxData <= '5' && rxData > '0'){
                rxInfo = rxData;
            }
        }
        
        if(rxInfo <= '5' && rxInfo > '0'){
            Pin_Red_Write(~Pin_Red_Read());
            if(rxInfo == '5'){
                CyDelay(100);
            }else if(rxInfo == '4'){
                CyDelay(200);
            }else if(rxInfo == '3'){
                CyDelay(300);
            }else if(rxInfo == '2'){
                CyDelay(400);
            }else if(rxInfo == '1'){
                CyDelay(500);
            }
        }
            
    }
        
    return 0;
}

/* [] END OF FILE */
