#include<stdio.h>
int main() {
    printf("BUBBLE SORT\n");
    int arr[10];
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("ivalid");
    }
    else if(n==1)
    {
        printf("insufficient");
    }
    else
    {
        printf("Enter %d elements:",n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                   if (arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
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
    }
        printf("\n");

    return 0;
}