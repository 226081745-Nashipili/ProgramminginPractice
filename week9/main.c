#include <stdio.h>

#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void)
{
    int choice;

    do
    {
        printf("\n=================================\n");
        printf("   MFMS - Management System\n");
        printf("=================================\n");

        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Set Budget\n");
        printf("4. Add Expense\n");
        printf("5. Display Budget\n");
        printf("6. Summary Report\n");
        printf("0. Exit\n");

        printf("=================================\n");

        choice = readInt("Enter your choice: ");

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                setBudget();
                break;

            case 4:
                addExpense();
                break;

            case 5:
                displayBudget();
                break;

            case 6:
                displaySummaryReport();
                break;

            case 0:
                printf("\nExiting MFMS...\n");
                break;

            default:
                printf("\nInvalid menu choice.\n");
        }

    } while (choice != 0);

    return 0;
}