MFMS WEEK 9 - MODULAR PROGRAMMING

The MFMS application has been divided into several modules.

main.c
Controls the main program and displays the menu.

employees.c / employees.h
Contains employee-related functions such as adding and
displaying employees.

budget.c / budget.h
Contains functions for setting the budget, adding expenses
and displaying budget information.

utilities.c / utilities.h
Contains reusable input functions used by other modules.

reports.c / reports.h
Produces summary reports using information from the employee
and budget modules.

BUILD COMMANDS

gcc -std=c99 -Wall -Wextra -pedantic -c main.c
gcc -std=c99 -Wall -Wextra -pedantic -c employees.c
gcc -std=c99 -Wall -Wextra -pedantic -c budget.c
gcc -std=c99 -Wall -Wextra -pedantic -c utilities.c
gcc -std=c99 -Wall -Wextra -pedantic -c reports.c

LINK COMMAND

gcc main.o employees.o budget.o utilities.o reports.o -o mfms

RUN COMMAND

./mfms