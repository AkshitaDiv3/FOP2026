*Addition of matrix :

#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], b[10][10];

    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    printf("Matrix A:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &a[i][j]);

    printf("Matrix B:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &b[i][j]);

    printf("Sum:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}

*Inverse of a matrix :

#include <stdio.h>

int main() {
    float a[2][2], det;

    printf("Enter 4 elements for 2x2 matrix: ");
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) scanf("%f", &a[i][j]);

    det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    if(det == 0) {
        printf("\nInverse does not exist (Determinant is 0).\n");
    } else {
        printf("\nInverse Matrix:\n");
        printf("%.2f\t%.2f\n",  a[1][1]/det, -a[0][1]/det);
        printf("%.2f\t%.2f\n", -a[1][0]/det,  a[0][0]/det);
    }
    return 0;
}

*Saddle Point of a matrix :

#include <stdio.h>

int main() {
    int mat[10][10], r, c, i, j, k, min_row, col_idx, found = 0;

    printf("Rows and Cols: ");
    scanf("%d %d", &r, &c);

    for(i=0; i<r; i++) 
        for(j=0; j<c; j++) scanf("%d", &mat[i][j]);

    for(i=0; i<r; i++) {
        min_row = mat[i][0];
        col_idx = 0;
        for(j=1; j<c; j++) {
            if(mat[i][j] < min_row) {
                min_row = mat[i][j];
                col_idx = j;
            }
        }

        for(k=0; k<r; k++) {
            if(mat[k][col_idx] > min_row) break;
        }

        if(k == r) {
            printf("Saddle Point: %d at [%d][%d]\n", min_row, i, col_idx);
            found = 1;
        }
    }

    if(!found) printf("No Saddle Point found.\n");
    return 0;
}

*Magic square of two matrices :

#include <stdio.h>

int main() {
    int n, i, j, k, sq[15][15] = {0};
    printf("Enter odd size: ");
    scanf("%d", &n);

    i = 0; j = n / 2; 
    for (k = 1; k <= n * n; k++) {
        sq[i][j] = k;
        int next_i = (i - 1 + n) % n;
        int next_j = (j + 1) % n;

        if (sq[next_i][next_j]) i = (i + 1) % n; 
        else { i = next_i; j = next_j; }         
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%3d ", sq[i][j]);
        printf("\n");
    }
    return 0;
}
