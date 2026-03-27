#include <stdio.h>

int main() {
    int n, i;
    int arr[100], even[100], odd[100];
    int even_count = 0, odd_count = 0;

    printf("Enter the number of integers (N): ");
    scanf("%d", &n);

    printf("Enter %d integers:\\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count] = arr[i];
            even_count++;
        } else {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("\\nEven numbers list:\\n");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

    printf("\\nOdd numbers list:\\n");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    printf("\\n");
    return 0;
}
