//
//  calculator.c
//  Lesson 6 Comparison
//
//  Created by Sheeraz on 10/16/24.
//

#include "calculator.h"
#include "stdio.h"

int mainTwo(void) {
    
    // Program 2
    
    printf("------------------Program 2------------------\n");
    
    // Calculator
    
    // You might recall calculator.c from earlier in the course:
    
    /*
    
    int x;
    int y;
    
    // Prompt user for x
    printf("x: ");
    scanf("%d", &x);
    
    // Prompt user for y
    printf("y: ");
    scanf("%d", &y);
    
    
    // Perform addition
    printf("%i\n", x + y);
    
    */
     
    // Conditionals
    
    
    // Program 3
    
    printf("------------------Program 3------------------\n");
    
    
    // Conditionals, boolean expressions, relational operators
    
    /*
    
    // Prompt user for integers
    int xTwo;
    int yTwo;
    
    printf("What's xTwo? ");
    scanf("%d", &xTwo);
    
    printf("What's yTwo? ");
    scanf("%d", &yTwo);
    
    // Compare integers
    if (xTwo < yTwo) {
        
        printf("xTwo is less than yTwo\n");
        
    } else if (xTwo > yTwo) {
        
        printf("xTwo is greater than yTwo\n");
        
    } else {
        
        printf("xTwo is equal to yTwo\n");
    }
    
     
    */
    
    // In C, we faced challenges when we wanted to compare two values. Consider the following code:

    
    // Program 4
    
    printf("------------------Program 4------------------\n");
    
    // Conditionals, Boolean expressions, rational operators
    
    /*
    
    // Prompt user for integers
    int xThree;
    int yThree;
    
    printf("What's xThree? ");
    scanf("%d", &xThree);
    
    printf("What's yThree? ");
    scanf("%d", &yThree);
    
    if (xThree < yThree) {
        
        printf("xThree is less than yThree\n");
        
    } else if (xThree > yThree) {
        
        printf("xThree is greater than yThree\n");
        
    } else {
            
        printf("xThree is equal to yThree\n");
        
    }
    
    */
     
    
    // Notice that the CS50 library is imported. Further, minor changes exist in the if statement.

    
    // Program 5
    
    printf("------------------Program 5------------------\n");
    
    
    // Further looking at comparisons, consider the following code in C:
    
    /*
    
    char c;
    
    // Prompt user to agree
    printf("Do you agree? ");
    scanf("%c", &c);
    
    if (c == 'Y' || c == 'y') {
        
        printf("Agreed.\n");
        
    } else if (c == 'N' || c == 'n') {
        
        printf("Not agreed.\n");
        
    }

    */
    
    // Program 6
    
    printf("------------------Program 6------------------\n");
    
    int i = 0;
    
    while (i < 3) {
        
        printf("meow\n");
        i += 1;
    }
    
    
    
    return 0;
}

