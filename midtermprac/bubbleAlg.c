#include <stdio.h>
#define MAX 100

void bubbleSort(int arr[MAX], int n);

int main() {
    int arr[MAX];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    
    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[MAX], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
            }
        }
    }
}








