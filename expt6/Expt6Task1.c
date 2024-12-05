/*
AIM: WAP to define a counter function to print how many times the function is called use storage classes.
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include<stdio.h>
void counter() // void means no return data type;
{    //int count=0;
    static int count=0; //static storage class;
    count++;
    printf("Counter Function Call : %d\n",count);
}
int main()
{
    printf("\t\t\t***STORAGE CLASS***\n\n\n");
    for(int i=1;i<=8;i++)
    {
        counter(); //counter function called 8 times;
    }
    return 0;
}
