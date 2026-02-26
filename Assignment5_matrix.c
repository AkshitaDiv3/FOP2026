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

