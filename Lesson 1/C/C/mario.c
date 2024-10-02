//
//  mario.c
//  C
//
//  Created by Sheeraz on 10/1/24.
//

#include "mario.h"

int mainFive(void) {
    
    // Program 26
    
    printf("-----------------Program 26-----------------\n");
    
    // In the terminal window, type code mario.c and code as follows:
    
    for (int i = 0;i < 4;i++ ) {
        printf("?");
    }
    printf("\n");
    
    // Notice how four question marks are printed here using a loop.
    // Similarly, we can apply this same logic to be able to create three vertical blocks.

    // Program 27
    
    printf("-----------------Program 27-----------------\n");
    
    // To accomplish this, modify your code as follows:
    for (int iTwo = 0;iTwo < 3;iTwo++) {
        printf("#\n");
    }
    
    // Notice how three vertical bricks are printed using a loop
    // What if we wanted to combine these ideas to create a three-by-three group of blocks?

    // Program 28
    
    printf("-----------------Program 28-----------------\n");
    
    // We can follow the logic above, combining the same ideas. Modify your code as follows:
    for (int iThree = 0;iThree < 3;iThree++) {
        for (int j = 0;j < 3 ;j++) {
            printf("#");
        }
        printf("\n");
    }
    
    // Notice that one loop is inside another. The first loop defines what vertical row is being printed. For each row, three
    // columns are printed. After each row, a new line is printed.

    // Program 29
    
    printf("-----------------Program 29-----------------\n");
    
    // What if we wanted to ensure that the number of blocks to be constant, that is, unchangeable? Modify your code as
    // follows:
    
    const int n = 3;
    
    for (int iFour = 0;iFour < n;iFour++) {
        for (int jTwo = 0;jTwo < n;jTwo++) {
            printf("#");
        }
        printf("\n");
    }
    
    // Notice how n is now a constant. It can never be changed.
    
    // Program 30
    
    printf("-----------------Program 30-----------------\n");
    
    // As illustrated earlier in this lecture, we can make our code prompt the user for the size of the grid. Modify your code
    // as follows:
    
    int nTwo;
    
    printf("Size: ");
    scanf("%d", &nTwo);
    
    for (int iFive = 0;iFive < nTwo;iFive++) {
        for (int jThree = 0;jThree < nTwo;jThree++) {
            printf("#");
        }
        printf("\n");
    }
    
    printf("She is a doctor\n");
    
    // Notice that scanf("%d", &nTwo) is used to prompt the user.

    // Program 31
    
    printf("-----------------Program 31-----------------\n");
    
    // A general piece of advice within programming is that you should never fully trust your user. They will likely
    // misbehave, typing incorrect values where they should not. We can protect our program from bad behavior by checking
    // to make sure the user’s input satisfies our needs. Modify your code as follows:
    
    int nThree;
    
    do {
        printf("Size: ");
        scanf("%d", &nThree);
        
    } while(nThree < 1);
    
    for (int iSix = 0;iSix < nThree;iSix++) {
        for (int jFour = 0;jFour < nThree;jFour++) {
            printf("#");
        }
        printf("\n");
    }
    
    // Notice how the user is continuously prompted for the size until the user’s input is 1 or greater.

    // Program 32
    
    printf("-----------------Program 32-----------------\n");
    
    // Comments
    
    // Comments are fundamental parts of a computer program, where you leave explanatory remarks to yourself and others that
    // may be collaborating with you regarding your code.
    
    // All code you create for this course must include robust comments.
    
    // Typically each comment is a few words or more, providing the reader an opportunity to understand what is happening in
    // a specific block of code. Further, such comments serve as a reminder for you later when you need to revise your code.
    
    // Comments involve placing // into your code, followed by a comment. Modify your code as follows to integrate comments:
    
    // Prompt user to positive integer
    int nFour;
    
    do {
        printf("Size: ");
        scanf("%d", &nFour);
        
    } while(nFour < 1);
    
    // Print an n-by-n grid of bricks
    for (int iSeven = 0;iSeven < nFour;iSeven++) {
        for (int jFive = 0;jFive < nFour;jFive++) {
            printf("#");
        }
        printf("\n");
    }
    
    // Notice how each comment begins with a //.
    
    // Types
    
    // One of C’s shortcomings is the ease by which it managing memory. While C provides you immense control over how memory
    // is utilized, programmers have to be very aware of potential pitfalls of memory management.
    
    // Types refer to the possible data that can be stored within a variable. For example, a char is designed to accommodate
    // a single character like a or 2.
    
    // Types are very important because each type has specific limits. For example, because of the limits in memory, the
    // highest value of an int can be 4294967295. If you attempt to count an int higher, integer overflow will result where
    // an incorrect value will be stored in this variable.
    
    // The number of bits limits how high and low we can count.
    // Types with which you might interact during this course include:
    
    // bool, a Boolean expression of either true or false
    // char, a single character like a or 2
    // double, a floating-point value with more digits than a float
    // float, a floating-point value, or real number with a decimal value
    // int, integers up to a certain size, or number of bits
    // long, integers with more bits, so they can count higher than an int
    // string, a string of characters
    
    // As you are coding, pay special attention to the types of variables you are using to avoid problems within your code.
    // We examined some examples of disasters that can occur through memory-related errors.
    
    // Summing Up
    
    // In this lesson, you learned how to apply the building blocks you learned in Scratch to the C programming language.
    // You learned…
    
    // How to create your first program in C.
    // Predefined functions that come natively with C and how to implement your own functions.
    // How to use variables, conditionals, and loops.
    // How to approach abstraction to simplify and improve your code.
    // How to approach problem-solving for a computer science problem.
    // How to use the Linux command line.
    // How to integrate comments into your code.
    // How to utilize types and operators.
    
    // See you next time!
    
    return 0;
}
