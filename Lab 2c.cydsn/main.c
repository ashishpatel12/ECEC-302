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

int countBits(int v){
    int count = 0;
    while(v)
    {
        count += v & 1;
        v >>= 1;
    }
    return count;
}

uint8 rearrange(uint8 v)
{
    int count = countBits(v); /*Number of bits*/
    int numzero = 8-count; 
    int counter1 = 0;
    int counter = 0;
    int zero = 0;
    int ones =1;
    char str1[15];
    char str2[15];
    
    
    UART_1_PutString("Binary Representation: \n \r ");
   
    
    for(counter1 = 0; counter1<count;counter1 = counter1+1)
    {
        //char str1[15];
        sprintf(str1,"%d",ones);
        UART_1_PutString(str1);
    }
    
    for(counter=0; counter<numzero; counter = counter + 1)
    {   
        //char str2[15];
        sprintf(str2,"%d", zero);
        UART_1_PutString(str2);    
    }   
    
    return 0;
}

void WriteHex(int a)
{
    char str[15];
    sprintf(str,"0x%x\n\r",a);
    UART_1_PutString(str);
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    UART_1_Start();
    UART_1_PutString("Hello \n \r");
    
    uint8 v1 = 12;
    uint8 v2 = rearrange(v1);
    WriteHex(v2);
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
