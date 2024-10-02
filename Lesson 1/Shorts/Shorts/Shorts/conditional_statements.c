//
//  conditional_statements.c
//  Shorts
//
//  Created by Sheeraz on 10/2/24.
//

#include "conditional_statements.h"

int mainThree(void) {
    
    // Program 8
    
    printf("-------------Program 8-------------\n");
    
    // Conditionals
    
    // conditional expressions allow your programs to
    // make decision and take different forks in the road,
    // depending on the values of variables or user input.
    
    // C provides a few different ways to implement
    // conditional expressions (also known as branches) in
    // your programs, some of which likely look fimiliar
    // from scratch
    
    // if (boolean-expression) {
    
    
    // }
            
            // if the boolean expression evaluates to true, all lines
            // of code between the curly braces will execute in order from
            // top-to-bottom.
    
            // if the boolean expression evaluates to false, those
            // lines of code will not execute
    
    
    // if (boolean-expression-two) {
        
    
    // } else {
    
    
    // }
    
            // if the boolean expression evaluates to true all lines
            // of code between the first set of curly braces will execute in
            // order from top-to-bottom
    
            // if the boolean wxpression evaluates false, all lines
            // of code between the second set of curly braces will execute
            // in order from top-to-bottom
    
    
    // if (boolean-expr1) {                 In C it is possible to create an
                                        //  if-else if-else chain.
            // first branch                     In scratch, this required nesting
                                             // blocks.
    // } else if (boolean-expr2) {
    
            // second-branch
                                        //  As you would expect, each
    // } else if (boolean-expr3) {          branch is mutually exclusive.
    
            // third branch
    
    // } else {
    
            // fourth branch
    
    // }
    
    
    // if(booloean-expr1-two) {             It is possible to create
                                        //  chain of non-mutually exclusive
         // first branch                    branches
    
    // }
    // if(boolean-expr2-two) {
    
         // second branch                   In this example only third
                                        //  and fourth branches are
    // }                                    mutually exclusive. The else
    // if (boolean-expr3-two) {             binds to the nearest if only.
    
         // third branch
    
    // }
    // else {
    
         // fourth branch
    
    // }
    
    
    int x;
    
    printf("X: ");
    scanf("%d", &x);
    
    switch (x) {                     // C's switch()
        case 1:                      // statement is a
            printf("One!\n");        // conditional statement
            break;                   // that permits
        case 2:                      // enumeration of discrete
            printf("Two!\n");        // cases, instead of relying
            break;                   // on Boolean expressions.
        case 3:
            printf("Three!\n");
            break;                   // It's important to break;
        default:                     // between each case, or
            printf("Sorry!\n");      // you will "fall through"
            break;                   // each case (unless that is
                                     // desired behavior).
    }
    
    // Program 9
    
    printf("-------------Program 9-------------\n");
    
    // Conditionals
    
    int xTwo;
    
    printf("xTwo: ");
    scanf("%d", &xTwo);
    
    switch (xTwo) {                  // C's switch()
        case 5:                      // statement is a
            printf("Five, ");        // conditional statement
        case 4:                      // that permits
            printf("Four, ");        // enumeration of discrete
        case 3:                      // instead of relying
            printf("Three, ");       // on Boolean expressions.
        case 2:
            printf("Two, ");
        case 1:
            printf("One, ");         // It's important to break;
        default:                     // between each case, or
            printf("Blast-off\n");   // you will "fall-through"
    }                                // each case (unless that is
                                     // desired behavior).

    // Program 10
    
    printf("-------------Program 10-------------\n");
    
    // Conditionals
    
    int xThree;
    
    if (xThree) {
        xThree = 5;
        int xFour = (xThree) ? 5 : 6;
        
    } else {
        xThree = 6;
    }
    
    printf("%d\n", xThree);
    
    /*
    
    int xFive;
     
    This code is ?
     
    if (!xFive) {
        xFive = 5;
        int xSix = (xFive) ? 5 : 6;
        
    } else {
        xFive = 6;
    }
    
    printf("%d\n", xFive);
    
    */
    
    // These two snippets of code act identically.
    // The ternary operator (?:) is mostly a cute trick, but is
    // useful for writing trivially short conditional branches. Be
    // fimiliar with it, but know that you want need to write it if
    // you don't want to.
    
    // Conditionals
    
    // if (and if-else, and if-else if-...-else)
        // Use Boolean expressions to make decisions.
    
    // switch
        // Use discrete cases to make decisions
    
    // ?:
        // Use to replace a very simple if-else to make your
        // code look fancy.
    
    
    
    
    return 0;
}

