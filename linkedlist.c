// A] Macro definitions and inclusion of header file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// B] Data Structure Definition
typedef struct {
    char FN[24], MI, LN[16];
} nametype;

typedef struct {
    char ID[9];
    nametype name;
    char course[8];
    int yrlevel;
} studtype;

typedef struct node {
    studtype stud;
    struct node *link;
} *List;

// C] Function Prototypes
void initList(List *A); // Initializes the list to be empty
void insertLast(List *A, studtype S); // Inserts an element at the end of the list
void displayHeader();
void displayStudent(studtype S); // Displays info of a student record in 1 horizontal line
void displayList(List A); // Displays the list. Calls displayStudent()
void deleteElem(List *A, char ID[]); // Deletes the element bearing the given ID if the element is found

/*****************************************************************
* Function Definitions *
*****************************************************************/

// ----- Display Functions ------
void displayHeader() {
    printf("\n\n");
    printf("%-10s", "Id Number");
    printf("%-13s", "FirstName");
    printf("%-3s", "MI");
    printf("%-13s", "LastName");
    printf("%-10s", "Program");
    printf("%-10s", "Year");
}

void displayStudent(studtype S) {
    printf("\n");
    printf("%-10s", S.ID);
    printf("%-13s", S.name.FN);
    printf("%-3c", S.name.MI);
    printf("%-13s", S.name.LN);
    printf("%-10s", S.course);
    printf("%-10d", S.yrlevel);
}

void displayList(List A) {
    int count = 0;
    
    displayHeader();
    for (; A != NULL; A = A->link) {  // For loop to traverse the list
        displayStudent(A->stud);
        count++;
    }

    printf("\n\nList has %d elements.\n", count);
}

// ----- Linked List Functions ------
void initList(List *A) {
    *A = NULL;
}

void insertLast(List *A, studtype S) {
    List newnode = (List)malloc(sizeof(struct node));
    if (newnode == NULL) {

        printf("Memory Allocation Error. Cannot insert element with ID %s\n", S.ID);
        return;
    }
    newnode->stud = S;
    newnode->link = NULL;

    if (*A == NULL) {
        *A = newnode;  
        List trav = *A;
        for (; trav->link != NULL; trav = trav->link) {  
        }
        trav->link = newnode; 
    }
}

void deleteElem(List *A, char ID[]) {
    List temp, trav;
    if(*A != NULL){
        if(strcmp((*A)->stud.ID, ID) == 0){
            temp = *A;
            *A = temp->link;
            free(temp);
        }else{
            for(trav = *A; trav->link != NULL; trav = trav->link){
                if(strcmp(trav->link->stud.ID, ID) == 0){
                    temp = trav->link;
                    trav->link = temp->link;
                    free(temp);
                }
            }
        }
    }else{
        printf("Element with ID %s is not found\n", ID);
    }
}


