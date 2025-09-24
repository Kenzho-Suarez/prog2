#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char course[10];
    int id;
    int grade[5];
    int sum;
    float avg;
} Student;

int main() {
    int size, operation;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    Student *arr = (Student*)malloc(size * sizeof(Student));
    
    printf("List the name of Students:\n");
    for(int i = 0; i < size; i++) {
        printf("\n-----------------------\n");
        printf("Name: ");
        scanf(" %[^\n]", arr[i].name);
        
        printf("Course: ");
        scanf(" %[^\n]", arr[i].course);
        
        printf("Student ID: ");
        scanf("%d", &arr[i].id);
        
        arr[i].sum = 0;
        
        printf("Grades (1-5): ");
        for(int j = 0; j < 5; j++) {
            scanf("%d", &arr[i].grade[j]);
            arr[i].sum += arr[i].grade[j];
        }
        arr[i].avg = arr[i].sum / 5.0;
        printf("Average: %.2f\n", arr[i].avg);
        printf("-----------------------\n");
    }
    
    printf("Operations:\n[1] List Students\n[2] Insert Student at a Position\n[3] Delete Student at a Position\n[4] Sort Students by Grade\n[5] Sort Students by Name\nChoose (1-5): ");
    scanf("%d", &operation);
    
    switch(operation) {
        case 1: 
        for(int i = 0; i < size; i++) {
            printf("\n-----------------------\n");
            printf("Name: %s\n", arr[i].name);
            printf("Course: %s\n", arr[i].course);
            printf("Student ID: %d\n", arr[i].id);
            printf("Grades: ");
            for(int j = 0; j < 5; j++) {
                printf("%d ", arr[i].grade[j]);
            }
            printf("\nAverage: %.2f\n", arr[i].avg);
        }
        printf("-----------------------\n");
        break;
        
        case 2: { 
        int pos;
        printf("Enter Position to insert: ");
        scanf("%d", &pos);
        
        arr = realloc(arr, (size + 1) * sizeof(Student));
        Student newStud;
        printf("Enter Student details:\n");
        printf("Name: ");
        scanf(" %[^\n]", newStud.name);
        
        printf("Course: ");
        scanf(" %[^\n]", newStud.course);
        
        printf("Student ID: ");
        scanf("%d", &newStud.id);
        
        newStud.sum = 0;
        printf("Grades (1-5): ");
        for(int j = 0; j < 5; j++) {
            scanf("%d", &newStud.grade[j]);
            newStud.sum += newStud.grade[j];
        }
        newStud.avg = newStud.sum / 5.0;
        
        for(int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = newStud;
        size++;
        
        printf("Updated Student Record:\n");
        for(int i = 0; i < size; i++) {
            printf("\n-----------------------\n");
            printf("Name: %s\n", arr[i].name);
            printf("Course: %s\n", arr[i].course);
            printf("Student ID: %d\n", arr[i].id);
            printf("Grades: ");
            for(int j = 0; j < 5; j++) {
                printf("%d ", arr[i].grade[j]);
            }
            printf("\nAverage: %.2f\n", arr[i].avg);
        }
        printf("-----------------------\n");
        break;
        }
        
        case 3: { 
        int posDelete;
        printf("Enter position to Delete: ");
        scanf("%d", &posDelete);
        
        for(int i = posDelete + 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--;
        arr = realloc(arr, size * sizeof(Student));
        
        printf("\nUpdated Student Record:\n");
        for(int i = 0; i < size; i++) {
            printf("-----------------------\n");
            printf("Name: %s\n", arr[i].name);
            printf("Course: %s\n", arr[i].course);
            printf("Student ID: %d\n", arr[i].id);
            printf("Grades: ");
            for(int j = 0; j < 5; j++) {
                printf("%d ", arr[i].grade[j]);
            }
            printf("\nAverage: %.2f\n", arr[i].avg);
        }
        printf("-----------------------\n");
        break;
        }
        
        case 4: { 
        Student temp;
        for(int i = 0; i < size - 1; i++) {
            for(int j = 0; j < size - i - 1; j++) {
                if(arr[j].avg > arr[j + 1].avg) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        
        printf("\nStudents Sorted by Average:\n");
        for(int i = 0; i < size; i++) {
            printf("-----------------------\n");
            printf("Name: %s\n", arr[i].name);
            printf("Course: %s\n", arr[i].course);
            printf("Student ID: %d\n", arr[i].id);
            printf("Grades: ");
            for(int j = 0; j < 5; j++) {
                printf("%d ", arr[i].grade[j]);
            }
            printf("\nAverage: %.2f\n", arr[i].avg);
        }
        printf("-----------------------\n");
        break;
        }
        
        case 5:
        break;
        
        default:
        break;
    }
}
