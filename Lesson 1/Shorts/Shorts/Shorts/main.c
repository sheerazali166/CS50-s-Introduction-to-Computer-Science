//
//  main.c
//  Shorts
//
//  Created by Sheeraz on 10/2/24.
//

#include <stdio.h>
#include "operators.h"
#include "conditional_statements.h"
#include "loops.h"
#include "command_line.h"

int main(int argc, const char * argv[]) {
    
    // Program 1
    
    printf("-------------Program 1-------------\n");
    
    // Data Types and Varaibles
    
    // Creating a variable
    
    // To bring a variable into existence, you need simply specify the
    // data type of the variable and give it a name
    
    int number;
    char letter;
    
    
    // if you wish to create multiple variables of the same type, you
    // specify the type name once, and then list as many variables of
    // that type as you want.
    
    int height, width;
    float sqrt2, sqrt3, pi;
    
    // In general, it's good practice to only declare variable when
    // you need them.
    
    
    // Program 2
    
    printf("-------------Program 2-------------\n");
    
    // Data Types and Variables
    
    // Using a variable
    
    // After a variable has been declared, it's no longer necessary to
    // specify that variable's type. (In fact, doing so has some unintended
    // consequences!)
    
    int numberTwo;   // declaration
    numberTwo = 17;  // assignment
    
    char letterTwo;  // declaration
    letterTwo = 'H'; // assignment
    
    printf("%d\n", numberTwo);
    printf("%c\n", letterTwo);
    
    
    // if you are simultaneously declaring and setting the value of a
    // variable (sometimes called initializing), you can consolidate
    // this to one step.
    
    printf("<<<----------------------------->>>");
    printf("\n");
    
    int numberThree = 17;   // initialization
    char letterThree = 'H'; // initialization
    
    printf("%d\n", numberThree);
    printf("%c\n", letterThree);
    
    // barya line maar raha hai larki par
    
    // Program 3
    
    printf("-------------Program 3-------------\n");
    
    mainTwo();
    
    
    // Program 7
    
    printf("-------------Program 7-------------\n");
    
    mainThree();
    
    // Program 11
    
    printf("-------------Program 11-------------\n");

    mainFour();
    
    // Program 13
    
    printf("-------------Program 13-------------\n");

    mainFive();
    
}
