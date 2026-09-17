#include <stdio.h>

int main()
{
    float salaries[50];
    float budgets[10];
    char registrations[20][20];

    float totalSalary = 0;
    float averageSalary;
    float highestSalary;
    float lowestSalary;

    float totalBudget = 0;
    float averageBudget;
    float temp;

    int salaryFound = 0;
    int registrationFound = 0;

    float searchSalary;
    char searchRegistration[20];

    int i, j, k;
    int same;

    /* ============================= */
    /* A. EMPLOYEE SALARIES          */
    /* ============================= */

    printf("===== EMPLOYEE SALARIES =====\n");

    for (i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        totalSalary = totalSalary + salaries[i];

        if (i == 0)
        {
            highestSalary = salaries[i];
            lowestSalary = salaries[i];
        }
        else
        {
            if (salaries[i] > highestSalary)
            {
                highestSalary = salaries[i];
            }

            if (salaries[i] < lowestSalary)
            {
                lowestSalary = salaries[i];
            }
        }
    }

    averageSalary = totalSalary / 50;

    printf("\n--- All Employee Salaries ---\n");

    for (i = 0; i < 50; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    printf("\nAverage Salary: %.2f\n", averageSalary);
    printf("Highest Salary: %.2f\n", highestSalary);
    printf("Lowest Salary: %.2f\n", lowestSalary);

    /* Search for a salary */
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    for (i = 0; i < 50; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary %.2f found at employee %d.\n",
                   searchSalary, i + 1);
            salaryFound = 1;
        }
    }

    if (salaryFound == 0)
    {
        printf("Salary not found.\n");
    }


    /* ============================= */
    /* B. DEPARTMENT BUDGETS         */
    /* ============================= */

    printf("\n===== DEPARTMENT BUDGETS =====\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);

        totalBudget = totalBudget + budgets[i];
    }

    printf("\n--- Department Budgets ---\n");

    for (i = 0; i < 10; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    averageBudget = totalBudget / 10;

    printf("\nTotal Budget: %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

    /* Sort budgets from lowest to highest */
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (budgets[i] > budgets[j])
            {
                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    printf("\n--- Budgets from Lowest to Highest ---\n");

    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }


    /* ============================= */
    /* C. VEHICLE REGISTRATIONS      */
    /* ============================= */

    printf("\n===== VEHICLE REGISTRATIONS =====\n");

    for (i = 0; i < 20; i++)
    {
        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- All Registration Numbers ---\n");

    for (i = 0; i < 20; i++)
    {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }

    /* Search for registration */
    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchRegistration);

    for (i = 0; i < 20; i++)
    {
        same = 1;
        j = 0;

        while (registrations[i][j] != '\0' ||
               searchRegistration[j] != '\0')
        {
            if (registrations[i][j] != searchRegistration[j])
            {
                same = 0;
                break;
            }

            j++;
        }

        if (same == 1)
        {
            printf("Registration %s found at vehicle %d.\n",
                   searchRegistration, i + 1);
            registrationFound = 1;
        }
    }

    if (registrationFound == 0)
    {
        printf("Registration number not found.\n");
    }
    return 0;
}