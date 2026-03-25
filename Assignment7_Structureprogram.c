#include <stdio.h>

// Define a structure to hold student details
struct Student {
    char name[50];
    float m1, m2;
    float avg;
};

int main() {
    struct Student s[5]; // Array of 5 students
    int i;

    // Accepting details for 5 students
    for(i = 0; i < 5; i++) {
        printf("--- Enter details for Student %d ---\n", i + 1);
        
        printf("Name: ");
        scanf("%s", s[i].name);
        
        printf("Marks for Subject 1 (m1): ");
        scanf("%f", &s[i].m1);
        
        printf("Marks for Subject 2 (m2): ");
        scanf("%f", &s[i].m2);
        
        // Calculate average
        s[i].avg = (s[i].m1 + s[i].m2) / 2.0;
        printf("\n");
    }

    // Printing the output
    printf("====================================================\n");
    printf("%-15s %-10s %-10s %-10s\n", "Name", "m1", "m2", "Average");
    printf("----------------------------------------------------\n");
    
    for(i = 0; i < 5; i++) {
        printf("%-15s %-10.2f %-10.2f %-10.2f\n", 
                s[i].name, s[i].m1, s[i].m2, s[i].avg);
    }
    printf("====================================================\n");

    return 0;
}
