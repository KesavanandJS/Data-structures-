#include <stdio.h>

int main() {
    printf("SELECTION SORT\n\n");
    int arr[100];
    int n, i, j, min_idx, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("Invalid");
    }
    else if(n==1)
    {
       printf("Insufficient");
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
         for (i = 0; i < n-1; i++) {

            min_idx = i;
            for (j = i+1; j < n; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            printf("Iteration %d: ", i+1);
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