#include <stdio.h>
#include <string.h>

#include "utilities.h"

int readInt(const char *prompt)
{
    int value;
    char line[100];

    while (1)
    {
        printf("%s", prompt);

        if (fgets(line, sizeof(line), stdin) != NULL)
        {
            if (sscanf(line, "%d", &value) == 1)
            {
                return value;
            }
        }

        printf("Invalid input. Enter a whole number.\n");
    }
}

double readDouble(const char *prompt)
{
    double value;
    char line[100];

    while (1)
    {
        printf("%s", prompt);

        if (fgets(line, sizeof(line), stdin) != NULL)
        {
            if (sscanf(line, "%lf", &value) == 1)
            {
                return value;
            }
        }

        printf("Invalid input. Enter a number.\n");
    }
}

void readString(const char *prompt, char text[], int size)
{
    printf("%s", prompt);

    if (fgets(text, size, stdin) != NULL)
    {
        text[strcspn(text, "\n")] = '\0';
    }
}