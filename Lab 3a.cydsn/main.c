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

int compareStrings(char *str1, char *str2)
{
    UART_1_PutString("Enter the first string: ");
    readString(str1);
    UART_1_PutString("\n\r");
    UART_1_PutString("Enter the second string: ");
    readString(str2);
    UART_1_PutString("\n\r");
    
    int out = 0;
    int i;
    int length;
    if(strlen(str1) > strlen(str2)){
        length = strlen(str1);
    }else{
        length = strlen(str2);
    }
    
    for (i = 0; i < 5; i++){
        if( str1[i] != str2[i]){
            out = (int)str1[i]-'0' - (int)str2[i]-'0';
            return out;
        }
    }
    UART_1_PutChar(out);
    return out;
}

int searchForChar(char *str, char *ch)
{
    UART_1_PutString("Enter the first string: ");
    readString(str);
    UART_1_PutString("\n\r");
    UART_1_PutString("Enter the second string: ");
    readString(ch);
    UART_1_PutString("\n\r");
    
    int out = -1;
    int i;
    
    for (i = 0; i < MAX_BUFFER_SIZE; i++){
        if(str[i] == ch[0]){
            out = i;
            break;
        }
    }
    return out;
}

int searchSubString(char *str, char *subStr)
{
    int tempOut;
    int out = -1;
    int subLength = strlen(subStr);
    int subCount = 0;
    int i;
    int j;
    // More code here
    for (i = 0; i < MAX_BUFFER_SIZE; i++){
        for(j = 0; j < subLength; j++){
                if (str[i] == subStr[j]){
                    tempOut = i;
                    subCount++;
                    if(subCount == subLength){
                        out = tempOut;
                        break;
                    }
                }else{
                    subCount = 0;
                }
        }
    }
    
    return out;
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_1_Start(); /* Start the UART component. */
    char choice;
    //int choice1;
    int status;
    char ch[1];
    char str[MAX_BUFFER_SIZE], str1[MAX_BUFFER_SIZE], str2[MAX_BUFFER_SIZE];
    
    while(1){
        UART_1_PutString("Function to execute (1 for string compare, 2 of character search, 3 for sub-string search, or -1 to exit): ");
        //getchar();
        readString(&choice);
        UART_1_PutString("\n\r");
        //choice1 = (int) choice;
        
        if((int) choice == -1) break;
        switch(choice){
            case '1':
            /* Read in the strings and store them in str1
            and str2. */
            status = compareStrings(str1, str2);
            UART_1_PutString("The string comparions returned ");
            UART_1_PutChar(status);
            UART_1_PutString("\n\r");
            break;
            case '2':
            /* Read in the string, store it in str1; the
            character in ch. */
            status = searchForChar(str, ch);
            UART_1_PutString("The character is at position ");
            UART_1_PutChar(status);
            UART_1_PutString("\n\r");
            break;
            case '3':
            /* Read in the string, store it in str1; the
            substring in str2. */
            status = searchSubString(str1, str2);
            UART_1_PutChar(status);
            break;
            default:
            UART_1_PutString("\n \r Erroneous entry. Try again. ");
            UART_1_PutChar(choice);
            UART_1_PutString("\n\r");
        };  
    }

    UART_1_PutString("\n \r All done. Idling the CPU.");
    for(;;)
    {
        /* Let the microprocessor run. */
    }
}


/* [] END OF FILE */
