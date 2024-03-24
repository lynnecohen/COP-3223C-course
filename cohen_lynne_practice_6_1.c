/* 
COP 3223 Spring 2024 Practice 6.1
Copyright 2024 Cohen Lynne
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE_ONE 10 // maximum size of array for Question 1
#define SIZE_TWO 3 // maximum size of array for Question 2

int main() 
{
   
// QUESTION 1
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 1");
puts("-----------------------------------------------------------------");
puts(" ");
                                                      // a) Define a symbolic constant SIZE with the replacement text 10. - SEE ABOVE IN HEADER
double fractions[SIZE_ONE] = {0};                     // b) Define a double array (called 'fractions') with SIZE elements and initialize the elements to 0. 
printf("Array element 4 is %.2f\n", fractions[4]);    // c) Refer to array element 4.  <-- I'm interpreting this as fractions[4], not the fourth element fractions [3]
fractions[9]=1.667;                                   // d) Assign the value 1.667 to array element nine.
fractions[6]=3.333;                                   // e) Assign the value 3.333 to the seventh element of the array.
printf("Array element 6 is %.2f\n", fractions[6]);     
printf("Array element 9 is %.2f\n", fractions[9]);    //f) Print array elements 6 and 9 with two digits of precision to the right of the decimal point, and show the output that’s displayed on the screen.
                                                      //   Output should be "Array element 6 is 3.33" and "Array element 9 is 1.67"
puts(" ");
                                                //g) Print all the elements of an array using a for iteration statement. Use the variable x as the loop’s control variable. Show the output.
printf("%10s %10s \n", "Element", "Value");           // Print headers, use field length to create columns
puts("----------------------------");
for (size_t x = 0; x < SIZE_ONE; x++) {               // for iteration statement as requested
    printf("%7zu %13.3f \n", x, fractions[x]);        // print each Element number & Value
}                                                     //   Output should be a table of values:

/* 
   Element      Value
----------------------------
      0         0.000
      1         0.000
      2         0.000
      3         0.000
      4         0.000
      5         0.000
      6         3.333
      7         0.000
      8         0.000
      9         1.667
*/
puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 2");
puts("-----------------------------------------------------------------");
puts(" ");

int tabletwo[SIZE_TWO][SIZE_TWO] = {0};    // a) Define table to be an integer array and to have 3 rows and 3 columns. Assume the symbolic constant SIZE has been defined to be 3.
puts("Array tabletwo contains 3 rows and 3 columns, resulting in nine total elements.");   // b) How many elements does the array table contain? 
puts("");
puts("-------------------------------------------");
printf("%35s\n", "TABLE TWO (Initial Values)");
puts("-------------------------------------------");
printf("%10s%10s%10s%10s\n", " ", "Col 0", "Col 1", "Col 2");      //Print the total number of elements.
for (int x = 0; x < 3; x++) {
    printf("%5s %d", "Row", x);
    for (int y = 0; y < 3; y++) {
        printf("%10d", tabletwo[x][y]);
    }
     printf("%s", " \n");
}        
puts("");

for (int x = 0; x < 3; x++) {                //c) Use a for iteration statement to initialize each element of table to the sum of its subscripts. Use variables x and y as control variables.
    for (int y = 0; y < 3; y++) {
        tabletwo[x][y] = x + y; 
        printf("Element %d.%d has value %d.\n",x,y,tabletwo[x][y]);
    }
}                                                             

puts("");                                                 //d) Print the values of each element of array table... (version 1, see version 2 below, I was confused)
puts("-------------------------------------------");
printf("%35s\n", "TABLE TWO (Summed Values)");
puts("-------------------------------------------");
printf("%10s%10s%10s%10s\n", " ", "Col 0", "Col 1", "Col 2"); 
for (int x = 0; x < 3; x++) {
    printf("%5s %d", "Row", x);
    for (int y = 0; y < 3; y++) {
        printf("%10d", tabletwo[x][y]);
    }
     printf("%s", " \n");
}    

//d) VERSION 2 - Print the values of each element of array table. Assume the array was initialized with the definition:  int table[SIZE][SIZE] = {{1, 8}, {2, 4, 6}, {5}};
int tabletwo_b[SIZE_TWO][SIZE_TWO] = {{1, 8}, {2, 4, 6}, {5}}; // tabletwo_b[0][2] (last col of the first row) will be 0, as well as tabletwo_b[2][1] & tabletwo_b[2][2] (last two cols of the third row).
puts("");                                                 //d) Print the values of each element of array table... (version 1, see version 2 below, I was confused)
puts("-------------------------------------------");
printf("%35s\n", "TABLE TWO-B (Alternate Initialization)");
puts("-------------------------------------------");
printf("%10s%10s%10s%10s\n", " ", "Col 0", "Col 1", "Col 2"); 
for (int x = 0; x < 3; x++) {
    printf("%5s %d", "Row", x);
    for (int y = 0; y < 3; y++) {
        printf("%10d", tabletwo_b[x][y]);
    }
     printf("%s", " \n");
}   


// QUESTION 3

puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 3");
puts("-----------------------------------------------------------------");
puts(" ");

//Write statements to accomplish each of the following:
//a) Display the value of the seventh element of character array f.
puts("3-a");
char f[] = "rainbow";
printf("The seventh element in the character array 'f' is: %c",f[6]); // using %c for character instead of %s for string
puts(" ");

//b) Input a value into element 4 of one-dimensional floating-point array b.
puts("3-b");
float b[10] = {0};
b[4] = 5.434;
printf("Element 4 in array b is: %f", b[4]);
puts(" ");

//c) Initialize each of the five elements of one-dimensional integer array g to 8. 
puts("3-c");
int g[5] = {8, 8, 8, 8, 8};
puts("Elements for array g are: ");
printf("g[0] is %d \n", g[0]);
printf("g[1] is %d \n", g[1]);
printf("g[2] is %d \n", g[2]);
printf("g[3] is %d \n", g[3]);
printf("g[4] is %d \n", g[4]);
puts(" ");

//d) Total the elements of floating-point 100-element array c.
puts("3-d");
float c[100] = {0}; // establish array c
float c_starting = 1.001; // establish starting value for the for loop below

for (int c_element = 0; c_element < 100; c_element++) { // use a for loop to populate the array; I chose to start with 1.001 and add 1.001 each time. 
    c[c_element] = c_starting;
    printf("c[%d] is equal to %f\n", c_element, c_starting );
    c_starting += 1.001;
}

float c_sum = 0; //initialize sum variable

for (int c_element = 0; c_element < 100; c_element++) { // use a for loop to sum the array
    c_sum += c[c_element];
}
printf("The sum of all elements of the array c is: %f", c_sum);
puts(" ");

//e) Copy array a into the first portion of array b. Assume a has 11 elements, b has 34 elements, and both arrays have the same element type.
puts("3-e");
int a2[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int b2[34] = {0};      // had to use a2 and b2 so as not to conflict with earlier vars

puts("Check first 11 of b before execution:");
for (int elem = 0; elem < 11; elem++) {
    printf("b[%d] is %d\n", elem, b2[elem]);
}

puts(" ");
puts("And now the magic happens...");
puts(" ");

for (int elem = 0; elem < 11; elem++) {
    b2[elem] = a2[elem];
}
puts("Check first 11 of b after execution:");
for (int elem = 0; elem < 11; elem++) {
    printf("b[%d] is %d\n", elem, b2[elem]);
}
puts(" ");

//f) Determine and print the smallest and largest values contained in 99-element floating-point array w.

puts("3-f");
puts("First we create the array 'w'");
float w[99] = {0};    // declare array "w"

puts("Then we populate it with random values;");
for (int w_element = 0; w_element < 99; w_element++) {     //Assign random values to w elements
    w[w_element] = 1 + (rand() % 100);                     // assign each a semi-random number from 1 to 100
    printf("w[%d] = %f\n", w_element, w[w_element]);       // Visual check
}
puts("Now we can find the largest and smallest values in the array.");
puts(" ");

float w_largest = 0;           // define the "largest" variable as the smallest possible value
for (int w_element = 0; w_element < 99; w_element++) {    // Check each element of w
    if (w[w_element] > w_largest) {                    // If it's larger than w_largest,
        w_largest = w[w_element];                      // assign the larger number to the variable
    }                                                  // else do nothing (implicit)
}
printf("The Largest value is: %f\n\n", w_largest);     // Visual check

float w_smallest = 100;           // define the "smallest" variable as the largest possible value
for (int w_element = 0; w_element < 99; w_element++) {    // Check each element of w
    if (w[w_element] < w_smallest) {                    // If it's smaller than w_smallest,
        w_smallest = w[w_element];                      // assign the larger number to the variable
    }                                                  // else do nothing (implicit)
}
printf("The Smallest value is: %f\n\n", w_smallest);     // Visual check
puts(" ");


// QUESTION 4

puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 4");
puts("-----------------------------------------------------------------");
puts(" ");

// Consider a 2-by-5 integer array t.

int t[2][5] = {0};               // a) Write a definition for t.
puts("Array 't' has 2 rows");     // b) How many rows does t have?
puts("Array 't' has 5 columns");     // c) How many columns does t have?
puts("Array 't' has 10 elements");     // d) How many elements does t have?
puts("In the second row of t, the elements are:");     // e) Write the names of all the elements in the second row of t.
puts("t[1][0], t[1][1], t[1][2], t[1][3], and t[1][4].");
puts("In the third column of t, the elements are:");     // f) Write the names of all the elements in the third column of t.
puts("t[2][0] and t[2][1].");
t[0][1] = 0;                    // g) Write a single statement that sets the element of t in row 1 and column 2 to 0.

                               // h) Write a series of statements that initialize each element of t to zero. Do not use an iteration statement.
puts("You can set the entire array to 0 the way I did when I initially defined the array. However I suppose you could also write each individually.  However I'm not sure what this tells you about my knowledge that the above questions did not - or am I misunderstanding the question?");        
t[0][0] = 0;                     
t[0][1] = 0;                       
t[0][2] = 0;
t[0][3] = 0;
t[0][4] = 0;
t[1][0] = 0;                     
t[1][1] = 0;                       
t[1][2] = 0;
t[1][3] = 0;
t[1][4] = 0;

for (int row = 0; row < 2; row++) {        // i) Write a nested for statement that initializes each element of t to zero.
    for (int col = 0; col < 5; col++) {
        t[row][col] = 0;
    }
}        

for (int row = 0; row < 2; row++) {        // j) Write a statement that inputs the values for the elements of t from the terminal.
    for (int col = 0; col < 5; col++) {
        printf("Please enter the value for t[%d][%d]: ", row, col);
        scanf("%d",&t[row][col]);
    }
} 

// VISUAL CHECK
puts("");
puts("-------------------------------------------");
printf("%35s\n", "FULL TABLE OF ARRAY 'T', from terminal");
puts("-------------------------------------------");
printf("%10s%10s%10s%10s%10s%10s\n", " ", "Col 0", "Col 1", "Col 2", "Col 3", "Col 4");    
for (int row = 0; row < 2; row++) {
    printf("%5s %d", "Row", row);
    for (int col = 0; col < 5; col++) {
        printf("%10d", t[row][col]);
    }
     printf("%s", " \n");
}     
//END OF VISUAL CHECK

// k) Write a series of statements that determine and print the smallest value in array t.
int t_smallest = 100;           // define the "smallest" variable as the largest possible value

for (int row = 0; row < 2; row++) {        // Check each element of t against t_smallest, if it's smaller, redefine. 
    for (int col = 0; col < 5; col++) {
        if (t[row][col] < t_smallest) {
            t_smallest = t[row][col];
        }
    }
}    
printf("The Smallest value is: %d\n\n", t_smallest);     // Visual check for part k
puts("");

for (int row = 0; row < 1; row++) {        // l) Write a statement that displays the elements of the first row of t.
        printf("%s","The first row of t is:");
    for (int col = 0; col < 5; col++) {
        printf("%d ",t[row][col]);
    }
}   
puts("");
 
printf("The sum of the fourth colum is %d",t[0][3]+t[1][3]); // m) Write a statement that totals the elements of the fourth column of t.

//n) Write a series of statements that print the array t in tabular format. List the column subscripts as headings across the top and list the row subscripts at the left of each row. 

puts("");
puts("-------------------------------------------");
printf("%35s\n", "FULL TABLE OF ARRAY 'T' for question 4-n");
puts("-------------------------------------------");
printf("%10s%10s%10s%10s%10s%10s\n", " ", "Col 0", "Col 1", "Col 2", "Col 3", "Col 4");     
for (int row = 0; row < 2; row++) {
    printf("%5s %d", "Row", row);
    for (int col = 0; col < 5; col++) {
        printf("%10d", t[row][col]);
    }
     printf("%s", " \n");
}     


// QUESTION 5

puts(" ");
puts("-----------------------------------------------------------------");
puts("QUESTION 5");
puts("-----------------------------------------------------------------");
puts(" In the comments ");

/*
Find the error in each of the following program segments and correct the error.

5-a) #define SIZE 100; 

answer: there should be no semicolon at the end of that statment.  It's a symbolic constant and is outside any functions; it's not a statement or a variable. It should be simply - 

    Corrected: 
    #define SIZE 100
        and should be placed before int main().

5-b) SIZE = 10; 

answer: this is treating SIZE as if it's a variable, which it is not.  If you are using SIZE as a symbolic constant, it should be simply - 

    Corrected: 
    #define SIZE 10
        and should be placed before int main().

5-c) int b[10] = {0}; // this is okay, it defines an integer array with 10 elements, all set to 0. 
   int i; // unnecessary - i is defined within "for" below and is not needed outside the "for" loop.
   for (size_t i = 0; t <= 10; ++i) { //size_t isn't really necessary here, we're not storing values of array elements, we're just increasing ints.  Also, this should be t < 10, as ten elements means we'll have b[0] through b[9].
       b[i] = 1; // this is okay, but it will set all the elements to 1. 
   }

    Corrected: 
       int b[10] = {0}; 
       for (int i = 0; i < 10; ++i) { 
           b[i] = 1; 
        }

5-d) #include <stdio.h>; 

answer: includes should not end in semicolons. 

    Corrected: 
    #include <stdio.h>
    
5-e) 
int a[2][2] = {{1, 2},{3, 4}}; // this is fine
a[1, 1] = 5; // this is incorrectly formatted. 

    Corrected (second line only): 
    a[1][1] = 5;
    
5-f) 
#define VALUE = 120 
    answer: this is treating VALUE as if it's a variable, which it is not.  If you are using SIZE as a symbolic constant, it should be simply - 

    Corrected: 
    #define VALUE 120

*/  

}  