//
//  memory.c
//  Memory
//
//  Created by Sheeraz on 10/9/24.
//

#include "memory.h"
#include "stdlib.h"

int mainFive(void) {
    
    // Program 25
    
    printf("-------------------Program 25-------------------\n");
    
    // malloc and Valgrind
    
    // Valgrind is a tool that can check to see if there are memory-related issues with your programs wherein you utilized malloc. Specifically,
    // it checks to see if you free all the memory you allocated.
    
    // Consider the following code for memory.c:
    int *x = malloc(3 * sizeof(int));
    
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
    
    
    // Notice that running this program does not cause any errors. While malloc is used to allocate enough memory for an array, the code fails
    // to free that allocated memory.
    
    // If you type make memory followed by valgrind ./memory, you will get a report from valgrind that will report where memory has been lost as
    // a result of your program. One error that valgrind reveals is that we attempted to assign the value of 33 at the 4th position of the array,
    // where we only allocated an array of size 3. Another error is that we never freed x.

    // Program 26
    
    printf("-------------------Program 26-------------------\n");
    
    // You can modify your code as follows:
    
    int *xTwo = malloc(3 * sizeof(int));
    
    xTwo[0] = 72;
    xTwo[1] = 73;
    xTwo[2] = 33;
    
    free(xTwo);
    
    // Notice that running valgrind again now results in no memory leaks.
    
    
    
    return 0;
}
