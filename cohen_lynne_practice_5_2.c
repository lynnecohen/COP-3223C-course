/* 
COP 3223 Spring 2024 Practice 5.2
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>

/*
Please perform below 4 steps to solve the task:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program

Task: An integer number is said to be a perfect number if its factors, including 1 (but not the number itself), sum to the number. 
For example, 6 is a perfect number because 6 = 1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a perfect number. 
Use this function in a program that determines and prints all the perfect numbers between 1 and 1000. Print the factors of each perfect number to 
confirm that the number is indeed perfect.

*/   

int isPerfect(int num);         //prototype for function isPerfect

int main() 
{
    for (int x = 1; x <= 1000; x++) {               
        //printf("%d is... %d\n",x,isPerfect(x)); TEST FOR DEBUGGING
            if (isPerfect(x) != 0) {                //if isPerfect returns true (1, not 0)
                printf("%d is perfect (1 ",x);      //start printing line
                for (int f = 2; f < x; ++f) {       // show all factors, by testing for each (skipping 1 for formatting reasons, included above)
                    if (x % f == 0) {
                        printf("+ %d ",f);          // show the added factors (to visually verify)
                    }
                }
                printf("= %d)\n",x);                // finish the line
            } 
        }
}

int isPerfect(int num) {            //definition for function isPerfect
    int numberSum = 0;              //establishes sum variable
    for (int i = 1; i < num; i++) { //for all possible factors...
        if (num % i == 0) {         //determine if it's a real factor. If so,
            numberSum += i;         //add it to the sum variable.
        }
    }
    if(num == numberSum) {          //if the sum equals the number itself, return 1 for true, otherwise 0 for false. 
        return 1;
    } else {
        return 0;
    }
}