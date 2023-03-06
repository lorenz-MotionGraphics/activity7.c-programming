/*Activity7 no.3: Make a program that
will compute for the salary of an
employee.
Enter Employee Name:crz,maria
Enter Rate per hour; 1000
Enter No.of hours Work:5
Compute Salary:[sal-rph'nhw]5000*/

#include <stdio.h>

int main() {
    char name[20];
    float rateperhour, numberofhoursworked, salary;

    printf("Enter Employee Name: ");
    scanf("%s", &name);
    printf("Enter Rate per Hour: ");
    scanf("%f", &rateperhour);
    printf("Enter Number of Hours Worked: ");
    scanf("%f", &numberofhoursworked);
    salary = rateperhour * numberofhoursworked;
    printf("Salary of %s = %f", name, salary);
    return 0;
}
