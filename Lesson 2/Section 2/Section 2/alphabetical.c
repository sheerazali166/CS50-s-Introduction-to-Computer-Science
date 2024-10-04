//
//  alphabetical.c
//  Section 2
//
//  Created by Sheeraz on 10/4/24.
//

#include "alphabetical.h"
#include <string.h>

int mainThree(void) {
    
    // Program 11
    
    printf("-----------------Program 11-----------------\n");
    
    /*
    
    char phrase[100];
    
    printf("Enter a phrase: ");
    scanf("%s", phrase);
    
    long length = strlen(phrase);
    
    for (long i = 0;i < length;i++) {
        printf("%c", phrase[i]);
    }
    
    */
     
    // Program 12
    
    printf("-----------------Program 12-----------------\n");
    
    /*
    
    char phraseTwo[100];
    
    printf("Enter a phraseTwo: ");
    scanf("%s", phraseTwo);
    
    long lengthTwo = strlen(phraseTwo);
    
    for (long iTwo = 0;iTwo < lengthTwo;iTwo++) {
        printf("%c", phraseTwo[iTwo]);
    }
    
    printf("\n");
    
    */
     
    // Program 13
    
    printf("-----------------Program 13-----------------\n");
    
    /*
    
    char phraseThree[100];
    
    printf("Enter a phraseThree: ");
    scanf("%s", phraseThree);
    
    long lengthThree = strlen(phraseThree);
    
    for (long iThree = 0;iThree < lengthThree;iThree++) {
        printf("%i", phraseThree[iThree]);
    }
    
    printf("\n");
    
    */
     
    // Program 14
    
    printf("-----------------Program 14-----------------\n");
    
    /*
    
    char phraseFour[100];
    
    printf("Enter a phraseFour: ");
    scanf("%s", phraseFour);
    
    long lengthFour = strlen(phraseFour);
    
    for (long iFour = 0;iFour < lengthFour;iFour++) {
        printf("%i ", phraseFour[iFour]);
    }
    
    printf("\n");
    
    */
     
    // Program 15
    
    printf("-----------------Program 15-----------------\n");
    
    /*
    
    char phraseFive[100];
    
    printf("Enter a phraseFive: ");
    scanf("%s", phraseFive);
    
    long lengthFive = strlen(phraseFive);
    
    for (long iFive = 0;iFive < lengthFive;iFive++) {
        
        // Check if characters are NOT alphabetical
        if (phraseFive[iFive] > phraseFive[iFive + 1]) {
            
            printf("Not in alphabetical order.\n");
            return 0;
        }
        
    }

    */
    
    // Program 16
    
    printf("-----------------Program 16-----------------\n");
    
    /*
    
    char phraseSix[100];
    
    printf("Enter a phraseSix: ");
    scanf("%s", phraseSix);
    
    long lengthSix = strlen(phraseSix);
    
    for (long iSix = 0;iSix < lengthSix - 1;iSix++) {
        
        // Check if characters are NOT alphabetical
        if (phraseSix[iSix] > phraseSix[iSix + 1]) {
            
            printf("Not in alphabetical order.\n");
            return 0;
        }
        
    }
     
    */
    
    // Program 17
    
    printf("-----------------Program 17-----------------\n");
    
    char phraseSeven[100];
    
    printf("Enter a phraseSeven: ");
    scanf("%s", phraseSeven);
    
    long lengthSeven = strlen(phraseSeven);
    
    for (long iSeven = 0;iSeven < lengthSeven - 1;iSeven++) {
        
        // Check if characters are NOT alphabetical
        if (phraseSeven[iSeven] > phraseSeven[iSeven + 1]) {
            
            printf("Not in alphabetical order.\n");
            return 0;
        }
        
    }
    
    printf("Alphabetical order!\n");
    
    return 0;
}
