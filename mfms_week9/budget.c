#include <stdio.h>

#include "budget.h"
#include "utilities.h"

static double totalBudget = 0.0;
static double totalExpenses = 0.0;

void setBudget(void)
{
    double amount;

    printf("\n--- Set Budget ---\n");

    amount = readDouble("Enter total budget: N$");

    if (amount < 0)
    {
        printf("Budget cannot be negative.\n");
        return;
    }

    totalBudget = amount;

    printf("Budget successfully set to N$%.2f\n", totalBudget);
}

void addExpense(void)
{
    double expense;

    printf("\n--- Add Expense ---\n");

    expense = readDouble("Enter expense amount: N$");

    if (expense < 0)
    {
        printf("Expense cannot be negative.\n");
        return;
    }

    totalExpenses += expense;

    printf("Expense successfully added.\n");

    if (totalExpenses > totalBudget)
    {
        printf("Warning: The budget has been exceeded!\n");
    }
}

void displayBudget(void)
{
    printf("\n--- Budget Information ---\n");

    printf("Total Budget   : N$%.2f\n", totalBudget);
    printf("Total Expenses : N$%.2f\n", totalExpenses);
    printf("Remaining      : N$%.2f\n",
           totalBudget - totalExpenses);
}

double getTotalBudget(void)
{
    return totalBudget;
}

double getTotalExpenses(void)
{
    return totalExpenses;
}

double getRemainingBudget(void)
{
    return totalBudget - totalExpenses;
}