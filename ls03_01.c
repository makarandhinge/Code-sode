#include<stdio.h>
struct emp
{
    int Emp_id;
    int Salary;
    char name[30];
}s1,s2;
void main()
{
    printf("Enter 1st employee detail:\n");
    printf("Enter Employee ID:");
    scanf("%d",&s1.Emp_id);
    printf("Enter Name:");
    scanf("%s",&s1.name);
    printf("Enter Salary:");
    scanf("%d",&s1.Salary);
    printf("\n\n");

     printf("Enter 2nd employee detail:\n");
    printf("Enter Employee ID:");
    scanf("%d",&s2.Emp_id);
    printf("Enter Name:");
    scanf("%s",&s2.name);
    printf("Enter Salary:");
    scanf("%d",&s2.Salary);
    printf("\n\n");

    printf("Employee details:\n");
    printf("Name:%s\n",s1.name);
    printf("Employee ID:%d\n",s1.Emp_id);
    printf("Salary:%d\n",s1.Salary);
    printf("\n");
    printf("Name:%s\n",s2.name);
    printf("Employee ID:%d\n",s2.Emp_id);
    printf("Salary:%d",s2.Salary);
     
}
