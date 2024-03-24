/* 
COP 3223 Spring 2024 Assignment 2.3
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int search_seat(int seatType);         //prototype for function search_seat

int main() 
{
    int seat[7] = {0};  // define array with 7 values. (seat[0] is a trash value)  
                        // seat[1]-seat[3] are first class, seat[4]-seat[6] are economy.
    int seatType = 0; // define variable to store seat type (first class = 1 or economy = 2)
    int seat_assignment = 0; // define variable for assigned seat
    int boardingComplete = 0; // define boarding as still open
    int seatFirstClass = 3;   // define a variable for the number of First Class Seats available
    int seatEconomy = 3;   // define a variable for the number of Economy Seats available
    int seatRandom2 = 0;    // initiate a variable to accept from the random Number Generator
    puts("");
    puts("----------------------------------------------------------------------------------------");
    puts("");
    printf("%s\n","Welcome to our Booking System. We are currently assigning seat as passengers board.");
    printf("%s\n","All seats are currently available.");
    puts("");
    puts("----------------------------------------------------------------------------------------");
    puts("");
    while (boardingComplete == 0) {   // while boarding is still open, continue loop

        printf("%d seats remain in first class and %d seats remain in economy.\n", seatFirstClass, seatEconomy);
        printf("Please type 1 for \"first class\" or type 2 for \"economy\": ");
        scanf("%d", &seatType);                // Accept preference as "seatType"
            
        if ((seatType == 1 && seatFirstClass == 0) || (seatType == 2 && seatEconomy == 0) || (seatType == 0)) {        // decline if area is full       
            puts("Unfortunately, we cannot accomodate you on this flight. The Next flight leaves in 3 hours.\n");
        } else {                            // If seats remain in the area
            do {
                // puts("searching for your seat...");   FOR DEBUGGING PURPOSES
                seatRandom2 = (search_seat(seatType));      //select a random seat of the correct type
                if (seat[seatRandom2] == 0) {                      // if the seat is not taken,
                    seat_assignment = seatRandom2;                // Assign the seat
                    seat[seatRandom2] = 1;                               // Mark it taken
                    // puts("found one!");      FOR DEBUGGING PURPOSES
                    if (seatType == 1) {                                // if it was first class, 
                        seatFirstClass--;                               // reduce the number of available First Class Seats    
                    } else {
                        seatEconomy--;                                  // reduce the number of available Economy Seats
                    } 
                        
                } else { 
                    
                }                                                 
            } while ( seat_assignment==0 );       // if no seat is assigned, repeat the loop

            if (seat_assignment < 0) {                      // if function returned -1, error.
                puts("I'm sorry, something went wrong, we could not assign your seat.");
            } else {                                        // otherwise, a seat was assigned.
            printf("%s","Your assigned seat is ");       // print the boarding pass. 
                if(seat_assignment < 4) {
                    printf("%s","first class ");
                } else {
                    printf("%s","economy ");
                }
                printf(" seat %d.\n\n", seat_assignment);
            }

            seat_assignment = 0; //reset seat assignment variable for next user
                
            }

            //break;

        //}       
                
            printf("Have all passengers boarded? (1 for yes, 0 for no): ");
            scanf("%d", &boardingComplete);
            puts("");
            puts("");
    } 

        printf("%s","Thank you, Boarding is complete."); // when boarding is closed
}

int search_seat(int seatType) {    //definition for function search_seat

    int seatRandom = 0;                  // initiate a variable for the random Number Generator
    srand(time(NULL));                  // seed the random number generator
    seatRandom = (rand() % 3);          // assign a random number (0, 1, or 2)
    if (seatType == 2) {                  // if it's an economy seat, add 4 to the random number (0->4, 1->5, 2->6) 
        seatRandom += 4; 
    } else {
        seatRandom += 1;            // otherwise it's a first-class seat, add 1 to the random number (0->1, 1->2, 2->3)
    }
    return seatRandom;

    }

