/* 
COP 3223 Spring 2024 Practice 5.3
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>

/*
Let’s assume that the priests are attempting to move the disks from peg 1 to peg 3. 
We wish to develop an algorithm that will print the precise sequence of disk-to-disk peg transfers.
...if we attack the problem with recursion in mind, it immediately becomes tractable. 
Moving n disks can be viewed in terms of moving only n – 1 disks (and hence the recursion) as follows:
    a) Move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.
    b) Move the last disk (the largest) from peg 1 to peg 3.
    c) Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area.
The process ends when the last task involves moving n = 1 disk, i.e., the base case. This is accomplished by trivially moving the disk without the need for a temporary holding area. 
Write a program to solve the Towers of Hanoi problem. Use a recursive function with four parameters:
a) The number of disks to be moved.
b) The peg on which these disks are initially threaded.
c) The peg to which this stack of disks is to be moved.
d) The peg to be used as a temporary holding area.
Your program should print the precise instructions it will take to move the disks from the starting peg to the destination peg. For example, to move a stack of three disks from peg 1 to peg 3, your program should print the following series of moves:
1 → 3 (This means move one disk from peg 1 to peg 3.)
1 → 2
3 → 2
1 → 3
2 → 1
2 → 3
1 → 3

*/   

int hanoiStep(int numDisk, int pegOrig, int pegDest, int pegHold);         //prototype for function

int main() 
{
   puts("Lets start:");
   hanoiStep(3, 1, 3, 2);
   puts("Solved!");
}

int hanoiStep(int numDisk, int pegOrig, int pegDest, int pegHold) {                     //definition for function
    if (numDisk == 1) {                                                                 // if smallest disk,
        printf("Move Disc %d from peg %d to peg %d \n", numDisk, pegOrig, pegDest);         // move it directly to its destination
    } else {                                                                            // if NOT smallest disk,
        hanoiStep(numDisk - 1, pegOrig, pegHold, pegDest);                                  // move the smaller disk from on top to the holding spot
        printf("Move Disc %d from peg %d to peg %d \n", numDisk, pegOrig, pegDest);         // move the current disk to its destination
        hanoiStep(numDisk - 1, pegHold, pegDest, pegOrig);                                  // move the smaller disk from the holding spot to on top of the current disk
    }
}