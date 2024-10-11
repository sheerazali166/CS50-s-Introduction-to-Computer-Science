//
//  pdf.c
//  Section 4
//
//  Created by Sheeraz on 10/10/24.
//

#include "pdf.h"
#include "stdlib.h"
#include "string.h"
#include "stdint.h"

int mainThree(int argc, const char * argv[]) {
    
    // Program 5
    
    printf("--------------------Program 5--------------------\n");
    
    /*
   
    char filename[100];
    
    // TODO: Check first four byte in given file
    strcpy(filename, argv[0]);
    
    FILE *file = fopen(filename, "r");
    uint8_t buffer[4];
    
    fread(buffer, 1, 4, file);
    
    for (int i = 0;i < 4 ;i++) {
        
        printf("%i\n", buffer[i]);
    }
    
    fclose(file);
    
    */
    
    // Program 6
    
    printf("--------------------Program 6--------------------\n");
    
    /*
   
    char filenameTwo[100];
    

    
    // TODO: Check first four byte in given file
    strcpy(filenameTwo, argv[1]);
    
    FILE *fileTwo = fopen(filenameTwo, "r");
    uint8_t bufferTwo[4];
    
    int blocks_read = fread(bufferTwo, 1, 4, fileTwo);
    
    fread(bufferTwo, 1, 4, fileTwo);
    
    for (int iTwo = 0;iTwo < 4 ;iTwo++) {
        
        printf("%i\n", bufferTwo[iTwo]);
    }
    
    printf("Blocks read: %i\n", blocks_read);
    
    fclose(fileTwo);
    
    */
     
    // Practice with Reading
    
        // Create a program pdf.c that opens a file given as a
        // command-line argument.
    
        // Check if that file is a PDF. A PDF always begins with a
        // four-byte sequence, corresponding to these integers:
    
        // 37, 80, 68, 70
    
    
    //--------------------------------------//
    //     fread(buffer, ..., ..., f);      //
    //--------------------------------------//
    
    
    
    return 0;
}
