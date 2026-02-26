#include<stdio.h>
void main(){
     int a [2][2],i,j;
     printf("Enter element");
     for(i=0;i<=1;i++){ 
     for(j=0;j<=1;j++){
        scanf("%d", &a[i][j]);

    }
}
    printf("The matrix is:/n");


for(i=0;i<=1;i++){
    for(j=0;j<=1;j++){
        printf("%d",  a[i][j]);
    }
    printf("\n");
}
}

#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c;
    int min, colIndex;
    int found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        min = a[i][0];
        colIndex = 0;

        // Find minimum in the row
        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                colIndex = j;
            }
        }

        // Check if it is maximum in its column
        int isSaddle = 1;
        for(j = 0; j < r; j++) {
            if(a[j][colIndex] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle Point = %d\n", min);
            found = 1;
        }
    }

    if(!found) {
        printf("No Saddle Point found\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float a[2][2], determinant;
    int i, j;

    printf("Enter the 4 elements of the 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Calculate the determinant (ad - bc)
    determinant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    if (determinant == 0) {
        printf("\nDeterminant is 0. The matrix is singular and has no inverse.\n");
    } else {
        printf("\nDeterminant: %.2f\n", determinant);
        printf("\nInverse Matrix:\n");

        /* 
           The formula for inverse:
           Swap a[0][0] and a[1][1]
           Change signs of a[0][1] and a[1][0]
           Divide all by determinant
        */
        printf("%.2f\t%.2f\n", (a[1][1] / determinant), (-a[0][1] / determinant));
        printf("%.2f\t%.2f\n", (-a[1][0] / determinant), (a[0][0] / determinant));
    }

    return 0;
}

#include <stdio.h>

// Function to generate an odd-sized magic square and store it in a 2D array
void generate_magic_square(int n, int mat[][n]) {
    // Initialize all elements of the matrix to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = 0;
        }
    }

    // Start position for number 1: middle of the first row
    int i = 0;
    int j = n / 2;

    // One by one put all values in the magic square
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n) { // If both row and column are out of bounds
            j = n - 2;
            i = 0;
        } else {
            if (j == n) j = 0;   // Wrap around column
            if (i < 0) i = n - 1; // Wrap around row
        }

        if (mat[i][j]) { // If the cell is already occupied
            j -= 2;      // Move two columns left
            i++;       // Move one row down
            continue;
        } else {
            mat[i][j] = num++; // Place the number and increment
        }

        // Prepare for the next number: move up-right
        j++;
        i--;
    }
}

// Function to print the magic square
void print_square(int n, int mat[][n]) {
    printf("The Magic Square (%dx%d) is:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", mat[i][j]); // Use field width for formatting
        }
        printf("\n");
    }
}

// Function to calculate and return the magic constant
int calculate_magic_sum(int n, int mat[][n]) {
    // The sum of any row, column, or diagonal should be the same, known as the magic constant.
    // For a normal magic square of order n, the constant is n*(n^2 + 1)/2.
    return n * (n * n + 1) / 2;
}


int main() {
    int n;

    // Prompt user for an odd number
    printf("Please enter an odd integer for the size of the magic square (e.g., 3, 5, 7): ");
    scanf("%d", &n);

    // Validate input (n must be odd and >= 3 for this algorithm)
    if (n % 2 == 0 || n < 3) {
        printf("Invalid input. The number must be an odd integer greater than or equal to 3.\n");
        return 1;
    }

    // Declare a variable-sized array (C99 feature)
    int magicSquare[n][n];

    // Generate the magic square
    generate_magic_square(n, magicSquare);

    // Print the square
    print_square(n, magicSquare);

    // Print the magic sum
    int magicSum = calculate_magic_sum(n, magicSquare);
    printf("\nThe magic constant (sum of each row, column, and diagonal) is: %d\n", magicSum);


    return 0;
}

write for Saddle Point 
