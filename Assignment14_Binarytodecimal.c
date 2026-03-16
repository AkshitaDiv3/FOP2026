#include <stdio.h>

int main() {
    float number;

    printf("Enter a number: ");

    scanf("%f", &number);

    printf("The number in decimal form (2 places): %.2f\n", number);

    printf("The number as a simple integer output: %.0f\n", number); 

    return 0;
}
