#include <stdio.h>

int main() {
    // Variables for the main exercise
    double revenue;
    double expenses;
    double balance;

    // Variables for the extension exercise
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("=====================================\n");
    printf("       MUNICIPAL BUDGET CALCULATOR\n");
    printf("=====================================\n\n");

    printf("Enter Total Revenue: N$ ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: N$ ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n--- MUNICIPAL FINANCIAL SUMMARY ---\n");
    printf("Revenue : N$ %.2f\n", revenue);
    printf("Expenses: N$ %.2f\n", expenses);
    printf("Balance : N$ %.2f\n", balance);

    printf("\n--- EXTENSION EXERCISE ---\n");

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter payroll amount: N$ ");
    scanf("%lf", &payroll);

    printf("Enter procurement amount: N$ ");
    scanf("%lf", &procurement);

    printf("Enter assets value: N$ ");
    scanf("%lf", &assets);

    printf("\n--- BASIC MUNICIPAL FINANCIAL SUMMARY ---\n");
    printf("Revenue      : N$ %.2f\n", revenue);
    printf("Expenses     : N$ %.2f\n", expenses);
    printf("Balance      : N$ %.2f\n", balance);
    printf("Departments  : %d\n", departments);
    printf("Payroll      : N$ %.2f\n", payroll);
    printf("Procurement  : N$ %.2f\n", procurement);
    printf("Assets       : N$ %.2f\n", assets);
    return 0;
}