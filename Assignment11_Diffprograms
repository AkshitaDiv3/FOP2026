Square root of number :
#include <stdio.h>

int main() {
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate square
    square = num * num;
    printf("Square of %d is %d\n", num, square);
    
    return 0;
}

Square of the number :
#include <stdio.h>

int main() {
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate square
    square = num * num;
    printf("Square of %d is %d\n", num, square);
    
    return 0;
}
Cube of the number:
#include <stdio.h>

int main() {
    int num, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate cube
    cube = num * num * num;
    printf("Cube of %d is %d\n", num, cube);
    
    return 0;
}
Prime number:
#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
Factorial of a number:
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}

Prime factors of a number :
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);

    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");

    return 0;
}
