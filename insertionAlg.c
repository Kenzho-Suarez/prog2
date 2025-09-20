#include <stdio.h>
#define MAX 100

void insertionSort(int arr[MAX], int n);

int main() {
    int arr[MAX];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    insertionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[MAX], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j--;
            }  
    arr[j + 1] = key;
    }
    
   
}







