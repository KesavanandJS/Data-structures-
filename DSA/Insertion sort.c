#include <stdio.h>

int main() {
    printf("INSERTION SORT\n");
    int arr[100];
    int n, i, j, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("Invalid");
    }
    else if(n==1)
    {
        printf("insufficient");
    }
    else
    {
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("\nInitial array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
            printf("Iteration %d: ", i);
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        printf("\nSorted array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}