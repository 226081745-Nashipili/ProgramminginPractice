#include <stdio.h>

void displayWelcome(void);
void displayMenu(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);
void clearInputBuffer(void);
int main(void)
{
    int choice;
    int inputResult;
    float amount;
    float vat;
    float basic;
    float housing;
    float transport;
    float salary;
    float revenue;
    float expenses;
    float budget;
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int employeeID;
    int position;
    int size = 5;


    displayWelcome();


  
    printf("\n");
    printf("==================================\n");
    printf("       EMPLOYEE SEARCH\n");
    printf("==================================\n");

    printf("Employee IDs: 101, 102, 103, 104, 105\n");
    printf("Enter employee ID: ");

    inputResult = scanf("%d", &employeeID);

    if(inputResult == 1)
    {
        position = searchEmployee(employeeID, employeeIDs, size);

        if(position != -1)
        {
            printf("Employee found at position %d.\n", position);
        }
        else
        {
            printf("Employee not found.\n");
        }
    }
    else
    {
        printf("Invalid employee ID.\n");
        clearInputBuffer();
    }


  

    choice = 0;

    do
    {
        displayMenu();

        inputResult = scanf("%d", &choice);


        if(inputResult != 1)
        {
            /*
               If input has completely closed,
               stop the program instead of looping forever.
            */

            if(feof(stdin))
            {
                printf("\nInput closed. Program ending.\n");
                break;
            }

            printf("\nInvalid input.\n");
            printf("Please enter a number from 1 to 4.\n");

            clearInputBuffer();

            continue;
        }


        switch(choice)
        {
            /* LAB TASK 2 - VAT */

            case 1:

                printf("\n");
                printf("==================================\n");
                printf("        VAT CALCULATION\n");
                printf("==================================\n");

                printf("Enter amount: ");

                inputResult = scanf("%f", &amount);

                if(inputResult != 1)
                {
                    printf("Invalid amount.\n");
                    clearInputBuffer();
                    break;
                }

                if(amount < 0)
                {
                    printf("Amount cannot be negative.\n");
                }
                else
                {
                    vat = calculateVAT(amount);

                    printf("VAT: %.2f\n", vat);
                }

                break;


            /* LAB TASK 3 - SALARY */

            case 2:

                printf("\n");
                printf("==================================\n");
                printf("       SALARY CALCULATION\n");
                printf("==================================\n");

                printf("Basic salary: ");

                inputResult = scanf("%f", &basic);

                if(inputResult != 1)
                {
                    printf("Invalid basic salary.\n");
                    clearInputBuffer();
                    break;
                }


                printf("Housing allowance: ");

                inputResult = scanf("%f", &housing);

                if(inputResult != 1)
                {
                    printf("Invalid housing allowance.\n");
                    clearInputBuffer();
                    break;
                }


                printf("Transport allowance: ");

                inputResult = scanf("%f", &transport);

                if(inputResult != 1)
                {
                    printf("Invalid transport allowance.\n");
                    clearInputBuffer();
                    break;
                }


                if(basic < 0 || housing < 0 || transport < 0)
                {
                    printf("Salary values cannot be negative.\n");
                }
                else
                {
                    salary = calculateSalary(
                        basic,
                        housing,
                        transport
                    );

                    printf("Gross salary: %.2f\n", salary);
                }

                break;


            /* LAB TASK 4 - BUDGET */

            case 3:

                printf("\n");
                printf("==================================\n");
                printf("       BUDGET CALCULATION\n");
                printf("==================================\n");

                printf("Enter revenue: ");

                inputResult = scanf("%f", &revenue);

                if(inputResult != 1)
                {
                    printf("Invalid revenue.\n");
                    clearInputBuffer();
                    break;
                }


                printf("Enter expenses: ");

                inputResult = scanf("%f", &expenses);

                if(inputResult != 1)
                {
                    printf("Invalid expenses.\n");
                    clearInputBuffer();
                    break;
                }


                if(revenue < 0 || expenses < 0)
                {
                    printf(
                        "Revenue and expenses cannot be negative.\n"
                    );
                }
                else
                {
                    budget = calculateBudget(
                        revenue,
                        expenses
                    );

                    printf("Budget: %.2f\n", budget);


                    if(budget > 0)
                    {
                        printf("SURPLUS\n");
                    }
                    else if(budget < 0)
                    {
                        printf("DEFICIT\n");
                    }
                    else
                    {
                        printf("BALANCED\n");
                    }
                }

                break;

               case 4:

                printf("\n");
                printf("Goodbye.\n");

                break;
        
            default:

                printf("\n");
                printf("Invalid choice.\n");
                printf("Please choose 1 to 4.\n");

                break;
        }


    } while(choice != 4);


    return 0;
}


/* LAB TASK 1 */

void displayWelcome(void)
{
    printf("==========================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("==========================================\n");

    printf(
        "Welcome to the Municipal Financial Management System\n"
    );
}


/* LAB TASK 2 */

float calculateVAT(float amount)
{
    float vat;

    vat = amount * 0.15f;

    return vat;
}


/* LAB TASK 3 */

float calculateSalary(
    float basic,
    float housing,
    float transport
)
{
    float salary;

    salary = basic + housing + transport;

    return salary;
}


/* LAB TASK 4 */

float calculateBudget(
    float revenue,
    float expenses
)
{
    float budget;

    budget = revenue - expenses;

    return budget;
}


/* LAB TASK 5 */

void displayMenu(void)
{
    printf("\n");
    printf("==================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");

    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
}


/* task 6 */

int searchEmployee(
    int id,
    int ids[],
    int size
)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(ids[i] == id)
        {
            return i;
        }
    }

    return -1;
}

void clearInputBuffer(void)
{
    int character;

    while(
        (character = getchar()) != '\n'
        &&
        character != EOF
    )
    {
        /* Clear characters */
    }
}