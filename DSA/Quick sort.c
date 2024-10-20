#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int low, int high) {
if (low < high) {

int pivot = arr[high];
int i = low - 1;

printf("Array: ");
for (int k = low; k <= high; k++)
printf("%d ", arr[k]);
printf("\n");

for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
        i++;
        swap(&arr[i], &arr[j]);
     }
    }
    swap(&arr[i + 1], &arr[high]);


    printf("Partitioning around %d: ", pivot);
    for (int k = low; k <= high; k++)
    printf("%d ", arr[k]);
    printf("\n\n");

    int pi = i + 1;

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("QUICK SORT\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    if(n==1)
    {
        printf("Insufficient");
    }
    else if(n==0){
        printf("Invalid");
    }
    else
    {
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("\nOriginal array: \n");
        printArray(arr, n);

        printf("\nSorted array: \n");
        printArray(arr, n);
    }
    return  0;
}