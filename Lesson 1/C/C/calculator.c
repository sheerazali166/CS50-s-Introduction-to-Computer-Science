//
//  calculator.c
//  C
//
//  Created by Sheeraz on 10/1/24.
//

#include "calculator.h"

int add(int a, int b);
int addTwo(int aTwo, int bTwo);


int mainFour(void) {
    
    // Operators and Abstraction
    
    // Program 21
    
    printf("-----------------Program 21-----------------\n");
    
    // You can implement a calculator in C. In your terminal, type code calculator.c and write code as follows:
    
    /*
    
    int x, y;
    
    // Prompt user for x
    printf("x: ");
    scanf("%d", &x);
    
    // Prompt user for y
    printf("y: ");
    scanf("%d", &y);
    
    // Perform addition
    printf("%i\n", x + y);
    
    */
     
    // Notice how the get_int function is utilized to obtain an integer from the user twice. One integer is stored in the int
    // variable called x. Another is stored in the int variable called y. Then, the printf function prints the value of x + y,
    // designated by the %i symbol.
    
    // Operators refer to the mathematical operations that are supported by your compiler. In C, these mathematical operators
    // include:
    
    // + for addition
    // - for subtraction
    // * for multiplication
    // / for division
    // % for remainder
    
    // Abstraction is the art of simplifying our code such that it deals with smaller and smaller problems.

    // Program 22
    
    printf("-----------------Program 22-----------------\n");
    
    // Expanding on our previously acquired knowledge about functions, we could abstract away the addition into a function.
    // Modify your code as follows:

    /*
    
    int xTwo, yTwo;
    
    // Prompt user for xTwo
    printf("xTwo: ");
    scanf("%d", &xTwo);
    
    // Prompt user for yTwo
    printf("yTwo: ");
    scanf("%d", &yTwo);
    
    // Perform addition
    int z = add(xTwo, yTwo);
    printf("%i\n", z);
    
    */
    
    // Notice that the add function takes two variables as its input. These values are assigned to a and b and preforms a
    // calculation, returning the value of c. Further, notice that the scope (or context in which variables exist) of x is
    // the main function. The variable c is only within the scope of the add function.
    
    // Program 23
    
    printf("-----------------Program 23-----------------\n");
    
    /*
    
    // The design of this program can be further improved as follows:
    int xThree, yThree;
    
    // Prompt user for xThree
    printf("xThree: ");
    scanf("%d", &xThree);
    
    // Prompt user for yThree
    printf("yThree: ");
    scanf("%d", &yThree);
    
    // Perform addition
    printf("%i\n", addTwo(xThree, yThree));
    
    */
     
    // Notice that c in the add function is removed entirely.

    // Program 24
    
    printf("-----------------Program 24-----------------\n");
    
    // While very useful to be able to abstract away to an add function, you can also perform addition through truncation as
    // follows:
    
    /*
    
    long xFour, yFour;
    
    // Prompt user for Xfour
    printf("xFour: ");
    scanf("%ld", &xFour);
    
    // Prompt user for yFour
    printf("yFour: ");
    scanf("%ld", &yFour);
    
    // Perform addtion
    printf("%li\n", xFour + yFour);
    
    */
     
    // Notice that the addition is performed within the printf function.

    // Program 25
    
    printf("-----------------Program 25-----------------\n");
        
    
    // Similarly, division can be performed as follows:
    
    /*
    
    int xFive, yFive;
    
    // Prompt user for xFive
    printf("xFive: ");
    scanf("%d", &xFive);
    
    // Prompt user for yFive
    printf("yFive: ");
    scanf("%d", &yFive);
    
    // Divide xFive by yFive
    printf("%i\n", xFive / yFive);
    
    */
     
    // Notice that division is performed within the printf function.
    
    return 0;
}

int add(int a, int b) {
    int c = a + b;
    return c;
}

int addTwo(int aTwo, int bTwo) {
    return aTwo + bTwo;
}

