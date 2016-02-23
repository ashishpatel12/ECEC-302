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
    
    char out = '0';
    int i = 0;
    int length1;
    int length2;
    int length;
    
    // Get length of first string
    while(str1[i]!='\0'){
        i++;
    }
    length1 = i;
    i = 0;

    // Get length of second string
    while(str2[i]!='\0'){
        i++;
    }
    length2 = i;
    
    if(length1 != length2){
        return -1;
    }
    
    // If there is a difference in the strings compare the results and return it
    for (i = 0; i < length; i++){
        if (str1[i] > str2[i]){
            out = str1[i] - str2[i] + 'a' - 1 - '0';
            return out;
        }else if (str1[i] < str2[i]){
            out = str2[i] - str1[i] + 'a' - 1 - '0';
            return out;
        }
    }
    
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
    
    int length;
    int out = -1;
    int i = 0;
    
        // Get length of first string
    while(str[i]!='\0'){
        i++;
    }
    length = i;
    
    for (i = 0; i < length; i++){
        if(str[i] == ch[0]){
            out = i + 'a' - 1 - '0';
            return out;
        }
    }
    return out;
}

int searchSubString(char *str, char *subStr)
{
    UART_1_PutString("Enter the string: ");
    readString(str);
    UART_1_PutString("\n\r");
    UART_1_PutString("Enter the sub string: ");
    readString(subStr);
    UART_1_PutString("\n\r");
    
    int out = -1;
    int start = 0;
    int offset = 0;
    int length;
    int subLen;
    int i = 0;;
    int j = 0;;
    
    // Get length of first string
    while(str[i]!='\0'){
        i++;
    }
    length = i;
    i = 0;

    // Get length of second string
    while(subStr[i]!='\0'){
        i++;
    }
    subLen = i;
    
    for (i = 0; i < length; i++){
        for(j = 0; j < subLen; j++){
            if(str[i+offset] != subStr[j]){
                break;
            }
            if(j == 0){ //str[i] == subStr[0]
                start = i;
            }
            if(j == (subLen - 1)){ //subStr[j] == '\0'
                out = start + 'a' - 1 - '0';
                return out;
            }
            offset++;
        }
        offset = 0;
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
    char str[MAX_BUFFER_SIZE], str1[MAX_BUFFER_SIZE], str2[MAX_BUFFER_SIZE], subStr[MAX_BUFFER_SIZE];
    
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
            if(status >= 0){
                UART_1_PutChar(status);
            }else{
                UART_1_PutString("-1");
            }
            UART_1_PutString("\n\r");
            break;
            case '3':
            /* Read in the string, store it in str1; the
            substring in str2. */
            status = searchSubString(str, subStr);
            UART_1_PutString("The string comparions returned ");
            if(status >= 0){
                UART_1_PutChar(status);
            }else{
                UART_1_PutString("-1");
            }
            UART_1_PutString("\n\r");
            break;
            default:
            UART_1_PutString("Erroneous entry ");
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
