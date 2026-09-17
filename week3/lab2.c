#include <stdio.h>
int main()
{
    char supplier1[50], supplier2[50];
    float price1, price2, budget;
    int registered1, registered2;
    int documents1, documents2;
    int qualified1, qualified2;

    printf("Enter first supplier name: ");
    scanf("%s", supplier1);

    printf("Enter first supplier price: ");
    scanf("%f", &price1);

    printf("Is first supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered1);

    printf("Are first supplier documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documents1);

    printf("\nEnter second supplier name: ");
    scanf("%s", supplier2);

    printf("Enter second supplier price: ");
    scanf("%f", &price2);

    printf("Is second supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered2);

    printf("Are second supplier documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documents2);

    printf("\nEnter available budget: ");
    scanf("%f", &budget);

    qualified1 = (registered1 == 1 && documents1 == 1 && price1 <= budget);

    qualified2 = (registered2 == 1 && documents2 == 1 && price2 <= budget);

    printf("\n--- TENDER RESULTS ---\n");

    if (qualified1 && qualified2)
    {
        printf("%s: Qualified\n", supplier1);
        printf("%s: Qualified\n", supplier2);

        if (price1 < price2)
        {
            printf("Preferred Supplier: %s\n", supplier1);
        }
        else if (price2 < price1)
        {
            printf("Preferred Supplier: %s\n", supplier2);
        }
        else
        {
            printf("Both suppliers have the same price.\n");
        }
    }
    else if (qualified1)
    {
        printf("%s: Qualified\n", supplier1);
        printf("%s: Disqualified\n", supplier2);
        printf("Preferred Supplier: %s\n", supplier1);
    }
    else if (qualified2)
    {
        printf("%s: Disqualified\n", supplier1);
        printf("%s: Qualified\n", supplier2);
        printf("Preferred Supplier: %s\n", supplier2);
    }
    else
    {
        printf("%s: Disqualified\n", supplier1);
        printf("%s: Disqualified\n", supplier2);
        printf("No Preferred Supplier.\n");
    }

    return 0;
}