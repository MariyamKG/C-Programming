#include <stdio.h>
int main()
{
int phy,chem,math,avg;

printf("\t\t\t***Student Eligibility Calculator***\n\n\n");
printf("Enter Physics Marks");
scanf("%d", & phy);
printf("Enter Chemistry Marks");
scanf("%d", & chem);
printf("Enter Maths Marks");
scanf("%d", & math);

avg=(phy+chem+math)/3;
printf("The Average Marks are:%d\n",avg);

avg>=50?printf("The Student is Eligible\n"): ("The Student is not Eligible\n");

return 0;
}














