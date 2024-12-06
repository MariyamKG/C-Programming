/*
AIM:  WAP to print the elements of an array in reverse order using pointers
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];  // Declare an array of size n
int *ptr = arr; // Declare a pointer and assign it to the base address of the array
 // Prompt the user to enter the elements of the array
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
 // Read each element and store it in the memory location pointed to by the pointer
scanf("%d", ptr + i);
}
printf("Array elements in reverse order:\n");
for (int i = n - 1; i >= 0; i--) {
printf("%d ", *(ptr + i));   // Access and print the element using pointer arithmetic
}
printf("\n");
return 0;
}
