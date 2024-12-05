/*
AIM:  WAP to find the factorial of a number using iterative and recursive functions
Name     : Mariyam Ganjifrockwala
Roll No  : 39
UIN      : 241S048
Div      : E
*/
#include <stdio.h>

int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int factorialIterative(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num, result;

    printf("\t\t\t***ITERACTIVE AND RECURSIVE FACTORIAL FUNCTION***\n\n\n");
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        result = factorialIterative(num);
        printf("Factorial of %d using iterative function is: %d\n", num, result);


        result = factorialRecursive(num);
        printf("Factorial of %d using recursive function is: %d\n", num, result);
    }

    return 0;
}


