#include <stdio.h>

struct student {
    int rollno;
    char name[30];
    int age;
    char address[40];
    int marks[5];
} students[5];

void display();

int main() {
    printf("Enter details for 5 students:\n");
    int j;
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age (between 11 and 14): ");
        scanf("%d", &students[i].age);
        printf("Enter marks of 5 subjects:\n");
        for(j=0;j<5;j++)
        {
            scanf("%d",&students[i].marks[j]);
        }
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("\n");
    }
    display();
}

void display()
{
    int i , j;
    for(i=0;i<5;i++)
    {
        printf("Marks of student %d:\n", i+1);
        for(j=0;j<5;j++)
        {
            printf("%d ",students[i].marks[j]);
        }
        printf("\n");
    }
}
