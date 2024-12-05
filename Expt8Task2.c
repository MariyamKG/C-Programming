/*
AIM:    WAP to check if the entered string is palindrome or not
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
int main ()
{
    char str[100];
    int i;
    printf("\t\t\t***PALLINDROME FINDER***\n\n\n");

    printf("\n Enter Your String : ");
    gets(str);

for(i=0;i<strlen(str)-1;i++)
   {
     if(str[i] !=str[strlen(str)-1-i])
     {
         printf("The String is NOT a Pallindrome");
         return 0;
     }
   }
   printf("\n The String is a Pallindrome.");

   return 0;
}
