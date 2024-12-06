/*
AIM:   WAP to maintain a simple employee database using file handling
Name    : Mariyam Ganjifrockwala
Roll No : 39
UIN     : 241S048
Div     : E
*/
#include <stdio.h>
#include <stdlib.h>

// Define a structure to store employee data
struct Employee
{
    int id;
    char name[50];
    float salary;
};

// Function to add an employee record to the file
void addEmployee(FILE *file)
{
    struct Employee emp;


    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write the employee record to the file
    fwrite(&emp, sizeof(struct Employee), 1, file);
    printf("Employee record added successfully.\n");
}

// Function to display all employee records from the file
void displayEmployees(FILE *file)
{
    struct Employee emp;

    rewind(file); // Move the file pointer to the beginning of the file

    // Display table header for employee records
    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    printf("----------------------------------\n");

    // Read and display each employee record from the file
    while (fread(&emp, sizeof(struct Employee), 1, file))
    {
        printf("%d\t%-15s\t%.2f\n", emp.id, emp.name, emp.salary);
    }
}

int main()
{
    FILE *file;
    int choice;

    // Open the file in read-write mode; create it if it doesn't exist
    file = fopen("employee.dat", "rb+");
    if (file == NULL)
    {
        file = fopen("employee.dat", "wb+");
        // Check if the file was successfully created
        if (file == NULL)
        {
            printf("Error opening file.\n");
            exit(1);
        }
    }

    // Display menu and perform operations until the user chooses to exit
    do
    {
        // Display the menu options
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the action based on the user's choice
        switch (choice)
        {
        case 1:
            // Add a new employee record
            addEmployee(file);
            break;
        case 2:
            // Display all employee records
            displayEmployees(file);
            break;
        case 3:
            // Close the file and exit the program
            fclose(file);
            printf("Exiting the program.\n");
            break;
        default:
            // Handle invalid menu choices
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
