#include <stdio.h>

#include "reports.h"
#include "employees.h"
#include "budget.h"

void displaySummaryReport(void)
{
    int numberOfEmployees;
    double totalSalary;
    double averageSalary;
    double budget;
    double expenses;
    double remaining;

    numberOfEmployees = getEmployeeCount();
    totalSalary = getTotalSalary();

    budget = getTotalBudget();
    expenses = getTotalExpenses();
    remaining = getRemainingBudget();

    if (numberOfEmployees > 0)
    {
        averageSalary = totalSalary / numberOfEmployees;
    }
    else
    {
        averageSalary = 0.0;
    }

    printf("\n====================================\n");
    printf("       MFMS SUMMARY REPORT\n");
    printf("====================================\n");

    printf("Number of employees : %d\n", numberOfEmployees);
    printf("Total salaries      : N$%.2f\n", totalSalary);
    printf("Average salary      : N$%.2f\n", averageSalary);

    printf("\nBudget Information\n");
    printf("------------------------------------\n");

    printf("Total budget        : N$%.2f\n", budget);
    printf("Total expenses      : N$%.2f\n", expenses);
    printf("Remaining budget    : N$%.2f\n", remaining);

    printf("====================================\n");
}