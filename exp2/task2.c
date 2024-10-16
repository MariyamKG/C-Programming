#include <stdio.h>
int main()
{
int start_num, end_num, sum=0, i;

printf("\t\t\t***Sum of Odd Numbers***\n\n\n");

//Take User Input
printf("Enter Start Number:");
scanf("%d", & start_num);
printf("Enter Ending Number:");
scanf("%d", & end_num);

//Check if Starting Number is Higher than Ending Number
if(start_num>end_num)
{
printf("Error:Ending Number should be Higher than Starting number");

return 1;
}

//Add all Odd Numbers
for (i=start_num; i<=end_num; i++)
{
if(i%2!=0)
sum=sum+i;
}
printf("Sum of all Odd Number between %d & %d=%d", start_num, end_num, sum);

return 0;
}








