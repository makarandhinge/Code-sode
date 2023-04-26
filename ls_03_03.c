#include <stdio.h>

struct student {
    int rollno;
    char name[30];
    int age;
    char address[40];
} students[5];

void printAge14Students() {
    printf("List of students with age 14:\n");
    for(int i = 0; i < 5; i++) {
        if(students[i].age == 14) {
            printf("%s\n", students[i].name);
        }
    }
}

void printEvenRollnoStudents() {
    printf("List of students with even roll numbers:\n");
    for(int i = 0; i < 5; i++) {
        if(students[i].rollno % 2 == 0) {
            printf("%s\n", students[i].name);
        }
    }
}

void displayStudentDetails(int rollno) {
    for(int i = 0; i < 5; i++) {
        if(students[i].rollno == rollno) {
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Address: %s\n", students[i].address);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollno);
}

int main() {
    printf("Enter details for 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age (between 11 and 14): ");
        scanf("%d", &students[i].age);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("\n");
    }
    
    printAge14Students();
    printEvenRollnoStudents();
    
    int rollno;
    printf("Enter a roll number to display details: ");
    scanf("%d", &rollno);
    displayStudentDetails(rollno);
    
    return 0;
}
