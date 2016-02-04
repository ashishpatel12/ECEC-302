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
#include <stdlib.h>
#include <stdio.h>

int MAX_BUFFER_SIZE = 25;

/* Read a string from the terminal via the UART. */
void readString(char *buffer)
{
    uint32 rxData;
    char *ptr = buffer;
    for(;;){
        rxData = UART_1_GetChar();
        if(rxData){
            UART_1_PutChar(rxData); /* Echo character. */
            /* On a carriage return, null terminate the string
            and break out of the loop. */
            if(rxData == '\r'){
                *ptr = '\0';
                break;
            }
            *ptr = rxData;
            ptr++;
        }
    }
}

int checkPalindrome(char *str1, char *str2){
    UART_1_PutString("Enter the first string: ");
    readString(str1);
    UART_1_PutString("\n\r");
    UART_1_PutString("Enter the second string: ");
    readString(str2);
    UART_1_PutString("\n\r");
    
    int i = 0;
    int length;
    
    while(str1[i]!='\0'){
        i++;
    }
    length = i;
    i = 0;
    
    for (i = 0; i < length; i++){
        if(str1[i] != str2[length-1-i]){
            return '0';
        }
    }
    return '1';    
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_1_Start(); /* Start the UART component. */
    char str1[MAX_BUFFER_SIZE], str2[MAX_BUFFER_SIZE];
    int status;
    
    for(;;)
    {
        status = checkPalindrome(str1, str2);
        UART_1_PutString("The string comparions returned ");
        UART_1_PutChar(status);
        UART_1_PutString("\n\r");
    }
}

/* [] END OF FILE */
