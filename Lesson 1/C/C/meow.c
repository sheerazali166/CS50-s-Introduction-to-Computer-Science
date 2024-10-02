//
//  meow.c
//  C
//
//  Created by Sheeraz on 10/1/24.
//

#include "meow.h"

void meowTwo(int n);

void mainThree(void) {
    
    // Program 12
    
    printf("-----------------Program 12-----------------\n");
    
    // Notice that his code assigns the value of 3 to the counter variable. Then, the while loop says meow and removes one
    // from the counter for each iteration. Once the counter is not greater than zero, the loop ends.
    
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");
    
    // Notice this does as intended but has an opportunity for better design.
    
    // Program 13
    
    printf("-----------------Program 13-----------------\n");
    
    int i = 3;
    
    while (i > 0) {
        
        printf("meow\n");
        i--;
    }
    
    // Notice that we create an int called i and assign it the value 3. Then, we create a while loop that will run as long as
    // i > 0. Then, the loop runs. Every time 1 is subtracted to i using the i-- statement.
    
    // Program 14
    
    printf("-----------------Program 14-----------------\n");
    
    // Similarly, we can implement a count-up of sorts by modifying our code as follows:
    
    int iTwo = 1;
    
    while (iTwo <= 3) {
        
        printf("meow\n");
        iTwo++;
    }
    
    // Notice how our counter i is started at 1. Each time the loop runs, it will increment the counter by 1. Once the counter
    // is greater than 3, it will stop the loop.
    
    // Program 15
    
    printf("-----------------Program 15-----------------\n");
    
    // Generally, in computer science we count from zero. Best to revise your code as follows:
    
    int iThree = 0;
    
    while (i < 3) {
        printf("meow\n");
        i++;
    }
    
    // Program 16
    
    printf("-----------------Program 16-----------------\n");
    
    // Notice we now count from zero.
    // Another tool in our toolbox for looping is a for loop.
    // You can further improve the design of our meow.c program using a for loop. Modify your code as follows:
    
    for (int iFour = 0; iFour < 3; iFour++) {
        printf("meow\n");
    }
    
    // Notice that the for loop includes three arguments. The first argument int i = 0 starts our counter at zero. The second
    // argument i < 3 is the condition that is being checked. Finally, the argument i++ tells the loop to increment by one
    // each time the loop runs.
    
    // Program 17
    
    printf("-----------------Program 17-----------------\n");
    
    // We can even loop forever using the following code:
    
    /*
     
     typedef enum {
     true=1,
     false=0
     }bool;
     
     
     while (true) {
     printf("meow\n");
     }
     
     */
    
    // Notice that true will always be the case. Therefore, the code will always run. You will lose control of your terminal
    // window by running this code. You can break from an infinite by hitting control-C on your keyboard.
    
    // Program 18
    
    printf("-----------------Program 18-----------------\n");
    
    // While we will provide much more guidance later, you can create your own function within C as follows:
    
    printf("meow\n");
    
    // The initial void means that the function does not return any values. The (void) means that no values are being provided
    // to the function.
    
    // Program 19
    
    printf("-----------------Program 19-----------------\n");
    
    // This function can be used in the main function as follows:
    // problem in punjab
    /*
     
    for (int iFive = 0;iFive < 3; iFive++) {
        
        meow();
        // Call to undeclared function 'meow'; ISO C99 and later do not support implicit function declarations
    }
 
    */
    
    // Notice how the meow function is called with the meow() instruction. This is possible because the meow function is
    // defined at the bottom of the code and the prototype of the function is provided at the top of the code as void
    // meow(void).

    // Program 20
    
    printf("-----------------Program 20-----------------\n");
    
    // Your meow function can be further modified to accept input:
    meowTwo(3);
    
    // Notice that the prototype has changed to void meow(int n) to show that meow accepts an int as its input.
    
}

void meow(void) {
    printf("meow\n");
}

// Conflicting types for 'meow'

// Meow some number of times
void meowTwo(int n) {
    for (int iSix = 0;iSix < n;iSix++) {
        printf("moewTwo\n");
    }
}
