//
//  agree.c
//  C
//
//  Created by Sheeraz on 10/1/24.
//

#include <stdio.h>

void mainTwo(void) {

    // Program 10
    
    printf("-----------------Program 10-----------------\n");
    
    // You can re-make and re-run your program and test it out.
    // Examining this program on a flow chart, you can see the efficiency of our code design decisions.
    // Considering another data type called a char we can start a new program by typing code agree.c into the terminal window.
    // Where a string is a series of characters, a char is a single character.
    // In the text editor, write code as follows:
    
    /*
    
    // Prompt user to agree
    char c;
    
    printf("Do you agree? ");
    scanf("%c", &c);
    
    // Check weather agreed
    if (c == 'Y' || c == 'y') {
        printf("Agreed.\n");
        
    } else if (c == 'N' || c == 'n') {
        printf("Not agreed.\n");
    }
    
    */
    
    
    // Notice that single quotes are utilized for single characters. Further, notice that == ensure that something is equal to
    // something else, where a single equal sign would have a very different function in C. Finally, notice that ||
    //effectively means or.
    
    // You can test your code by typing make agree into the terminal window, followed by ./agree.

    // Program 11
    
    printf("-----------------Program 11-----------------\n");
    
    // Loops
    
    // We can also utilize the loops building block from Scratch in our C programs.
    // We look at a few examples from Scratch. Consider the following code:
    
    int counter = 3;
    
    while (counter > 0) {
        
        printf("meow\n");
        counter = counter - 1;
    }

}
