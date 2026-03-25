#include <stdio.h>

long long int factorial_iterative(int n) {
    if (n < 0) {
        return -1; 
    }
    long long int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num = 10;
    long long int result = factorial_iterative(num);
    if (result == -1) {
        printf("Error: Factorial of a negative number doesn't exist.\\n");
    } else {
        printf("Factorial of %d is %lld\\n", num, result);
    }
    return 0;
}
