//
//  copy.c
//  Memory
//
//  Created by Sheeraz on 10/9/24.
//

#include "copy.h"
#include "ctype.h"
#include "string.h"
#include "stdlib.h"

int mainFour(void) {
    
    // Program 18
    
    printf("-------------------Program 18-------------------\n");
    
    // Copying
    
    // A common need in programming is to copy one string to another.
    // In your terminal window, type code copy.c and write code as follows:
    
    /*
    
    // Get a string
    char sInput[50];
    char tInput[50];
    
    char *s = sInput;
    char *t = tInput;
    
    printf("s: ");
    scanf("%s", s);
    
    // Copy string's address
    t = s;
    
    // Capitalize first letter in string
    t[0] = toupper(t[0]);
    
    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
    */
     
    // Notice that string t = s copies the address of s to t. This does not accomplish what we are desiring. The string is not
    // copied – only the address is.
    
    // You can visualize the above code as follows:
    
    //-------------------------------------------------------------------------------------------------------------//
    //                          s                         |                         t                              //
    //-------------------------------------------------------------------------------------------------------------//
                             // ↓                                                   ↓
                             // ↓                                                   ↓
                             // ↓                                                   ↓
    // ←←←←←←←←←←←←←←←←←←←←←←←←←                                                ←←← ↓
    // ↓                                                                        ↓
    // ↓                                                                        ↓
    // ↓   ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
    // ↓   ↓
    // ↓   ↓
    // ↓   ↓
   
    //---------------------------------//
    //  h    |   i   |   !    |  \0    //
    // 0x123 | 0x124 | 0x125  | 0x126  //
    //---------------------------------//
    
    // Notice that s and t are still pointing at the same blocks of memory. This is not an authentic copy of a string. Instead,
    // these are two pointers pointing at the same string.

    
    // Program 19
    
    printf("-------------------Program 19-------------------\n");
    
    // Before we address this challenge, it’s important to ensure that we don’t experience a segmentation fault through our code,
    // where we attempt to copy string s to string t, where string t does not exist. We can employ the strlen function as follows
    // to assist with that:
    
    /*
    
    // Get a string
    char sInputTwo[50];
    char tInputTwo[50];
    
    char *sTwo = sInputTwo;
    char *tTwo = tInputTwo;
    
    printf("sTwo: ");
    scanf("%s", sTwo);
    
    // Copy the string address
    tTwo = sTwo;
    
    // Capitalize the first letter in string
    if (strlen(tTwo) > 0) {
        
        tTwo[0] = toupper(tTwo[0]);
    }
    
    // Print string twice
    printf("sTwo: %s\n", sTwo);
    printf("tTwo: %s\n", tTwo);
    
    */
     
    // Notice that strlen is used to make sure string t exists. If it does not, nothing will be copied.

    
    // Program 20
    
    printf("-------------------Program 20-------------------\n");
    
    // To be able to make an authentic copy of the string, we will need to introduce two new building blocks. First, malloc allows you,
    // the programmer, to allocate a block of a specific size of memory. Second, free allows you to tell the compiler to free up that
    // block of memory you previously allocated.
    
    // We can modify our code to create an authentic copy of our string as follows:
    
    // Get a string
    
    /*
    
    char sThreeInput[50];
    
    char *sThree = sThreeInput;
    
    printf("sThreeInput: ");
    scanf("%s", sThree);
    
    // Allocate memory for another string
    char *tThree = malloc(strlen(sThree) + 1);
    
    // Copy string into memory, including '\0'
    for (int i = 0;i <= strlen(sThree);i++) {
        
        tThree[i] = sThree[i];
    }
    
    // Capitalize copy
    tThree[0] = toupper(tThree[0]);
    
    // Print strings
    printf("sThree: %s\n", sThree);
    printf("tThree: %s\n", tThree);
    
    */
    
    // Notice that malloc(strlen(s) + 1) creates a block of memory that is the length of the string s plus one. This allows for
    // the inclusion of the null \0 character in our final, copied string. Then, the for loop walks through the string s and
    // assigns each value to that same location on the string t.
     
    
    
    // It turns out that there is an inefficiency in our code. Modify your code as follows:
    
    // Program 21
    
    printf("-------------------Program 21-------------------\n");
    
    /*
    
    // Get a string
    char sFourInput[50];
    
    char *sFour = sFourInput;
    
    printf("sFour: ");
    scanf("%s", sFour);
    
    // Allocate memory for another string
    char *tFour = malloc(strlen(sFour) + 1);

    // Copy string into memory, including '\0'
    for (long iTwo = 0, n = strlen(sFour);iTwo <= n;iTwo++) {
        
        tFour[iTwo] = sFour[iTwo];
    }
    
    // Capitalize copy
    tFour[0] = toupper(tFour[0]);
    
    // Print strings
    printf("sFour: %s\n", sFour);
    printf("tFour: %s\n", tFour);
    
    */
    

    // Notice that n = strlen(s) is defined now in the left-hand side of the for loop. It’s best not to call unneeded functions in the middle
    // condition of the for loop, as it will run over and over again. When moving n = strlen(s) to the left-hand side, the function strlen only
    // runs once.
    
    // Program 22
    
    printf("-------------------Program 22-------------------\n");
    
    // The C Language has a built-in function to copy strings called strcpy. It can be implemented as follows:
    
    /*
    
    // Get a string
    char sFiveInput[50];
    
    char *sFive = sFiveInput;
    
    printf("sFive: ");
    scanf("%s", sFive);
    
    // Allocate memory for another string
    char *tFive = malloc(strlen(sFive) + 1);
    
    // Copy string into memory
    strcpy(tFive, sFive);
    
    // Capitalize copy
    tFive[0] = toupper(tFive[0]);
    
    // Print strings
    printf("sFive: %s\n", sFive);
    printf("tFive: %s\n", tFive);
    
    */
     
    // Notice that strcpy does the same work that our for loop previously did.

    
    // Program 23
    
    printf("-------------------Program 23-------------------\n");
    
    // Both get_string and malloc return NULL, a special value in memory, in the event that something goes wrong. You can write code
    // that can check for this NULL condition as follows:
    
    /*
    
    // Get a string
    char sSixInput[50];
    
    char *sSix = sSixInput;
    
    printf("sSix: ");
    scanf("%s", sSix);
    
    // Allocate memory for another string
    char *tSix = malloc(strlen(sSix) + 1);
    
    if (sSix == NULL) {
        
        return 1;
    }
    
    // Copy string into memory
    strcpy(tSix, sSix);
    
    // Capitalize copy
    if (strlen(tSix) > 0) {
        
        tSix[0] = toupper(tSix[0]);
    }
    
    // Print strings
    printf("sSix: %s\n", sSix);
    printf("tSix: %s\n", tSix);
    
    
    // Free memory
    free(tSix);
    
    */
     
    // Notice that if the string obtained is of length 0 or malloc fails, NULL is returned. Further, notice that free lets the computer
    // know you are done with this block of memory you created via malloc.
    
    
    
    
    return 0;
}
