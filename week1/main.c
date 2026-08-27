#include <stdio.h>

int main()
{
    char municipality[50];
    char mayor[50];
    int population;

    /* Display system title */
    printf("===============================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("===============================================\n");

    /* Welcome message */
    printf("Welcome to Windhoek Municipality\n");

    /* Get user information */
    printf("Enter Municipality Name: ");
    scanf("%s", &municipality);

    printf("Enter Mayor's Name: ");
    scanf("%s", &mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    /* Display report */
    printf("============================================\n");
    printf("       MUNICIPAL INFORMATION REPORT\n");
    printf("============================================\n");
    printf("Municipality Name : %s\n", municipality);
    printf("Mayor's Name      : %s\n", mayor);
    printf("Population        : %d\n", population);
    printf("============================================\n");

    return 0;
}