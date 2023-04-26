#include <stdio.h>
struct stud
{
    int roll;
    char name[20];
    int marks;
}s1,s2,s3,s4,s5;

void main()
{
    printf("Enter details of 1st Student:\n");
    printf("Roll No.:");
    scanf("%d",&s1.roll);
    printf("Name:");
    scanf("%s",&s1.name);
    printf("Marks:");
    scanf("%d",&s1.marks);
    printf("\n");

    printf("Enter details of 2nd Student:\n");
    printf("Roll No.:");
    scanf("%d",&s2.roll);
    printf("Name:");
    scanf("%s",&s2.name);
    printf("Marks:");
    scanf("%d",&s2.marks);
    printf("\n");

    printf("Enter details of 3rd Student:\n");
    printf("Roll No.:");
    scanf("%d",&s3.roll);
    printf("Name:");
    scanf("%s",&s3.name);
    printf("Marks:");
    scanf("%d",&s3.marks);
    printf("\n");

    printf("Enter details of 4th Student:\n");
    printf("Roll No.:");
    scanf("%d",&s4.roll);
    printf("Name:");
    scanf("%s",&s4.name);
    printf("Marks:");
    scanf("%d",&s4.marks);
    printf("\n");

    printf("Enter details of 5th Student:\n");
    printf("Roll No.:");
    scanf("%d",&s5.roll);
    printf("Name:");
    scanf("%s",&s5.name);
    printf("Marks:");
    scanf("%d",&s5.marks);
    printf("\n");
     
    printf("Student Details Are:\n");
    printf("Roll No.:%d\n",s1.roll);
    printf("Name:%s\n",s1.name);
    printf("Marks:%d\n",s1.marks);

     printf("Roll No.:%d\n",s2.roll);
    printf("Name:%s\n",s2.name);
    printf("Marks:%d\n",s2.marks);

     printf("Roll No.:%d\n",s3.roll);
    printf("Name:%s\n",s3.name);
    printf("Marks:%d\n",s3.marks);

     printf("Roll No.:%d\n",s4.roll);
    printf("Name:%s\n",s4.name);
    printf("Marks:%d\n",s4.marks);

     printf("Roll No.:%d\n",s5.roll);
    printf("Name:%s\n",s5.name);
    printf("Marks:%d\n",s5.marks); 
}