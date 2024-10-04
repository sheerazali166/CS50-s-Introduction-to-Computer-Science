//
//  greet.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "greet.h"

int mainSeven(int argc, const char * argv[]) {
    
    // Program 30
    
    printf("-----------------Program 30-----------------\n");

    // Command-Line Arguments
    
    // Command-line arguments are those arguments that are passed to your program at the command line. For example, all those
    // statements you typed after clang are considered command line arguments. You can use these arguments in your own
    // programs!
    
    // In your terminal window, type code greet.c and write code as follows:
    
    
    
    char answer[30];
    
    printf("What's your name? ");
    scanf("%s", answer);
    
    printf("hello, %s\n", answer);
   
    // Notice that this says hello to the user.

    // Program 31
    
    printf("-----------------Program 31-----------------\n");
    
    // Still, would it not be nice to be able to take arguments before the program even runs? Modify your code as follows:
    
    /*
    
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
    
    */
    
    
    return 0;
}
