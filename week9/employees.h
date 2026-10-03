#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#define MAX_EMPLOYEES 50

typedef struct
{
    int id;
    char name[50];
    char department[50];
    double salary;
} Employee;

void addEmployee(void);
void displayEmployees(void);

int getEmployeeCount(void);
double getTotalSalary(void);

#endif