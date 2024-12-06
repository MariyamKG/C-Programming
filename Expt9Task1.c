/*
AIM:  Design a structure student_record to contain name, roll_number, and total marks
obtained. Write a program to read 5 students data from the user and then display the
topper on the screen.
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
#include <string.h>
//Declare a structure to hold student details
struct student_record {
char name[50];
int roll_number;
float total_marks;
};
int main() {
//Initialize variables
struct student_record students[5];
int topperIndex = 0;
//Prompt the user for student details
for (int i = 0; i < 5; i++) {
printf("Enter details for student %d:\n", i + 1);
printf("Name: ");
scanf(" %[^\n]", students[i].name);
printf("Roll Number: ");
scanf("%d", &students[i].roll_number);
printf("Total Marks: ");
scanf("%f", &students[i].total_marks);
if (students[i].total_marks > students[topperIndex].total_marks) {
topperIndex = i; // Update topperIndex if current student has higher marks
}
}
//Display the topper details
printf("\nTopper:\n");
printf("Name: %s\n", students[topperIndex].name);
printf("Roll Number: %d\n", students[topperIndex].roll_number);
printf("Total Marks: %.2f\n", students[topperIndex].total_marks);
return 0;
}
