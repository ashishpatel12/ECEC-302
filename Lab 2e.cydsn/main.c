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

void WriteHex(int a)
{
    char str[31];
    sprintf(str,"%x\n\r",a);
    UART_1_PutString(str);
}

uint32 interleaveBits(uint16 x, uint16 y)
{
    //UART_1_PutString("Starting bit interleave. \r\n");
    int count = 0;
    int xCount = 0;
    int yCount = 0;
    char xChar[1];
    char yChar[1];
    char strInter[32];
    int result;
    
    //memcpy(xChar, (char*)&x, sizeof(x));
    //memcpy(xChar, (char*)&y, sizeof(y));
    
    
    for(count = 0; count < 16; count = count + 1)
    {
        if (count % 2 == 0)
        {
            uint16 xbit = (1 << xCount) & x;
            
            if (xbit > 0){
                sprintf( xChar, "%d", 1);
            }else{
                sprintf( xChar, "%d", 0);
            }
            
            strcat(strInter, xChar);
            xCount = xCount + 1;
            
            UART_1_PutString(yChar);
        }else
        {
            uint16 ybit = (1 << xCount) & y;
            if (ybit > 0){
                sprintf( yChar, "%d", 1);
            }else{
                sprintf( yChar, "%d", 0);
            }
            
            strcat(strInter, yChar);
            yCount = yCount + 1;
            
            UART_1_PutString(yChar);
            //UART_1_PutString("\n\r");
        }
    }
    
    //UART_1_PutString(strInter);
    UART_1_PutString("\n\r");
    
    sscanf(strInter, "%d", &result);
    
    return result;   
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    UART_1_Start();
    UART_1_PutString("Established Communication. \n \r");
    
    uint16 x = 0x55;
    uint16 y = 0xaa;
    uint32 z = interleaveBits(x, y);
    //WriteHex(z);
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
