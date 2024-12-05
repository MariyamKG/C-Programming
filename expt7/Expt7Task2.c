/*
AIM:  WAP to calculate sum of two matrix.
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
int main()
{

    int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
    //Prompt user for input
    printf("\n\n Addition of two Matrices : \n");
    printf("--------------------------------");
    printf("\n Input the size of the square matrix : ");
    scanf("%d",&n);
    //Input elements for the first matrix
    printf("\n Input elements in the first matrix : \n");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
    {
      printf("element - [%d],[%d] : ",i,j);
      scanf("%d",&arr1[i][j]);
    }
    }
    //Input elements for second matrix
     printf("\n Input elements in the second matrix : \n");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
    { printf("element - [%d],[%d] : ",i,j);
        scanf("%d",&brr1[i][j]);
    }
    }
    //Display the first matrix
    printf("\n The first matrix is : ");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
    {printf("%d\t",arr1[i][j]);}
    }
    //Display the second matrix
    printf("\n The second matrix is : ");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
    {printf("%d\t",brr1[i][j]);}
    }
    //Calculate the sum of two matrix
    for (i=0;i<n;i++)
    { printf("\n");
        for(j=0;j<n;j++)
        {crr1[i][j]=arr1[i][j]+brr1[i][j];}
    }
    //Display the sum of two matrix
    printf("The Addition of two matrix is : \n");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
     { printf("%d\t",crr1[i][j]);
}    }
    return 0;
}
