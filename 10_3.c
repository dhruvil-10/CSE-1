#include<stdio.h>
struct employee
{
    char name[10];
    float age;
    char address[20];
    float salary;
    struct salary
    {
        float DA,TA,HRA,gross_salary;
    }s1;
}e1;
int main()
{
    printf("Enter details of employee: \n");
    printf("Name:");
    scanf("%s",e1.name);
    printf("Age:");
    scanf("%f",&e1.age);
    printf("Address:");
    scanf("%s",e1.address);
    printf("Salary DA:");
    scanf("%f",&e1.s1.DA);
    printf("Salary TA:");
    scanf("%f",&e1.s1.TA);
    printf("Salary HRA:");
    scanf("%f",&e1.s1.HRA);
    printf("Salary gross salary:");
    scanf("%f",&e1.s1.gross_salary);
    printf("\n%s",e1.name);
    printf("\n%f",e1.age);
    printf("\n%s",e1.address);
    printf("\n%f",e1.s1.DA);
    printf("\n%f",e1.s1.TA);
    printf("\n%f",e1.s1.HRA);
    printf("\n%f",e1.s1.gross_salary);
    printf("\n23CS061_CS2");
    return 0;
}