//
//  compare.c
//  Memory
//
//  Created by Sheeraz on 10/9/24.
//

#include "compare.h"
#include "string.h"

int mainThree(void) {
 
    // Program 12
    
    printf("-------------------Program 12-------------------\n");
    
    // String Comparison
    
    // A string of characters is simply an array of characters identified by its first byte.
    
    // Earlier in the course, we considered the comparison of integers. We could represent this in code by typing code compare.c into the
    // terminal window and writing code as follows:
    
    /*
    
    int i;
    int j;
    
    // Get two integers
    printf("i: ");
    scanf("%d", &i);
    
    printf("j: ");
    scanf("%d", &j);
    
    // Compare integers
    
    if (i == j) {
        
        printf("Same\n");
        
    } else {
        
        printf("Different\n");
    }
     
    */
    
    // Notice that this code takes two integers from the user and compares them.
    // In the case of strings, however, one cannot compare two strings using the == operator.
    // Utilizing the == operator in an attempt to compare strings will attempt to compare the memory locations of the strings instead of the
    // characters therein. Accordingly, we recommended the use of strcmp.
    
    
    // To illustrate this, modify your code as follows:
    
    // Program 13
    
    printf("-------------------Program 13-------------------\n");
    
    /*
    
    // Get two strings
    char sInput[50];
    char tInput[50];
    
    char *s = sInput;
    char *t = tInput;
    
    printf("s: ");
    scanf("%s", s);
    
    printf("t: ");
    scanf("%s", t);
    
    // Compare strings' addresses
    if (s == t) {
        
        printf("Same\n");
        
    } else {
        
        printf("Different\n");
    }
     
    */
    
    // Noticing that typing in HI! for both strings still results in the output of Different.
    // Why are these strings seemingly different? You can use the following to visualize why:
    
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //                          0x123                          |                          0x456                      //
    //                            s                            |                            t                        //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |  H   |   I  |  !   |  \0  |      |      |      |      |   H  |   I  |   !  |  \0  |     |     //
    //       |       |0x123 |0x124 |0x125 |0x126 |      |      |      |      |0x456 |0x457 |0x458 |0x459 |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //       |       |      |      |      |      |      |      |      |      |      |      |      |      |     |     //
    //---------------------------------------------------------------------------------------------------------------//
    
    
    // Therefore, the code for compare.c above is actually attempting to see if the memory addresses are different: not the strings themselves.
    
    
    // Program 14
    
    printf("-------------------Program 14-------------------\n");
    
    
    // Using strcmp, we can correct our code:

    /*
    
    char sTwoInput[50];
    char tTwoInput[50];
    
    char *sTwo = sTwoInput;
    char *tTwo = tTwoInput;
    
    // Get two strings
    
    printf("sTwo: ");
    scanf("%s", sTwo);
    
    printf("tTwo: ");
    scanf("%s", tTwo);
    
    // Compare strings
    if (strcmp(sTwo, tTwo) == 0) {
        
        printf("Same\n");
        
    } else {
        
        printf("Different!\n");
    }
    
    */
    
    // Notice that strcmp can return 0 if the strings are the same.

    
    // Program 15
    
    printf("-------------------Program 15-------------------\n");

    // To further illustrate how these two strings are living in two locations, modify your code as follows:
    
    // Get two strings
    
    /*
    
    char sThreeInput[50];
    char tThreeInput[50];
    
    char *sThree = sThreeInput;
    char *tThree = tThreeInput;
    
    printf("sThree: ");
    scanf("%s", sThree);
    
    printf("sThree: ");
    scanf("%s", tThree);
    
    // Print strings
    printf("%s\n", sThree);
    printf("%s\n", tThree);
    
    */
    
    // Notice how we now have two separate strings stored likely at two separate locations.

    
    // Program 16
    
    printf("-------------------Program 16-------------------\n");
    
    
    // You can see the locations of these two stored strings with a small modification:
    
    /*
    
    // Get two strings
    char sFourInput[50];
    char tFourInput[50];
    
    char *sFour = sFourInput;
    char *tFour = tFourInput;
    
    printf("sFour: ");
    scanf("%s", sFour);
    
    printf("tFour: ");
    scanf("%s", tFour);
    
    // Print strings' addresses
    printf("%p\n", sFour);
    printf("%p\n", tFour);
    
    */
     
    // Notice that the %s has been changed to %p in the print statement.
    
    return 0;
}
