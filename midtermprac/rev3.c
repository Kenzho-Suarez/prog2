/*

Topics: Pointers, Arrays, Dynamic Memory

Problem:
Write a program that:
- Dynamically allocates an integer array.
- Reverses every alternate block of size k in the array using only pointers.
- Example: If k = 3 and array = [1,2,3,4,5,6,7,8,9], output should be [3,2,1,4,5,6,9,8,7].

In baby terms:
You’ll flip chunks of the array one after another, but only every other chunk — like flipping tiles on the floor using pointer swaps.

Requirements:
- Use malloc() to allocate array.
- Use pointer arithmetic, not indexing.

Write function:

void reverseAlternateBlocks(int *arr, int size, int k);

Sample Input:

Enter size: 9
Enter elements: 1 2 3 4 5 6 7 8 9
Enter block size: 3

Sample Output:

Result: 3 2 1 4 5 6 9 8 7

Test Cases:

Input: 8 elements, k=2 → [1 2 3 4 5 6 7 8] → [2 1 3 4 6 5 7 8]  
Input: 10 elements, k=4 → [10 9 8 7 6 5 4 3 2 1] → [7 8 9 10 6 5 4 3 1 2]

*/

int main() {
    return 0;
}