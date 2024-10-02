//
//  marioTwo.c
//  Section_1
//
//  Created by Sheeraz on 10/2/24.
//

#include "marioTwo.h"

void print_row_two(int lengthTwo);
void print_row_three(int lengthThree);
void print_row_four(int lengthFour);
void print_row_five(int lengthFive);

int mainFour(void) {
    
    // Program 14
    
    printf("---------------Program 14---------------\n");
    
    /*
    
    int height;
    
    printf("Height: ");
    scanf("%d", &height);

    */
     
    // Program 15
    
    printf("---------------Program 15---------------\n");
    
    // print_row(4);
    // Call to undeclared function 'print_row'; ISO C99 and later do not support implicit function declarations

    // Program 16
    
    printf("---------------Program 16---------------\n");
    
    print_row_two(4);
    
    // Program 17
    
    printf("---------------Program 17---------------\n");
    
    /*
    
    int heightTwo;
    
    printf("heightTwo: ");
    scanf("%d", &heightTwo);
    
    print_row_three(heightTwo);

    */
     
    // Program 18
    
    printf("---------------Program 18---------------\n");
    
    /*
    
    int heightThree;
    
    printf("heightThree: ");
    scanf("%d", &heightThree);
    
    for (int iFive = 0;iFive < heightThree;iFive++) {
        print_row_four(heightThree);
    }
     
    */

    // Program 19
    
    printf("---------------Program 19---------------\n");
    
    int heightFour;
    
    printf("heightFour: ");
    scanf("%d", &heightFour);
    
    for (int iSeven = 0;iSeven < heightFour;iSeven++) {
        print_row_five(iSeven + 1);
    }
    
    // The goal for this section is
    
    /*
    
    int get_int(string prompt) {
        // Get int from user
    }
    
    */
    
    // int height = get_int("Height: ");
    
    /*
    
    void print_row(int bricks) {
        // Print row of bricks
    }
     
    */
    
    // print_row(4);

    /*
    
    void print_row(int bricks) {
        // Print row of bricks
    }
     
    */
    
    return 0;
}


// Conflicting types for 'print_row'
/*
 // Program 15
void print_row(int length) {
    
    for (int i = 0;i < length;i++) {
        printf("#");
    }
    printf("\n");
}
*/


// Program 16
void print_row_two(int lengthTwo) {
    
    for (int iTwo = 0;iTwo < lengthTwo;iTwo++) {
        printf("#");
    }
    printf("\n");
}

// Program 17
void print_row_three(int lengthThree) {
    
    for (int iThree = 0;iThree < lengthThree;iThree++) {
        printf("#");
    }
    printf("\n");
}

// Program 18
void print_row_four(int lengthFour) {
    
    for (int iFour = 0;iFour < lengthFour;iFour++) {
        printf("#");
    }
    printf("\n");
}

// Program 19
void print_row_five(int lengthFive) {
    
    for (int iSix = 0;iSix < lengthFive;iSix++) {
        printf("#");
    }
    printf("\n");
}
