#include <stdio.h>
#define MAX 100

void selectionSort(int arr[MAX], int n);

int main() {
    int arr[MAX];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);
    
    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[MAX], int n) {
   int min, i, j, temp;
   for(i = 0; i < n - 1; i++) {
       min = i;
       for(j = i + 1; j < n; j++) {
           if(arr[j] < arr[min]) {
               min = j;
           }
       }
       temp = arr[i];
       arr[i] = arr[min];
       arr[min] = temp;
       
   }
}








