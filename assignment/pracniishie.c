    #include <stdio.h>
    #include <stdlib.h>
    
    void insertAtPos(int *arr, int *size, int val, int posInsert);
    void insertAtStart(int *arr, int *size, int val);
    void insertEnd(int *arr, int *size, int val);
    void deleteAtPosition(int *arr, int *size, int pos);
    void deleteStart(int *arr, int *size);
    void deleteEnd(int *arr, int *size);
    
    int main() {
        int choice, size, val, posInsert, posDelete;
    
        printf("Enter size: ");
        scanf("%d", &size);
    
        int *arr = (int*)malloc(size * sizeof(int));
        printf("Enter elements:\n");
        for(int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
    
    
        printf("Choose operation:\n[1] Insert at Position\n[2] Insert at Start\n[3] Insert at End\n[4] Delete at Position\n[5] Delete at Start\n[6] Delete at End\nChoose (1-6): ");
        scanf("%d", &choice);
    
        switch(choice) {
            case 1: 
            arr = realloc(arr, (size + 1) * sizeof(int));
    
            printf("Enter what position: ");
            scanf("%d", &posInsert);
            printf("Enter value: ");
            scanf("%d", &val);
            
            insertAtPos(arr, &size, val, posInsert);
            
            printf("Updated Array: ");
            for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            break;
        
            case 2: 
            arr = realloc(arr, (size + 1) * sizeof(int));
            printf("Enter value: ");
            scanf("%d", &val);
            
            insertAtStart(arr, &size, val);
            
            printf("Updated Array: ");
             for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            break;
            
            case 3: 
            arr = realloc(arr, (size + 1) * sizeof(int));
            printf("Enter value: ");
            scanf("%d", &val);
            
            insertEnd(arr, &size, val);
            
            printf("Updated Array: ");
             for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            break;
            
            case 4: 
            arr = realloc(arr, (size - 1) * sizeof(int));
            printf("Enter index to delete: ");
            scanf("%d", &posDelete);
        
            deleteAtPosition(arr, &size, posDelete);
            
            printf("Updated Array: ");
            for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            break;
            
            case 5: 
            arr = realloc(arr, (size - 1) * sizeof(int));
            deleteStart(arr, &size);
            
            printf("Updated Array: ");
            for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            break;
            
            case 6: 
            arr = realloc(arr, (size - 1) * sizeof(int));
            deleteEnd(arr, &size);
            
            printf("Updated Array: ");
            for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            break;
            
            default: 
            printf("Invalid Choice...\n");
            break;
    
        }
    
    }
    
    void insertAtPos(int *arr, int *size, int val, int posInsert){
        for(int i = *size - 1; i >= posInsert; i--) {
            arr[i + 1] = arr[i];
        }
        arr[posInsert] = val;
        (*size)++;
    }
    
    void insertAtStart(int *arr, int *size, int val) {
        for(int i = *size - 1; i >= 0; i--) {
         arr[i + 1] = arr[i];   
        }
        arr[0] = val;
        (*size)++;
    }
    
    void insertEnd(int *arr, int *size, int val) {
        (*size)++;
        arr[*size - 1] = val;
    }
    
    void deleteAtPosition(int *arr, int *size, int posDelete) {
        for(int i = posDelete + 1; i < *size - 1; i++) {
            arr[i - 1] = arr[i];
        }
        (*size)--;
    }
    
    void deleteStart(int *arr, int *size) {
        for(int i = 1; i < *size; i++) {
            arr[i - 1] = arr[i];
        }
        (*size)--;
    }
    
    void deleteEnd(int *arr, int *size) {
        (*size)--;
    }
    
    
    
    
    
    
    
    
    
    
    