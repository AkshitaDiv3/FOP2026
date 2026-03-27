#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender; 
    struct Date doj;
    float salary;
};

*Function to display total number of employees:

void totalEmployees(int n) {
    printf("\nTotal number of employees in the organization: %d\n", n);
}

*Function to count male and female employees:

void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm') male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f') female++;
    }
    printf("Male Employees: %d, Female Employees: %d\n", male, female);
}

*Function to list employees with salary > 10,000:

void salaryMoreThan10k(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with salary more than 10,000:\n");
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("- %s (Salary: %.2f)\n", emp[i].name, emp[i].salary);
            count++;
        }
    }
    if (count == 0) printf("None found.\n");
}

*Function to list employees with designation "Asst Manager":

void asstManagers(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "Asst Manager") == 0) {
            printf("- %s\n", emp[i].name);
            count++;
        }
    }
    if (count == 0) printf("None found.\n");
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar(); 

    struct EMPLOYEE emp;

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter Details for Employee %d ---\n", i + 1);
        printf("Name: ");
        fgets(emp[i].name, 50, stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = 0; /

        printf("Designation: ");
        fgets(emp[i].designation, 50, stdin);
        emp[i].designation[strcspn(emp[i].designation, "\n")] = 0;

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        getchar(); 
    }

    printf("\n========== EMPLOYEE REPORTS ==========");
    totalEmployees(n);
    countGender(emp, n);
    salaryMoreThan10k(emp, n);
    asstManagers(emp, n);

    return 0;
}
