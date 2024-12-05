/*
AIM:   WAP to find the length of a string without using library function.
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
int main()
 {
    char str[100];
    int length = 0;  //Variable
    printf("\t\t\t***STRING LENGTH FINDER***\n\n\n");
    printf("Enter a String: ");
    gets(str);

     while (str[length] != '\0')
    {
        length++;
    }

     printf("String length: %d Characters", length);
     return 0;
}
