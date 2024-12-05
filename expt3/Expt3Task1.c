/*
AIM: WAP to design a menu driven calculator using switch and goto
Name     : Mariyam Ganjifrockwala
Roll No  : 39
UIN      : 241S048
Div      : E
*/

#include <stdio.h>
int main()
{
float num1, num2, result;
int mod_result;
char operator;

printf("\t\t\t ********CALCULATOR**********\n\n\n");
printf("Operations:\n");
printf("+ : Addition\n");
printf("- : Subtraction\n");
printf("/ : Division\n");
printf("* : Multiplication\n");
printf("% : Modulus\n");

repeat:
printf("Enter First Number:");
scanf("%f", &num1);
printf("Enter Second Number:");
scanf("%f", &num2);
printf("Enter Operation=");
scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result=num1+num2;
        printf("%f+%f=%f\n",num1,num2,result);
        break;
    case '-':
        result=num1-num2;
        printf("%f-%f=%f\n",num1,num2,result);
        break;
    case '*':
        result=num1*num2;
        printf("%f*%f=%f\n",num1,num2,result);
        break;
    case '/':
        if (num2==0)
        {
            printf("Cannot perform division by zero");
        }
        else
        {
            result=num1/num2;
            printf("%f/%f=%f\n",num1,num2,result);
        }
        break;
    case '%':
        if ((int)num2 == 0)
        {
            printf("Cannot perform modulus by zero\n");
        }
        else
        {
            mod_result = (int)num1 % (int)num2;
            printf("%d %% %d = %d\n", (int)num1, (int)num2, mod_result);
        }
        break;
    default:
        printf("Invalid operator. Please try again.");
        goto repeat;
    }

    char continuecalc;
    printf(" Continue? (Y/N): ");
    scanf(" %c", &continuecalc);

    if (continuecalc == 'Y' || continuecalc == 'y')
    {
        goto repeat;
    }
    else
    {
        printf("Thank You for using Calculator\n");
    }
    return 0;
}


