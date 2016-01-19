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
    char buf[100];
    CyGlobalIntEnable; /* Enable global interrupts. */

    UART_1_Start();
    
    strcpy(buf, "Hello world \n \r");
    
    UART_1_PutString(buf);
    
    int i;
    int int_counter = 0;
    float float_counter = 0.0;
    
    for(i = 0; i < 101; i++){
        sprintf(buf, "%d", int_counter);
        strcat(buf, "\n \r");
        UART_1_PutString(buf);
        int_counter++;
        
        
    }
    
    for(i = 0; i < 101; i++){
    sprintf(buf, "%f", float_counter);
        strcat(buf, "\n \r");
        UART_1_PutString(buf);
        float_counter = float_counter + 0.1;
        
        CyDelay(100);
    }
        
    /*for(;;)
    {
        Pin_Red_Write(~Pin_Red_Read());
        CyDelay(500);
    }*/
    
    return 0;
}

/* [] END OF FILE */
