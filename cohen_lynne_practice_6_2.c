/* 
COP 3223 Spring 2024 Practice 6.2
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 20 // maximum size of array

int linearSearch(const int array[], int key, size_t size);   // function prototype

int main() 
{

    /* 
    Use a one-dimensional array to solve the following problem. 
    Read 20 numbers, each of which is between 10 and 100, inclusive. 
    As each number is read, print it only if it’s not a duplicate of a number already read. 
    Provide for the “worst case” in which all 20 numbers are different. 
    Use the smallest possible array to solve this problem.
    */
    
    int c[SIZE] = {0};  // Create the array "c"
    int input = 0; // create variable to temporarily store user input
    
    for (int x = 0; x < SIZE; x++) {        
        printf("Please enter a value for c[%d] (must be integer 10-100, inclusive): ", x);
        scanf("%d",&input); // store it in a temporary variable

        int searchResult = linearSearch(c, input, SIZE); // call on search function & define a variable for its return value
        
        if (searchResult != -1) {  // if value matches a previous value in the array, do nothing
           
            } else {
            printf("New Value Found: %d\n", input);  // if value is unique (no match), print it
            }
        c[x] = input; // now add it to the array
    }
}

// compare key to every element of array until the location is found

int linearSearch(const int array[], int searchKey, size_t size) {  // loop through array
for (size_t n = 0; n < size; ++n) {
    if (array[n] == searchKey) {
        return n; // return location of key
        }
    }
return -1; // otherwise, return -1 for key not found
}