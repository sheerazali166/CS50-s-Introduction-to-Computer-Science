//
//  variables_and_scope.c
//  Shorts
//
//  Created by Sheeraz on 10/4/24.
//

#include "variables_and_scope.h"

int triple(int x);

float global = 0.5050;

void tripleTwo(void);
int tripleThree(int xTwo);
int tripleFour(int xThree);

int increment(int xFour);

int mainThree(void) {
    
    // Program 5
    
    printf("-----------------Program 5-----------------\n");
    
    
    // Variable Scope
    
        // Scope is a characteristic of a variable that defines
        // from which functions that variable may be
        // accessed.
    
            // Local variables can only be accessed within the
            // functions in which they are created.

            // Global variables can be accesssed by any function in the
            // program.
    
    
        // So far in the course, you've almost assuredly been
        // working only with local variables.
    
    int result = triple(5);
    printf("%d\n", result);
    
    
    // Here, x is local to the function triple(). No other
    // function can refer to that variable, not even
    // mainThree(). result is local to mainThree().
    
    // Program 6
    
    printf("-----------------Program 6-----------------\n");
    
    // Global variables exists too. if a variable is declared
    // outside of all functions, any function may refer to it.
    
    tripleTwo();
    printf("%f\n", global);
    
    
    // Variable Scope
    
        // Why does this distinction matter? for the most
        // part, local variables in C are passed by value
        // in function calls.
    
        // When a variable is passed by value, the callee
        // recieves a copy of the passed variable, not the
        // variable itself.
        
        // That means that the variable in the caller is
        // unchanged unless overwritten.
    

    // Program 7
    
    printf("-----------------Program 7-----------------\n");
    
    // Variable Scope
    
    // No effect on foo
    
    int foo = 4;
    
    tripleThree(foo);
    
    printf("%d\n", tripleThree(foo));

    
    // Program 8
    
    printf("-----------------Program 8-----------------\n");
    
    int fooTwo = 4;
    
    fooTwo = tripleFour(fooTwo);
    printf("%d\n", fooTwo);
    
    // Variable Scope
    
        // Things can be particularly insidious if the same
        // variable name appears in multiple functions, which
        // is perfectly okay as long as the variables exist in
        // different scopes.
    

    // Program 9
    
    printf("-----------------Program 9-----------------\n");
    
    int xFive = 1;
    int y;
    
    y = increment(xFive);
    printf("xFive is %i y is %i\n", xFive, y);
    
    // result is xFive is 1 y is 2
    
    return 0;
}

// Program 5

int triple(int x) {
    return x * 3;
}

// Program 6
void tripleTwo(void) {
    
    global *= 3;
}

// Program 7

int tripleThree(int xTwo) {
    
    return xTwo *= 3;
}

// Program 8

int tripleFour(int xThree) {
    
    return xThree *= 3;
}

// Program 9

int increment(int xFour) {
    
    xFour++;
    
    return xFour;
}
