//
//  loops.c
//  Shorts
//
//  Created by Sheeraz on 10/2/24.
//

#include "loops.h"

int mainFour(void) {
    
    // Program 12
    
    printf("-------------Program 12-------------\n");
    
    // Loops
    
    // Loops allow your programs to execute line of code
    // repeatedly, saving you from needing to copy and
    // paste or otherwise repeat line of code
    
    // C provides a few different ways to implement loops
    // in your programs, some of which likely look fimiliar
    // from scratch
    
    // while (true) {
    
    // }
    
    
    // This is what we call an infinite loop. The lines of code
    // between the curly braces will execute repeadly from top
    // to bottom, untill and unless we break out of it (as with a
    // break; statement) or otherwise kill our program.
    
    
    // Another Example
    
    // while (boolean-expr) {
    
    
    // }
            
      // if the boolean-expr evaluates to true, all lines of code
      // between the curly braces will execute repeadly, in order
      // from top-to-bottom, untill boolean-expr evaluates to
      // false
      
      // somewhat confusingly, the behavior of the Scratch block is
      // reversed, but it is the closest analog.

    
      // Do While
    
      // do {                                                This will execute all lines of code
                                                          // between the curly braces once, and then,
      // }                                                   if the boolean-expr-two evaluates to true,
      // while(boolean-expr-two);                            will go back and repeat that process untill
                                                          // boolean-expr-two evaluates to false.
        
      // for(int i = 0;i < 10;i++) {
    
      // }
    
            // Syntactically unattractive, but for loops are used to repeat the
            // body of a loop a specified number of times, in this example 10.
            // The process undertaken in a for loop is:
                // The counter variable(s) (here, i) is set
                    // if it evaluates to true, the body of the loop executes.
                    // if it evaluates to false, the body of the loop does not
                    // execute.
                // The counter variable is incremented, and then the
                // Boolean expression is checked again, etc.
                    
                
      
      // for (start; expr; increment) {
    
      // }
    
      
        // Syntatically unattractive, but for loop are used to repeat the
        // body of a loop a specified number of times, in this example 10.
        // The process undertaken in a for loop is:
            // The statement(s) in start are executed
            // The expr is checked.
                // if it evaluates to true, the body of the loop executes.
                // if it evaluates to false, the body of the loop does not
                // execute
            // The statement(s) in increment are executed, and then
            // the expr is checked again, etc.
    
    
       // Loops
    
       // while
            // Use when you want a loop to repeat an unknown number
            // of times, and possibly not at all.
        
        // do-while
            // Use when you want a loop to repeat an unknown number
            // of times, but at least once.
    
        // for
            // Use when you want a loop to repeat a discrete number of
            // times, though you may not know the number at the
            // moment the program is compiled.
    
    
        
    
    
    
    
    
    
    
    return 0;
}
