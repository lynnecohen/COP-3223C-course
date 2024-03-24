/* 
COP 3223 Spring 2024 Assignment 2.1
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() 
{
    int difficulty = 0; // initialize the difficulty variable
    int guess = 0; // initialize the guess variable
    int myNum = 0; // initialize the myNum variable
    int topvalue = 0; // initialize the topValue for the games

    puts("Let's play 'Guess the Number'!");
    do {   
        printf("Pick a difficulty level of 1, 2, or 3. (0 to exit): ");
        
        while(scanf("%d",&difficulty) != 0) { 
            switch (difficulty) { 
                case 0: 
                    break;
                case 1: 
                    topvalue = 10;
                    break;
                case 2: 
                    topvalue = 100;
                    break;
                case 3: 
                    topvalue = 1000;
                    break;
                default: 
                    puts("Whoops, that wasn't an option!");  //Invalid Entry
                    break;
            }
            
            if (difficulty == 0) {    // if they entered difficulty of 0
                puts("Goodbye.");
                break;
            } else if (difficulty == 1 || difficulty == 2 || difficulty == 3) {
                puts("");
                printf("I'm thinking of a number between 1 and %d, inclusive.\n", topvalue);
                srand(time(NULL)); // seed the random number generator
                myNum = 1 + (rand() % topvalue);        // assign a random number
                printf("FOR TESTING PURPOSES: My number is %d.\n", myNum); // For testing only
                printf("%s","What's your first guess?: ");
                for(int tries = 8; tries > 0; --tries) {
                    scanf("%d",&guess);
                    
                    if (guess == myNum) {
                        printf("That's it!  You got it in %d guess(es)! \n", 9-tries);
                        break;
                    } else if (guess > myNum) {
                        printf("%s","Too high. ");
                    }  else if (guess < myNum) {
                        printf("%s","Too low. ");
                    } else {
                        printf("%s","Invalid guess. ");
                    }

                    if (tries > 1) { 
                        printf("Guess again (%d guess(es) left): ", tries-1);
                    } else {
                        printf("%s","Better luck next time. \n");
                    }
                }
                puts("Let's play again!\n");
                break;
            } else { break; }
        }
    } while (difficulty > 0);

}