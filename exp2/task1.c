#include <stdio.h>
int main()
{
int number;

printf("Enter Your Number:");
scanf("%d", &number);
if(number%2==0)
{
printf("%d is even\n", number);
}
else{
printf("%d is not even\n", number);
}
return 0;
}
