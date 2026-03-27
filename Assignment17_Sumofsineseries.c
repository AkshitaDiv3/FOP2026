#include <stdio.h>
#include <math.h>

double fact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    double x, sum = 0, term;
    int n, i;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        term = pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
        sum += term;
    }

    printf("The sum of the sine series is: %lf\n", sum);
    return 0;
}
