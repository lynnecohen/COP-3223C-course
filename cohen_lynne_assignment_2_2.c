/* 
COP 3223 Spring 2024 Assignment 2.2
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int gcd(int x, int y);         //prototype for function gcd

int main() 
{
    int x = 0; // declare first variable x
    int y = 0; // declare first variable y

    printf("%s","Please input the first number: ");     // user input of x
    scanf("%d", &x);
    printf("%s","Please input the second number: ");     // user input of y
    scanf("%d", &y);
    printf("The common divisor for %d and %d is %d.", x, y, gcd(x,y));     // calling gcd function & returning answer to user
}

int gcd(int x, int y) {            //definition for function gcd
    if (y == 0) {                  
        return x;                  // per instructions, if y is 0, return x. 
    } else {
        gcd (y, x % y);            // per instructions, otherwise swap places and find modulus of x % y
    }
}