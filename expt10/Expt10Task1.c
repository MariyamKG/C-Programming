/*
AIM: WAP to add two numbers using pointers
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
int main() {
int num1, num2, sum;
int *ptr1, *ptr2, *ptrSum;
// Prompt the user to enter the first number
printf("Enter the first number: ");
scanf("%d", &num1);
// Prompt the user to enter the second number
printf("Enter the second number: ");
scanf("%d", &num2);
//Assign pointers to the variables
ptr1 = &num1;
ptr2 = &num2;
ptrSum = &sum;
//Perform addition using pointers
*ptrSum = *ptr1 + *ptr2;
printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum); //Display the sum
return 0;
}
