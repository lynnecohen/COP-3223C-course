/* 
COP 3223 Spring 2024 Practice 5.1
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <math.h>

int main() 
{
   
// QUESTION 1

/*
1. Give the function header for each of the following functions:
a) Function hypotenuse that takes two double arguments, side1 and side2, and returns a double result.
    double hypotenuse(double side1, double side2) {
    }

b) Function smallest that takes three integers, x, y, z, and returns an integer.
    int smallest(int x, int y, int z) {
    }

c) Function instructions that does not receive any arguments and does not return a value.
    void instructions() {
    }

d) Function intToFloat that takes an integer argument, number, and returns a float.
    float intToFloat(int num) {
    }
*/

// QUESTION 2

/*
2 Give the function prototype for each of the following:
a) The function described in Exercise 1(a).
    double hypotenuse(double side1, double side2);

b) The function described in Exercise 1(b).
    int smallest(int x, int y, int z);

c) The function described in Exercise 1(c).
    void instructions();

d) The function described in Exercise 1(d).
    float intToFloat(int num);
*/

// QUESTION 3

/*
3 Write a declaration for floating-point variable lastValue that’s to retain its value between calls to the function in which it’s defined.

    static float lastValue;

*/

// QUESTION 4

/*
4) Find the error in each of the following program segments and fix the error:

a)  ORIGINAL:
        int g(void) {
            printf("%s", Inside function g\n");
            int h(void) {
                printf("%s", Inside function h\n");
            }
        }
    PROBLEM:  
        you can't define one function inside another.  
    FIX: 
        int g(void) {
            printf("%s", Inside function g\n");
        }
        int h(void) {
            printf("%s", Inside function h\n");   <---- are these valid if they have int and don't return an int? 
        }

b)  ORIGINAL:
        int sum (int x, int y) {
            int result = x + y;
        }
    PROBLEM: 
        does not return anything, and is supposed to return an integer. 
    FIX:
        int sum (int x, int y) {
            return x + y;
        }

c)  ORIGINAL:
        void f(float a); {
            float a;
            printf("%f", a);
        }
    PROBLEM: 
        there shouldn't be a semicolon before the open bracket. Also, there's no need to define a, as it was defined in the function header.
    FIX:
        void f(float a) {
            printf("%f", a);
        }

d)  ORIGINAL:
        int sum(int n) {
            if (0 == n) {
                return 0;
            } else {
                n + sum(n - 1);
            }
        }
    PROBLEM: 
        the "if" case returns an integer, but the "else" case does not.
    FIX:
        int sum(int n) {
            if (0 == n) {
                return 0;
            } else {
                return (n + sum(n - 1));
            }
        }

e)  ORIGINAL:
        void product(void) {
            printf("%s", "Enter three integers: ")
            int a;
            int b;
            int c;
            scanf("%d%d%d", &a, &b, &c);
            int result = a * b * c;
            printf("Result is %d", result);
            return result;
        }
    PROBLEM: 
        1) the first printf is missing a semicolon
        2) void means no result should return, but it returns an int.  it should either return nothing, or be changed to only do the multiplication:
            3) the variables a, b, and c should be defined in the function parameters. 
            4) the user should be asked to enter the integers before the function is called.
    FIX:
        int product(int a, int b, int c);

        printf("%s", "Enter three integers: ");
            int a;
            int b;
            int c;
        scanf("%d%d%d", &a, &b, &c);
        printf("Result is %d", product(a, b, c));

        int product(int a, int b, int c) {
            return (a * b * c);
        }

*/   

}  