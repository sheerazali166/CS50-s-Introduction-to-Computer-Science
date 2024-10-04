//
//  buggy.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "buggy.h"

void print_column(int height);

int mainTwo(void) {
    
    // Program 6
    
    printf("-----------------Program 6-----------------\n");
    
    // Type code buggy0.c into the terminal window and write the above code.
    // Running this code, four bricks appear instead of the intended three.
    // printf is a very useful way of debugging your code. You could modify your code
    // as follows:
    
    for (int i = 0;i <= 3;i++) {
        printf("i is %i\n", i);
        printf("#\n");
    }

    // Program 7
    
    printf("-----------------Program 7-----------------\n");
    
    // Running this code, you will see numerous statements, including i is 0, i is 1, i is 2, and i is 3. Seeing this, you
    // might realize that Further code needs to be corrected as follows:
    
    
    for (int iTwo = 0;iTwo < 3;iTwo++) {
        printf("#\n");
    }
    
    // Notice the <= has been replaced with <.

    // Program 8
    
    printf("-----------------Program 8-----------------\n");
    
    // This code can be further improved as follows:
    
    /*
    
    int height;
    
    printf("Height: ");
    scanf("%d", &height);
    
    print_column(height);
    
    */
     
    // Notice that compiling and running this code still results in a bug.
    // To address this bug, we will use a new tool at our disposal.
    // A second tool in debugging is called a debugger, a software tool created by programmers to help track down bugs
    // in code.
    
    // In VS Code, a preconfigured debugger has been provided to you.
    // To utilize this debugger, first set a breakpoint by clicking to the left of a line of your code, just to the left of
    // the line number. When you click there, you will see a red dot appearing. Imagine this as a stop sign, asking the
    // compiler to pause such that you can consider what’s happening in this part of your code.
    
    // Second, run debug50 ./buggy0. You will notice that after the debugger comes to life that a line of your code will
    // illuminate in a gold-like color. Quite literally, the code has paused at this line of code. Notice in the top left
    // corner how all local variables are being displayed, including height, which has a current does not have a value. At the
    // top of your window, you can click the step over button and it will keep moving through your code. Notice how the
    // value of h increases.
    
    // While this tool will not show you where your bug is, it will help you slow down and see how your code is running
    // step by step. You can use step into as a way to look further into the details of your buggy code.
    
    // A final form of debugging is called rubber duck debugging. When you are having challenges with your code, consider
    // how speaking out loud to, quite literally, a rubber duck about the code problem. If you’d rather not talk to a small
    // plastic duck, you are welcome to speak to a human near you! They need not understand how to program: Speaking with
    // them is an opportunity for you to speak about your code.
    
    
    return 0;
}

// Program 8

void print_column(int height) {
    
    for (int iThree = 0;iThree <= height;iThree++) {
        printf("#\n");
    }
}
