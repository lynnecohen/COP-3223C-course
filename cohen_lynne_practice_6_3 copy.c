/* 
COP 3223 Spring 2024 Practice 6.3
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
    The Logo language made the concept of turtle graphics famous. 
    Imagine a mechanical turtle that walks around the room under the control of a C program. 
    The turtle holds a pen in one of two positions, up or down. 
    While the pen is down, the turtle traces out shapes as it moves; 
    while the pen is up, the turtle moves about freely without writing anything. 
    In this problem, you’ll simulate the operation of the turtle and create a 
    computerized sketchpad as well. 
    Use a 50-by-50 array floor that’s initialized to zeros. 
    Read commands from an array that contains them. 
    Keep track of the current turtle position at all times and 
    whether the pen is currently up or down. 
    Assume that the turtle always starts at position 0, 0 of the floor with its pen up. 
    The set of turtle commands your program must process are shown in the following table:
    
    As the turtle moves with the pen down, set elements of array floor to 1s. 
    When the 6 command is given, display an asterisk for each 1 in the array. 
    For each zero, display a blank. Write a program to implement the turtle-graphics 
    capabilities discussed here. Write several turtle graphics programs to draw interesting shapes. 
    Add other commands to increase the power of your turtle-graphics language
    */   

   int etchasketch[SIZE][SIZE] = {0};  // define 50 x 50 array, initialize all to 0. 
   int turtle_x = 0; // initialize turtle's position on x-axis
   int turtle_y = 0; // initialize turtle's position on y-axis
   int turtle_pen = 0; // initialize turtle's pen. 0 is up (inactive), 1 is down (active). 
    etchasketch[turtle_y][turtle_x] = 2; // start turtle


    for(int input=0; input != 8;) {
        // START DRAW BOARD
            for(int y = 0; y < SIZE; y++) {
                printf("%s","|"); // borders
                    for(int x = 0; x < SIZE; x++) {
                        if(etchasketch[y][x] == 1) {        // if drawn on
                            printf("%s", " *");
                        } else if(etchasketch[y][x] == 2) { // if turtle is present
                            printf("%s", "#");
                            if(turtle_pen==0) {
                            printf("%s", "_"); 
                            } else { 
                                printf("%s", "*"); 
                            }
                        } else {                            // if not drawn on
                            printf("%s", "  ");
                        }
                    }
                printf("%s","|"); // borders
                puts("");
            }
        // END DRAW BOARD
        printf("The turtle is currently at (%d,%d). Commands: 1 for up, 2 for down, 3 for left, 4 for right, 5 for pen up/down, 8 to end: ", turtle_x, turtle_y);
        while (scanf("%d", &input) != 8) {
            puts("");

            // CLEAR TURTLE and leave blank or asterisk - if the turtle doesn't move, it will reassert itself in the same position and overwrite this.        
            if(turtle_pen == 1) { // if pen is active
                    etchasketch[turtle_y][turtle_x] = 1; // draw on old turtle position 
                } else {            // otherwise 
                    etchasketch[turtle_y][turtle_x] = 0; // clear old turtle position
                }

            switch (input) {
                case 1:
                    if(turtle_y == 0) { // can't go past 0
                        puts("I can't go up any further, I'm at the edge!"); // turtle position will reassert itself in same placee
                    } else {
                        turtle_y --; // change in position
                        puts("going up!");
                    }
                    break;
                case 2:
                    if(turtle_y == SIZE) { // can't go past max
                        puts("I can't go down any further, I'm at the edge!");
                    } else { 
                        turtle_y ++; // change in position
                        puts("going down!");
                        }
                    break;
                case 3:
                    if(turtle_x == 0) { // can't go past 0
                        puts("I can't go left any further, I'm at the edge!");
                    } else { 
                        turtle_x --; // change in position
                        puts("going left!");
                        }
                    break;
                case 4:
                    if(turtle_x == SIZE) { // can't go past max
                        puts("I can't go right any further, I'm at the edge!");
                    } else { 
                        turtle_x ++; // change in position
                        puts("going right!");
                        }
                    break;
                case 5:
                    if(turtle_pen == 0) { // if pen is inactive
                        turtle_pen = 1; // activate it
                        puts("turtle pen now active!");
                    } else {  // otherwise (if it's active)
                        turtle_pen = 0; // inactivate it
                        puts("turtle pen inactive!");
                        }
                    break;
                default:
                    puts("Thanks for playing!");
                    break;
            }
            break;
        }
        etchasketch[turtle_y][turtle_x] = 2; // new turtle position
        puts("");
    }
}
