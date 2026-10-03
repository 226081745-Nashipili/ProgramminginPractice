#include <stdio.h>
#include <string.h>
int main()
{
    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];
    char searchName[100];
    char original[100];
    char backup[100];
    char description[200];
    int choice;
    // LAB TASK 1 - BASIC SUPPLIER DETAILS

    printf("============================================\n");
    printf("     MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("          SUPPLIER MANAGEMENT\n");
    printf("============================================\n");
    printf("\nEnter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    supplierName[strcspn(supplierName, "\n")] = '\0';
    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';
    printf("Enter phone number: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';
    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';
    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name : %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);

    // LAB TASK 2 - STRING LENGTH

    printf("\n--- STRING LENGTHS ---\n");
    printf("Supplier name length: %zu\n",
           strlen(supplierName));
    printf("Email length: %zu\n",
           strlen(email));
    printf("Town length: %zu\n",
           strlen(town));

     // LAB TASK 3 - SUPPLIER SEARCH

    char supplier1[] = "ABC Office Supplies";
    char supplier2[] = "Namibia Stationery";
    printf("\n--- SUPPLIER SEARCH ---\n");
    printf("Available suppliers:\n");
    printf("1. %s\n", supplier1);
    printf("2. %s\n", supplier2);
    printf("\nEnter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';
    if (strcmp(searchName, supplier1) == 0)
    {
        printf("Supplier found.\n");
    }
    else if (strcmp(searchName, supplier2) == 0)
    {
        printf("Supplier found.\n");
    }
    else
    {
        printf("Supplier not found.\n");
    }

    // LAB TASK 4 - COPYING SUPPLIER INFORMATION

    strcpy(original, supplierName);
    strcpy(backup, original);
    printf("\n--- COPYING SUPPLIER NAME ---\n");
    printf("Original: %s\n", original);
    printf("Backup  : %s\n", backup);
    // LAB TASK 5 - CONSTRUCT A SUPPLIER DESCRIPTION

    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");
    printf("\n--- SUPPLIER DESCRIPTION ---\n");
    printf("%s\n", description);

    // LAB TASK 6 - MFMS SUPPLIER MODULE

    do
    {
        printf("\n================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        /* Clear the newline left by scanf() */
        getchar();
        // LAB TASK 6 - OPTION 1: ADD SUPPLIER

        if (choice == 1)
        {
            printf("\n--- ADD SUPPLIER ---\n");
            printf("Enter supplier name: ");
            fgets(supplierName, sizeof(supplierName), stdin);
            supplierName[strcspn(supplierName, "\n")] = '\0';
            printf("Enter email: ");
            fgets(email, sizeof(email), stdin);
            email[strcspn(email, "\n")] = '\0';
            printf("Enter phone number: ");
            fgets(phone, sizeof(phone), stdin);
            phone[strcspn(phone, "\n")] = '\0';
            printf("Enter town: ");
            fgets(town, sizeof(town), stdin);
            town[strcspn(town, "\n")] = '\0';
            printf("\nSupplier added successfully.\n");
        }
        // LAB TASK 6 - OPTION 2: DISPLAY SUPPLIER

        else if (choice == 2)
        {
            printf("\n--- SUPPLIER DETAILS ---\n");

            printf("Name : %s\n", supplierName);
            printf("Email: %s\n", email);
            printf("Phone: %s\n", phone);
            printf("Town : %s\n", town);
        }
        // LAB TASK 6 - OPTION 3: SEARCH SUPPLIER

        else if (choice == 3)
        {
            printf("\n--- SEARCH SUPPLIER ---\n");
            printf("Enter supplier name: ");
            fgets(searchName, sizeof(searchName), stdin);
            searchName[strcspn(searchName, "\n")] = '\0';

            if (strcmp(searchName, supplierName) == 0)
            {
                printf("Supplier found.\n");
            }

            else
            {
                printf("Supplier not found.\n");
            }
        }
        // LAB TASK 6 - OPTION 4: SHOW NAME LENGTH

        else if (choice == 4)
        {
            printf("\n--- SUPPLIER NAME LENGTH ---\n");

            printf("Supplier name: %s\n", supplierName);

            printf("Name length: %zu characters\n",
                   strlen(supplierName));
        }
        // LAB TASK 6 - OPTION 5: EXIT

        else if (choice == 5)
        {
            printf("\nGoodbye.\n");
        }
        else
        {
            printf("\nInvalid choice. Please select 1 to 5.\n");
        }

    } while (choice != 5);
    printf("\nLab 7 completed successfully.\n");
    return 0;
}