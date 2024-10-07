//
//  factorial.c
//  Section 3
//
//  Created by Sheeraz on 10/6/24.
//

#include "factorial.h"

int factorial(int n);

int mainThree(void) {
    
    // Program 6
    
    printf("------------------Program 6------------------\n");
    
    // Get the positive value of n
    int nTwo;
    
    do {
        
        printf("n: ");
        scanf("%d", & nTwo);
        
    } while(nTwo < 0);
    
    
    // Print factorial
    printf("%i\n", factorial(nTwo));
    
    
    // How many steps did each algorithm take?

    //------------------------------------------------------------------//
    //          Linear Search       //       Binary Search              //
    //------------------------------------------------------------------//
    //                3            //              3                    //
    //------------------------------------------------------------------//
    
    // Factorial
        
        // 4! = 4 * 3!
                // ----
                // Recursive call
    
    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1!
        // 1! = 1
        // ------
        // base case
    
    
    // Factorial
        
        // 4! = 4 * 3!      |
        // 3! = 3 * 2!      |   Call stack
        // 2! = 2 * 1!      |
        // 1! = 1           |

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3 * 2 * 1
    
    
    // Creating a Factorial Function
    
    // In a file called factorial.c implement a function called factorial to return the
    // factorial of a given number.
    
    // Call factorial from main and print the result from factorial
    

    
    
    return 0;
}

int factorial(int n) {
    
    // TODO: Implement factorial function
    
    // Implement factorial function
    
    // Base case
    if (n == 1) {
        return 1;
    }
    
    // How many steps did each algorithm take?

    //------------------------------------------------------------------//
    //          Linear Search       //       Binary Search              //
    //------------------------------------------------------------------//
    //                3            //              3                    //
    //------------------------------------------------------------------//
    
    // Factorial

        // 4! = 4 * 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    // Factorial
        
        // 4! = 4 * 3!      |
        // 3! = 3 * 2!      |   Call stack
        // 2! = 2 * 1!      |
        // 1! = 1           |

    
    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1!
        // 1! = 1
        // ------
        // base case
    
    // Factorial
        
        // 4! = 4 * 3!
                // ----
                // Recursive call

    return n * factorial(n - 1);
    
}
