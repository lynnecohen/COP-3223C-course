/* 
COP 3223 Spring 2024 Practice 7.2
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() 
{
   
/*

Please perform below 4 steps to solve the task:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program

Task: The following grid is a two-dimensional array representation of a maze. 
The # symbols represent the maze’s walls, and the periods (.) represent squares 
in the possible paths through the maze. 

The Wikipedia page https://en.wikipedia.org/wiki/Maze_solving_algorithm lists several algorithms for finding a maze’s exit. 
    A simple algorithm for walking through a maze guarantees finding the exit (assuming there’s an exit). 
    Place your right hand on the wall to your right, and begin walking forward. Never remove your hand from the wall. 
    If the maze turns to the right, you follow the wall to the right. As long as you do not remove your hand from the wall, 
    eventually you’ll arrive at the maze’s exit. If there’s not an exit, you’ll eventually arrive back at the starting location. 
    There may be a shorter path than the one you’ve taken, but you’re guaranteed to get out of the maze. 
Write recursive function mazeTraverse to walk through the maze. 
    The function should receive as arguments a 12-by-12 character array representing the maze and the maze’s starting location. 
    As mazeTraverse attempts to locate the exit from the maze, it should place the character X in each square in the path. 
    The function should display the maze after each move so the user can watch as the maze is solved.
Write a function mazeGenerator that takes as an argument a two-dimensional 12-by-12 character array and randomly produces a maze. 
    The function should also provide the starting and ending locations of the maze. 
    Try your function mazeTraverse using several randomly generated mazes.

*/

/* 
pseudocode for 7.20

- create the maze:
   - define 12x12 array
   - explicitly define each box of the array with the pattern: 
# # # # # # # # # # # # 0
# . . . # . . . . . . # 1
. . # . # . # # # # . # 2
# # # . # . . . . # . # 3
# . . . . # # # . # . . 4
# # # # . # . # . # . # 5
# . . # . # . # . # . # 6
# # . # . # . # . # . # 7
# . . . . . . . . # . # 8
# # # # # # . # # # . # 9
# . . . . . . # . . . # 0
# # # # # # # # # # # # 1
0 1 2 3 4 5 6 7 8 9 0 11
   - begin at the start (
/*
              //array(row, col)
   char maze(2,2) = {{"!", "@"}, {"#", "$"}};
puts("Values in array \"maze\" by row are:");
printArray(maze);
}  

char array 
