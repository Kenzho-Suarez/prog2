/*******************************************************************************
 * This program will illustrate operations in an DT List of student records    *
 * represented in memory using Array Implementation.                           *
 *                                                                             *
 *  Instructions:                                                              *
 *    1) Change the filename name to MP01_YourLastnameXX.c                     *
 *       where XX is the 1st 2 letters of your firstname                       *
 *    2) Complete the tasks provided in the main() function by writing  the    *
 *       code of the functions and making function calls.                      *
 *    3) Upload the .c file to canvas                                          *
 *                                                                             *    
 *  Programmer:                                                                *
 *  Date finished:                                                             *        
 *******************************************************************************/

//A] Macro definitions and inclusion of header file

#define ARR_LENGTH  0XA
#include <stdio.h>
#include <string.h>

//B] Data Structure Definition
 
typedef struct {
    char FN[24], MI, LN[16];
}nametype;

typedef struct {
	 char ID[9];
    nametype name;
    char course[8];
    int yrlevel;
}studtype;

typedef struct {
    studtype studs[ARR_LENGTH];
    int count;
}ArrayList;

//C] Function Prototypes
void displayHeader();                         //Displays the header information
void displayStudent(studtype S);              //Displays info of a student record in 1 horizontal line
void displayList(ArrayList A);                //Displays the list and Element count. Calls displayHeader() and displayStudent()

//For Task 1: To write the code
void initList(ArrayList *A) //Initializes the list to be empty
    
    //Inserts an element at the end of the list if there is still space; otherwise
    //Display "List is full. Cannot insert Element with ID ___".
void insertLast(ArrayList *A, studtype S);
                                               
//For Task 2: To write the code 
    //Deletes the element bearing the given ID if the element is found; otherwise
    //Display "Element with ID ___ is not found"
    
void deleteElem(ArrayList *A, char ID[]);
//For Task 3: To write the code 
        //Inserts an element at the first position of the list if there is still space; otherwise
        //    Display "List is full. Cannot insert Element with ID ___".
void insertFirst(ArrayList *A, studtype S);

//For Task 4: To write the code 
    //Sorts the given list in ascending order according to ID.
    //Sorts the given list in ascending order according to ID.
void selectionSort(ArrayList *A);            


//D] The main function
int main()
{
  ArrayList L;
  studtype data[] = {  {"STUD1001", {"John", 'R', "Doe"}, "BSCS", 1},
           				  {"STUD1005", {"Jane", 'L', "Smith"}, "BSIT", 1},
           				  {"STUD1002", {"Mark", 'S', "Johnson"}, "BSIS", 1},
                       {"STUD1009", {"Joey", 'K', "Lee"}, "BSIS", 2},
            		     {"STUD1015", {"Michael", 'T', "Garcia"}, "BSIT", 2},
           				  {"STUD1006", {"Emlio", 'P', "Martinez"}, "BSIT", 3},
           				  {"STUD1011", {"David", 'A', "Rodriguez"}, "BSCS", 4},
            		     {"STUD1012", {"Olivia", 'B', "Hernandez"}, "BSCS", 3},
            			  {"STUD1008", {"James", 'C', "Kim"}, "BSIS", 3},
           			     {"STUD1010", {"Mia", 'D', "Nguyen"}, "BSCS", 1}
           	  			};
   
  
   
  /*-----------------------------------------------------------------------------------
   Task 1: 
     a) Populate the list with 10 elements by calling insertLast() 10 times. Use array data
     b) Display the List by calling displayList()
   -------------------------------------------------------------------------------------*/
   // A)
   initList(&L);
   for(int i; i < ARR_LENGTH; i++) {
       insertLast(&L, data[i]);
   }
   
   // B)
   displayList(L);
   
   printf("\n\nTask 1: Populating the list");
   initList(&L);   //UNcomment this if initList() function is created
  
  /*----- Write your code below to accomplish Task 1 -----*/ 
  for(int i = 0; i < ARR_LENGTH; i++) {
      insertLast(&L, data[i]);
  }
  displayList(L);
   
   
  
  /*-----------------------------------------------------------------------------------
   Task 2: 
     a) Call deleteElem() passing the ID number STUD1009, then call displayList()
     b) Call deleteElem() passing the ID number STUD1001, then call displayList()
     c) Call deleteElem() passing the ID number STUD1013, then call displayList()
   -------------------------------------------------------------------------------------*/
   printf("\n\nTask 2: Deleting Elements in the list");
   
   /*----- Write your code below to accomplish Task 2 -----*/
   deleteElem(&L, "STUD1009");
   displayList(L);
   
   deleteElem(&L, "STUD1001");
   displayList(L);
   
   deleteElem(&L, "STUD1013");
   displayList(L);
   
   
 /*-----------------------------------------------------------------------------------
   Task 3: 
     Call insertFirst() 3 times passing the data records below, then call displayList()
   
   -------------------------------------------------------------------------------------*/
  printf("\n\nTask 3: Inserting at the first position in the list");
  studtype xData[] = { {"STUD1011", {"Ethan", 'E', "Perez"}, "BSIS", 2},
                       {"STUD1012", {"Chung", 'F', "Tan"}, "BSCS", 2},
           	  	       {"STUD1013", {"Alexander", 'G', "Reyes"}, "BSIS", 4}
           	  			     };	
        	  			     
    /*----- Write your code below to accomplish Task 3 -----*/
    for (int i = 0; i < ARR_LENGTH; i++) {
        insertFirst(&L, xData[i]);
    }
    displayList(L);
	 
	 
	 
	     	  			     

/*-----------------------------------------------------------------------------------
   Task 4: 
     Call selectionSort(), then call displayList()
   
   -------------------------------------------------------------------------------------*/
   printf("\n\nTask 4: Sorting the list according to ID");
   
	 /*----- Write your code below to accomplish Task 4 -----*/
	 selectionSort(&L);
	 displayList(L);
	  
	  
	  
 
   return 0;
}

/*****************************************************************
 * Function Definitions                                          *
 *****************************************************************/

//----- Display Functions ------
void displayHeader()
{
	printf("\n\n");
	printf("%-10s", "Id Number");
   printf("%-13s", "FirstName");
   printf("%-3s", "MI");
   printf("%-13s", "LastName");
   printf("%-10s", "Program");
   printf("%-10s", "Year");		
}

void displayStudent(studtype S)
{
	printf("\n");
	printf("%-10s", S.ID);
   printf("%-13s", S.name.FN);
   printf("%-3c",  S.name.MI);
   printf("%-13s", S.name.LN);
   printf("%-10s", S.course);
   printf("%-10d", S.yrlevel);	
}  
            
//Complete the code for displayList()
void displayList(ArrayList A)    
{
	int x;
	
	printf("\nList has %d elements:", A.count);
 	displayHeader();       
	//Write your code below
	 
	 
	 
 //printf("\n\n"); system("Pause");   //UNcomment this if a pause is desired
}  

/*****************************************************************************
 * Task 1: Write the code of functions initList() and insertLast()           *
 *****************************************************************************/
void initList(ArrayList *A) {
    A->count = 0;
}

void insertLast(ArrayList *A, studtype S) {
    if (A->count < ARR_LENGTH) {
        A->studs[A->count] = S;
        A->count++;
    } else {
        printf("List is full. Cannot insert Element with ID %s", S.ID);
    }
}


/*****************************************************************************
 * Task 2: Write the code of function deleteElem()                           *
 *****************************************************************************/
void deleteElem(ArrayList *A, char ID[]) {
    int i, found = 0;
    for(i = 0; i < A->count; i++) {
        if(strcmp(A.studs[i].ID, ID) == 0) {
            found = 1;
            break;
        }
    }
    
    if(found) {
        for(; i < A->count - 1; i++) {
            A->studs[i] = A->studs[i + 1];
        }
        A->count--;
    } else {
        printf("Element with ID %s is not found", ID);
    }
}
 
  
/*****************************************************************************
 * Task 3: Write the code of function insertFirst()                           *
 *****************************************************************************/	
void insertFirst(ArrayList *A, studtype S) {
    if(A->count < ARR_LENGTH) {
        for(int i = A->count; i > 0; i--){
            A->studs[i] = A->studs[i - 1];
        }
        A->studs[0] = S;
        A->count++;
    } else {
        printf("List is full. Cannot insert Element with ID %s", S.ID);
    }
    
}



/*****************************************************************************
 * Task 4: Write the code of function selectionSort()                           *
 *****************************************************************************/	
 void selectionSort(ArrayList *A) {
    for(int i = 0; i < A->count; i++) {
        int min = i;
        for(int j = i + 1; j < A->count; j++) {
            if(strcmp(A->studs[j].ID, A->studs[min].ID) < 0){
                min = j;
            }
        }
        
        if (min != i) {
            studtype temp = a->studs[i];
            a->studs[i] = a->studs[min];
            a->studs[min] = temp;
        }
    }
}
 

