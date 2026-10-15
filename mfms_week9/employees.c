#include <stdio.h>

#include "employees.h"
#include "utilities.h"

static Employee employees[MAX_EMPLOYEES];
static int employeeCount = 0;

void addEmployee(void)
{
    Employee newEmployee;
    int i;

    if (employeeCount >= MAX_EMPLOYEES)
    {
        printf("Employee list is full.\n");
        return;
    }

    printf("\n--- Add Employee ---\n");

    newEmployee.id = readInt("Enter employee ID: ");

    for (i = 0; i < employeeCount; i++)
    {
        if (employees[i].id == newEmployee.id)
        {
            printf("Employee ID already exists.\n");
            return;
        }
    }

    readString(
        "Enter employee name: ",
        newEmployee.name,
        sizeof(newEmployee.name));

    readString(
        "Enter department: ",
        newEmployee.department,
        sizeof(newEmployee.department));

    newEmployee.salary = readDouble("Enter salary: ");

    if (newEmployee.salary < 0)
    {
        printf("Salary cannot be negative.\n");
        return;
    }

    employees[employeeCount] = newEmployee;
    employeeCount++;

    printf("Employee added successfully.\n");
}

void displayEmployees(void)
{
    int i;

    printf("\n--- Employee List ---\n");

    if (employeeCount == 0)
    {
        printf("No employees available.\n");
        return;
    }

    printf("%-8s %-20s %-20s %-12s\n",
           "ID",
           "Name",
           "Department",
           "Salary");

    printf("---------------------------------------------------------------\n");

    for (i = 0; i < employeeCount; i++)
    {
        printf("%-8d %-20s %-20s N$%-10.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].department,
               employees[i].salary);
    }
}

int getEmployeeCount(void)
{
    return employeeCount;
}

double getTotalSalary(void)
{
    double total = 0.0;
    int i;

    for (i = 0; i < employeeCount; i++)
    {
        total += employees[i].salary;
    }

    return total;
}