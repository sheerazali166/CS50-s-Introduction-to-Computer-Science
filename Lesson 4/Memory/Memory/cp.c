//
//  cp.c
//  Memory
//
//  Created by Sheeraz on 10/9/24.
//

#include "cp.h"
#include "stdint.h"
#include "stdlib.h"

typedef uint8_t BYTE;

int mainNine(int argc, const char * argv[]) {
    
    // Program 40
    
    printf("-------------------Program 40-------------------\n");
    
    
    // Notice that this program protects against a NULL pointer by invoking return 1.
    
    // We can implement our own copy program by typing code cp.c and writing code as follows:
    
    
    FILE *source = fopen(argv[1], "rb");
    FILE *destination = fopen(argv[2], "wb");
    
    if(source == 0) {
        perror("fopen");
        exit(1);
    }
    
    if(destination == 0) {
        perror("fopen");
        exit(1);
    }
    
    BYTE byte;

    while (fread(&byte, sizeof(byte),1, source) != 0) {

        fwrite(&byte, sizeof(byte), 1, destination);
    }
    
    fclose(destination);
    fclose(source);
    
    // Notice that this file creates our own data type called a BYTE that is the size of a uint8_t. Then, the file reads a BYTE and writes it to a file.
    // BMPs are also assortments of data that we can examine and manipulate. This week, you will be doing just that in your problem sets!
    
    // Summing Up
    
    // In this lesson, you learned about pointers that provide you with the ability to access and manipulate data at specific memory locations.
    // Specifically, we delved into…
    
    // Pixel art
    // Hexadecimal
    // Memory
    // Pointers
    // Strings
    // Pointer Arithmetic
    // String Comparison
    // Copying
    // malloc and Valgrind
    // Garbage values
    // Swapping
    // Overflow
    // scanf
    // File I/O
    
    // See you next time!
    
    return 0;
}
