//
//  length.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "length.h"
#include "string.h"

int string_length(char s[]);

int mainFive(void) {
    
    // Program 22
    
    printf("-----------------Program 22-----------------\n");
    
    // String Length
    
    // A common problem within programming, and perhaps C more specifically, is to discover the length of an array. How could
    // we implement this in code? Type code length.c in the terminal window and code as follows:
    
    /*
    
    // Prompt for user's name
    char name[30];
    
    printf("Name: ");
    scanf("%s", name);
    
    // Count number of characters up until '\0' (aka NUL)
    int n = 0;
    
    while (name[n] != '\0') {
        n++;
    }
    
    printf("%i\n", n);
    
    */
     
    // Notice that this code loops until the NUL character is found.

    // Program 23
    
    printf("-----------------Program 23-----------------\n");
    
    // This code can ben improved by abstracting away the counting as follows:
    
    /*
    
    // Prompt for user's nameTwo
    char nameTwo[30];
    
    printf("nameTwo: ");
    scanf("%s", nameTwo);
    
    long length = strlen(nameTwo);
    
    printf("%ld\n", length);
    
    */

    // Program 24
    
    printf("-----------------Program 24-----------------\n");
    
    // Since this is such a common problem within programming, other programmers have created code in the string.h library to
    // find the length of a string. You can find the length of a string by modifying your code as follows:
    
    // Prompt for user's nameThree
    
    /*
    
    char nameThree[30];
    
    printf("nameThree: ");
    scanf("%s", nameThree);
    
    long lengthTwo = strlen(nameThree);
    
    printf("%ld\n", lengthTwo);
    
    */
     
    // Notice that this code uses the string.h library, declared at the top of the file. Further, it uses a function from that
    // library called strlen, which calculates the length of the string passed to it.
    
    return 0;
}

// Program 23

int string_length(char s[]) {
    
    // Count number of characters up until '\0' (aka NUL)
    int n2 = 0;
    
    while (s[n2] != '\0') {
        n2++;
    }
    
    return n2;
}


