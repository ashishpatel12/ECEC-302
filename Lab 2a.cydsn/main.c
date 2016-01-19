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
#include <stdio.h>

int countBits(int v)
{
    //Count those bits
    UART_1_PutString("Starting bit count. \n \r");
    int ct = 0;
    
    while(v)
    {
        ct += v & 1;
        v >>= 1;
    }
    return ct;
    
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_1_Start();
    UART_1_PutString("Connection established. \n \r");
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    int v = 0x8;
    int count = countBits(v);
    
    char str[15];    
    
    sprintf(str, "%d", count);
    UART_1_PutString(str);
    if(count == 1){
        UART_1_PutString("It's a power of two! \n \r");
    }
    
    for(;;)
    {
        
    }
    
    return 0;
}

/* [] END OF FILE */
