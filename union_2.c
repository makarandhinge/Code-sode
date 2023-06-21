#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee employees[5]; // Array to store details of 5 employees

    // Taking input for each employee
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove the newline character

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        // Consume the newline character left in the input buffer
        getchar();
    }

    // Printing the details of each employee
    for (int i = 0; i < 5; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
