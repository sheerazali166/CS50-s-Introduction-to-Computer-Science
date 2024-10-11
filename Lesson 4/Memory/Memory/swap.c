//
//  swap.c
//  Memory
//
//  Created by Sheeraz on 10/9/24.
//

#include "swap.h"
#include "stdlib.h"

void swap(int a, int b);
void swapTwo(int *aTwo, int *bTwo);

int mainSeven(void) {
    
    // Program 30
    
    printf("-------------------Program 30-------------------\n");
    
    // Swap
    
    // In the real world, a common need in programming is to swap two values. Naturally, it’s hard to swap two variables without a temporary holding
    // space. In practice, you can type code swap.c and write code as follows to see this in action:
    
    int x = 1;
    int y = 2;
    
    printf("x is %i y is %i\n", x, y);
    swap(x, y);
    printf("x is %i y is %i\n", x, y);
    
    // Notice that while this code runs, it does not work. The values, even after being sent to the swap function, do not swap. Why?
    
    // When you pass values to a function, you are only providing copies. In previous weeks, we discussed the concept of scope. The values of x and y
    // created in the curly {} braces of the main function only have the scope of the main function. Consider the following image:
    
    
                                            //----------------------------//
                                            //        machine code        //
                                            //----------------------------//
                                            //           globals          //
                                            //----------------------------//
                                            //            heap            //
                                            //              ↓             //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //              ↑             //
                                            //            stack           //
                                            //----------------------------//
    
    
    // Notice that global variables, which we have not used in this course, live in one place in memory. Various functions are stored in the stack in
    // another area of memory.
    
    // Now, consider the following image:
    


                                            //----------------------------//
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //                            //
                                            //----------------------------//
                                            //            swap            //
                                            //----------------------------//
                                            //            main            //
                                            //----------------------------//
    
    
    // Notice that main and swap have two separate frames or areas of memory. Therefore, we cannot simply pass the values from one function to another
    // to change them.
    
    // Program 31
    
    printf("-------------------Program 31-------------------\n");
    
    // Modify your code as follows:
    
    int xTwo = 1;
    int yTwo = 2;
    
    printf("xTwo is %i yTwo is %i\n", xTwo, yTwo);
    swapTwo(&xTwo, &yTwo);
    printf("xTwo is %i yTwo is %i\n", xTwo, yTwo);
    
    // Notice that variables are not passed by value but by reference. That is, the addresses of a and b are provided to the function. Therefore, the
    // swap function can know where to make changes to the actual a and b from the main function.

    
    //----------------------------//
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //                            //
    //----------------------------//
    //                      1     //
    //    a        b      temp    //
    //    ↓        ↓              //
    //----↓--------↓--------------//
    //    ↓        ↓              //
    //    ↓ →→→ 2  ↓ →→ 1         //
    //          x       y         //
    //----------------------------//
    
    
    // Overflow
    
    // A heap overflow is when you overflow the heap, touching areas of memory you are not supposed to.
    // A stack overflow is when too many functions are called, overflowing the amount of memory available.
    // Both of these are considered buffer overflows.

    
    // Program 32
    
    printf("-------------------Program 32-------------------\n");
    
    // scanf
    
    // In CS50, we have created functions like get_int to simplify the act of getting input from the user.
    // scanf is a built-in function that can get user input.
    // We can reimplement get_int rather easily using scanf as follows:
    
    /*
    
    int xThree;
    
    printf("xThree: ");
    scanf("%i", &xThree);
    
    printf("xThree: %i\n", xThree);
    
    */
     
    // Notice that the value of x is stored at the location of x in the line scanf("%i", &x).

    
    // Program 33
    
    printf("-------------------Program 33-------------------\n");
    
    // However, attempting to reimplement get_string is not easy. Consider the following:
    
    /*
    
    char *s;
    
    printf("s: ");
    scanf("%s", s);
    
    printf("s: %s\n", s);
    
    */
    
    // Notice that no & is required because strings are special. Still, this program will not function. Nowhere in this program do we allocate
    // the amount of memory required for our string. Indeed, we don’t know how long of a string may be inputted by the user!

    
    // Program 34
    
    printf("-------------------Program 34-------------------\n");
    
    
    // Further, your code could be modified as follows. However, we have to pre-allocate a certain amount of memory for a string:
    
    /*
    
    char *sTwo = malloc(4);
    
    if (sTwo == NULL) {
        
        return 1;
    }
    
    printf("sTwo: ");
    scanf("%s", sTwo);
    
    printf("sTwo: %s\n", sTwo);
    
    free(sTwo);
    
    */
     
    // Notice that if a string that is six bytes is provided you might get an error.

    
    // Program 35
    
    printf("-------------------Program 35-------------------\n");
    
    
    // Simplifying our code as follows we can further understand this essential problem of pre-allocation:
    
    /*
    
    char sThree[4];
    
    printf("sThree: ");
    scanf("%s", sThree);
    
    printf("sThree: %s\n", sThree);
    
    */

    // Notice that if we pre-allocate an array of size 4, we can type cat and the program functions. However, a string larger than this could create
    // an error.
    
    // Sometimes, the compiler or the system running it may allocate more memory than we indicate. Fundamentally, though, the above code is unsafe.
    // We cannot trust that the user will input a string that fits into our pre-allocated memory.
    
    
    return 0;
}

// Program 30

void swap(int a, int b) {
    
    int temp = a;
    
    a = b;
    b = temp;
    
}


// Program 31

void swapTwo(int *aTwo, int *bTwo) {
    
    int tempTwo = *aTwo;
    
    *aTwo = *bTwo;
    *bTwo = tempTwo;
    
    
}
