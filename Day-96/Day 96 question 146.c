// Create an Employee structure with a nested Date structure for the joining date.
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int employee_id;
    char name[50];
    char designation[50];
    float salary;
    struct Date joining_date;
};

int main(void)
{
    struct Employee employee;

    printf("Enter employee ID: ");
    scanf("%d", &employee.employee_id);

    printf("Enter employee name: ");
    scanf(" %49[^\n]", employee.name);

    printf("Enter designation: ");
    scanf(" %49[^\n]", employee.designation);

    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &employee.joining_date.day,
          &employee.joining_date.month, &employee.joining_date.year);

    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", employee.employee_id);
    printf("Name: %s\n", employee.name);
    printf("Designation: %s\n", employee.designation);
    printf("Salary: %.2f\n", employee.salary);
    printf("Joining Date: %02d/%02d/%04d\n", employee.joining_date.day,
           employee.joining_date.month, employee.joining_date.year);

    return 0;
}
