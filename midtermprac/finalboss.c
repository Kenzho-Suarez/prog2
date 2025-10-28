/*
============================================================
FINAL BOSS PROBLEM: NUMBER CLASSIFICATION SYSTEM 9000
============================================================

TOPICS COVERED:
- Pointers
- Arrays and Dynamic Memory (malloc, free)
- Mathematical classification (Prime, Composite, Even, Odd, Harshad, Armstrong)
- Sorting Algorithms (Bubble or Selection Sort)
- Functions with return values
- Loops and conditional logic

------------------------------------------------------------
PROBLEM DESCRIPTION:
------------------------------------------------------------

Create a Number Classification System that does the following:

1. INPUT PHASE:
   - Ask the user how many numbers they want to input.
   - Dynamically allocate an array to store them.

2. ANALYSIS PHASE:
   - For each number, classify it into multiple categories:
     - Even / Odd
     - Prime / Composite
     - Harshad (divisible by the sum of its digits)
     - Armstrong (sum of each digit³ equals the number itself)

3. SORTING PHASE:
   - After classifying all numbers, sort them in ascending order using pointers
     and a sorting algorithm (Bubble or Selection Sort).

4. DISPLAY PHASE:
   - Print a detailed report for each number like this:

     Example Output:
     Number: 153
     ➤ Type: Odd, Armstrong, Harshad
     ➤ Classification: Not Prime (Composite)

5. BONUS CHALLENGE:
   - Count how many of each type exist (e.g., how many primes, evens, Armstrongs).
   - Display a summary table at the end.

------------------------------------------------------------
IN BABY TERMS:
------------------------------------------------------------
You’re building a smart analyzer that checks numbers for different “traits.”
It’ll tell if they’re even or odd, prime or not, Armstrong or Harshad — and sort them.
You’ll use functions, pointers, and loops to do the work, not just raw if-statements.

------------------------------------------------------------
REQUIRED FUNCTIONS:
------------------------------------------------------------

You must write at least the following helper functions:

int isEven(int n);
int isPrime(int n);
int isHarshad(int n);
int isArmstrong(int n);
void sortArray(int *arr, int size);
int sumOfDigits(int n);

Each function should use clean logic and pointer-friendly code style.

------------------------------------------------------------
SAMPLE INPUT:
------------------------------------------------------------
Enter number of elements: 6
Enter the numbers: 10 11 12 13 18 153

------------------------------------------------------------
SAMPLE OUTPUT:
------------------------------------------------------------
Sorted Numbers: 10 11 12 13 18 153

Number: 10
Type: Even, Harshad
Classification: Composite

Number: 11
Type: Odd
Classification: Prime

Number: 12
Type: Even, Harshad
Classification: Composite

Number: 13
Type: Odd
Classification: Prime

Number: 18
Type: Even, Harshad
Classification: Composite

Number: 153
Type: Odd, Armstrong, Harshad
Classification: Composite

Summary:
Even Numbers: 3
Odd Numbers: 3
Prime Numbers: 2
Composite Numbers: 4
Harshad Numbers: 4
Armstrong Numbers: 1

------------------------------------------------------------
TEST CASES:
------------------------------------------------------------

Input: 5 → 1 2 3 4 5
Output Summary: 2, 4 even; 2, 3, 5 prime; Harshads: 1,2,3,4,5; Armstrongs: 1

Input: 4 → 153 370 371 407
Output Summary: All Armstrong & Harshad

Input: 6 → 6 8 9 10 12 15
Output Summary: 6,8,9,12,15 Harshad; primes: none; Armstrong: none

*/

int main() {
    return 0;
}