/* 
COP 3223 Spring 2024 Practice 7.1
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE_ONE 10 // symbolic constant for Question 1
#define SIZE_QFOUR 5 // symbolic constant for Question 5

int main() 
{
   
// QUESTION 1
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 1");
puts("-----------------------------------------------------------------");
puts(" ");

/* Answer each of the following. Assume that single-precision floating-point numbers are stored in four bytes, 
and that the array’s starting address is location 1002500 in memory. 
Each part of the exercise should use the results of previous parts where appropriate. */

    float numbers[SIZE_ONE]={0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9}; // 1-a) Define a float array called numbers with 10 elements, and initialize the elements to the values 0.0, 1.1, 2.2, …, 9.9. Assume the symbolic constant SIZE has been defined as 10.
    puts("1-a) in code");

    float *nPtr = &numbers[2];                                // 1-b) Define a pointer, nPtr, that points to a float. (points to the third value in the numbers array, 2.2)
    printf("1-b) in code, work check: %f \n", *nPtr);         //CHECK 

    printf("%s", "1-c) Array \"numbers\" contains the values: ");  // 1-c) Use a for statement and array subscript notation to print array numbers’ elements. Use one digit of precision to the right of the decimal point.
    for(int i=0; i<SIZE_ONE; i++) {
        printf("%.1f ", numbers[i]);
    }
    puts("");

    nPtr = &numbers[0];                                // 1-d) Give two separate statements that assign the starting address of array numbers to the pointer variable nPtr.  
    nPtr = numbers;                               
    puts("1-d) in code");

    printf("%s", "1-e) Array \"numbers\" using pointer/offset notation with the pointer nPtr: ");  // 1-e) Print numbers’ elements using pointer/offset notation with the pointer nPtr.
    for(int i=0; i<SIZE_ONE; i++) {
        printf("%.1f ", *nPtr + i);
    }
    puts("");
   
   printf("%s", "1-f) Array \"numbers\" using pointer/offset notation with the array name as the pointer: ");  // 1-f) Print numbers’ elements using pointer/offset notation with the array name as the pointer.
    for(int i=0; i<SIZE_ONE; i++) {
        printf("%.1f ", *(numbers + i));
    }
    puts("");
   
   printf("%s", "1-g) Array \"numbers\" by subscripting pointer nPtr: ");  // 1-g) Print numbers’ elements by subscripting pointer nPtr.
    for(int i=0; i<SIZE_ONE; i++) {
        printf("%.1f ", nPtr[i]);
    }
    puts("");

    puts("1-h) Element 4 (interepreted as the FIFTH element, array [4]), four ways:");  // 1-h) Refer to element 4 of numbers using
    printf("\tThe fourth element is %.1f\n", numbers[4]);         // array subscript notation,
    printf("\tThe fourth element is %.1f\n", *(numbers+4));       // pointer/offset notation with the array name as the pointer, 
    printf("\tThe fourth element is %.1f\n", nPtr[4]);    // pointer subscript notation with nPtr and 
    printf("\tThe fourth element is %.1f\n", *(nPtr+4));    // pointer/offset notation with nPtr.

// 1-i) Assuming that nPtr points to the beginning of array numbers, what address is referenced by nPtr + 8? What value is stored at that location?
    printf("1-i) The address referenced by nPtr + 8 is %p, and the value at that location is %.1f\n", *(nPtr+8), *(nPtr+8));         

// 1-j) Assuming that nPtr points to numbers[5], what address is referenced by nPtr –= 4? What’s the value stored at that location?
    printf("1-j) If nPtr was instead pointed to numbers[5], the address references by nPtr -= 4 would be numbers[1]. The address at that location is %p, and the value at that location is %.1f\n", numbers[1], numbers[1]);

// QUESTION 2
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 2");
puts("-----------------------------------------------------------------");
puts(" ");

/* For each of the following, write a statement that performs the specified task.
Assume that float variables number1 and number2 are defined and that number1 is initialized to 7.3 */
    float number1 = 7.3;
    float number2 = 0;

    float *fPtr;        // 2-a) Define the variable fPtr to be a pointer to an object of type float.
    fPtr = &number1;    // 2-b) Assign the address of variable number1 to pointer variable fPtr.
    printf("2-c) The value of fPtr is currently the same as number1, %f\n", *fPtr); // 2-c) Print the value of the object pointed to by fPtr.
    fPtr = &number2;    // 2-d) Assign the value of the object pointed to by fPtr to variable number2.
    printf("2-e) The value of fPtr is currently the same as number2, %f\n", *fPtr); // 2-e) Print the value of number2. 
    printf("2-f) The address of number1 is %p\n", &number1); // 2-f) Print the address of number1. Use the %p conversion specification.
    printf("     The address of number2 is %p\n", &number2); 
    printf("2-g) The address of fPtr is %p\n", fPtr); // 2-g) Print the address stored in fPtr. Use the %p conversion specifier. 
    puts("     The address stored in fPtr is NOT the same as the address of number1, but it IS the same as number2, which it was last set to.");
    puts("     However, the address OF the pointer fPtr is different.");

// QUESTION 3
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 3");
puts("-----------------------------------------------------------------");
puts(" ");

puts("Entirely in Comments");

/*
    3-a) Write the function header for a function exchange that takes two pointers to floating-point numbers x and y as parameters and does not return a value.

        void exchange(float xPtr, float yPtr) {
            // content of function here       
        }  
    
    3-b) Write the function prototype for the function in part (a).

        void exchange(float xPtr, float yPtr);

    3-c) Write the function header for a function evaluate that returns an integer and that takes as parameters integer x and 
        a pointer to function poly, which represents a function that takes an integer parameter and returns an integer. 

        int evaluate(int x, int (*polyPtr)(int y)) {
            // content of function here   
        }

    // 3-d) Write the function prototype for the function in part (c)

        int evaluate(int x, int (*polyPtr)(int y));
*/

// QUESTION 4
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 4");
puts("-----------------------------------------------------------------");
puts(" ");

    // Answer each of the following. Assume that integers are stored in four bytes and that the starting address of the array is at location 1002500 in memory.
    int values[SIZE_QFOUR] = {2, 4, 6, 8, 10};      // 4-a) Define a five-element int array values, and initialize the elements to the even integers from 2 to 10. Assume the symbolic constant SIZE is defined as 5.
    int *vPtr = values;                             // 4-b) Define a pointer vPtr that points to an object of type int.

    printf("%s","4-c) The elements of array \"values\" are: ");    // 4-c) Print the elements of array values using array subscript notation. 
    for (int i=0; i<SIZE_QFOUR; i++) {              // Use a for statement and assume integer control variable i has been defined. 
        printf("%d ", values[i]);
    }
    puts("");
    
    vPtr = &values[0];                               // 4-d) Give two separate statements that assign the starting address of array values to pointer variable vPtr.  
    vPtr = values;                               
    puts("4-d) in code");

    printf("%s","4-e) The elements of array \"values\" using pointer/offset notation are: ");
    for (int i=0; i<SIZE_QFOUR; i++) {               // 4-e) Print the elements of array values using pointer/offset notation.
        printf("%d ", *(vPtr + i));
    }
    puts("");

    printf("%s","4-f) The elements of array \"values\" using pointer/offset notation with the array name as the pointer: ");
    for (int i=0; i<SIZE_QFOUR; i++) {               // 4-f) Print the elements of array values using pointer/offset notation with the array name as the pointer.
        printf("%d ", *(values + i));
    }
    puts("");

    printf("%s","4-g) The elements of array \"values\" using pointer/offset notation with the array name as the pointer: ");
    for (int i=0; i<SIZE_QFOUR; i++) {               // 4-g) Print the elements of array values by subscripting the pointer to the array.
        printf("%d ", vPtr[i]);
    }
    puts("");

    puts("4-h) Refer to element 4 of values using:"); // 4-h) Refer to element 4 of values using (interpreted as values[4], NOT the fourth element)
    printf("   array subscript notation: %d\n", values[4]);                     // array subscript notation
    printf("   pointer/offset notation via the array name: %d\n", *(values+4)); // pointer/offset notation via the array name
    printf("   pointer subscript notation: %d\n", vPtr[4]);                     // pointer subscript notation
    printf("   pointer subscript notation: %d\n", *(vPtr+4));                     // pointer/offset notation.
    puts("");
    
    printf("4-i) The address referenced by vPtr + 3 is %p\n", (vPtr+3)); // 4-i) What address is referenced by vPtr + 3? 
        // The address shown is 00000000005FFE2C. 
    printf("     The value at that location is %d.\n", (vPtr+3), *(vPtr+3)); // What value is stored at that location?
        // The value is 8. 

    puts("4-j) Assuming vPtr points to values[4], the element referenced by vPtr -= 4 is values[0]. The value stored at this location is 2.");
    printf("The address of this element is %p.\n", &values[0]);

// QUESTION 5
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 5");
puts("-----------------------------------------------------------------");
puts(" ");

    /*  5 For each of the following, write a single statement that performs the indicated task. 
        Assume that long integer variables value1 and value2 have been defined and that value1 has been initialized to 200000.  */
    long int value1 = 200000;
    long int value2 = 0;

    long *lPtr;                                                         // 5-a) Define the variable lPtr to be a pointer to an object of type long.
    lPtr = &value1;                                                     // 5-b) Assign the address of variable value1 to pointer variable lPtr.
    printf("5_c) The object pointed to by lPtr is %ld.\n\n", *lPtr);    // 5-c) Print the value of the object pointed to by lPtr. 
    value2 = *lPtr;                                                     // 5-d) Assign the value of the object pointed to by lPtr to variable value2.
    printf("5-e) The value of value2 is %ld.\n\n", value2);             // 5-e) Print the value of value2. 
    printf("5-f) The address of value1 is %p.\n\n", &value1);           // 5-f) Print the address of value1.
    printf("5-g) The address stored in lPtr is %p.\n", lPtr);         // 5-g) Print the address stored in lPtr. Is the value the same as the address of value1?
    printf("     This is the same as the address of value 1, to which lPtr is pointing.\n     However, it's different from lPntr's address, which is %p.\n", &lPtr);  
    
// QUESTION 6
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 6");
puts("-----------------------------------------------------------------");
puts(" ");

puts("Entirely in Comments");

/*
    6-a) Write the function header for function zero, which takes a long integer array parameter bigIntegers and does not return a value.
        void zero(long int bigIntegers[]) {
            // content of function here   
        }
    
    6-b) Write the function prototype for the function in part (a).

        void zero(long int bigIntegers[]);

    6-c) Write the function header for function add1AndSum, which takes an integer array parameter oneTooSmall and returns an integer.

        int add1AndSum(int oneTooSmall[]) {
            // content of function here   
        }

    // 3-d) Write the function prototype for the function in part (c)

        int add1AndSum(int oneTooSmall[]);
*/

// QUESTION 7

puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 7");
puts("-----------------------------------------------------------------");
puts(" In the comments ");

/*
Find the error in each of the following program segments and correct the error. 

Assume:
*/
    int *zPtr; // zPtr will reference array z
    int *aPtr = NULL;
    void *sPtr = NULL; 
    int number;
    int z[5] = {1, 2, 3, 4, 5};
    sPtr = z;

    // 7-a) ++zptr;
        // The error is: the capitalization is wrong; also, the pointer has not been referenced to array z properly yet.
        // Corrected: zPtr = z;
                   // ++zPtr;

    zPtr = z;

    printf("%s","7-a) The array is: ");
    for (int i=0; i<5; i++) {
        printf("%d ", *zPtr);
        ++zPtr;                     // correct use of 7-a
    }    
    
    // 7-b) number = zPtr;     // use pointer to get array
        // The error is: If we're trying to assign the first array element to "number", we need to dereference zPtr using the * operator. 
        // Corrected: number = *zPtr;
        
    zPtr = z;      // resetting zPtr
    number = *zPtr;                 // correct use of 7-b
    printf("\n7-b) number is: %d\n", number);    
    
    // 7-c) number = *zPtr[2];     // assign array element 2 to number, assuming zPtr is initialized
        // The error is: when using a pointer at an array, using subscript notation assumes dereferencing.  It points to a specific value.  Dereferencing is not necessary and will cause an error because the value is being read as an integer type, not a pointer type. 
        // Corrected: number = zPtr[2];

    number = zPtr[2];                 // correct use of 7-c
    printf("7-c) number is now: %d\n", number);   
    
    // 7-d) for (size_t i = 0; i <= 5; ++i) { // print entire array z, assuming zPtr is initialized
    //            printf("%d ", zPtr[i]);
    //        }
        // The error is: the array only goes up to element 4 (0-4, not 1-5), so this loop references an element beyond the bounds of the array.
        // Corrected: see below: (change i <= 5 to i < 5)

    printf("%s","7-d) The array is: ");
    for (size_t i = 0; i < 5; i++) {
        printf("%d ", zPtr[i]);      // correct use of 7-d
    }   
    
    // 7-e) number = *sPtr; // assign the value pointed to by sPtr to number
        // The error is: sPtr is defined as a void pointer, so cannot be dereferenced.  
        // Corrected: see below (initialize sPtr differently:)
    int *sPtr2 = z;           // reinitialize the variable correctly
    number = *sPtr2;          // correct use of 7-e
    printf("\n7-e) number is now: %d\n", number);  
    
    // 7-f) ++z;   
        // The error is: "z" is an array.  This type of operation only works on a pointer, as increasing its value moves it from one address location to another.  An array name always refers to the first element in the array.  Instead, we can increment a pointer that points to the array. 
        // Corrected: 
    printf("7-f) zPtr was %d, ", *zPtr);
    ++zPtr;                 // correct use of 7-c
    printf("but is now %d.\n", *zPtr);

}  