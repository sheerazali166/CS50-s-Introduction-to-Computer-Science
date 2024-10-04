//
//  double.c
//  Section 2
//
//  Created by Sheeraz on 10/4/24.
//

#include "double.h"

int mainTwo(void) {
    
    // Program 6
    
    printf("-----------------Program 6-----------------\n");
    
    int sequence[5];
    
    sequence[0] = 1;
    printf("%i\n", sequence[0]);
    
    for (int i = 1;i < 5;i++) {
        
        sequence[i] = sequence[i - 1] * 2;
        printf("%i\n", sequence[i]);
        
    }

    
    // Program 7
    
    printf("-----------------Program 7-----------------\n");
    
    
    int size = 5;
    int sequenceTwo[size];
    
    sequenceTwo[0] = 1;
    printf("%i\n", sequenceTwo[0]);
    
    for (int iTwo = 1;iTwo < size;iTwo++) {
        
        sequenceTwo[iTwo] = sequenceTwo[iTwo - 1] * 2;
        printf("%i\n", sequenceTwo[iTwo]);
        
    }
    
    // Program 8
    
    printf("-----------------Program 8-----------------\n");
    
    
    int sizeTwo = 8;
    int sequenceThree[sizeTwo];
    
    sequenceThree[0] = 1;
    printf("%i\n", sequenceThree[0]);
    
    for (int iThree = 1;iThree < sizeTwo;iThree++) {
        
        sequenceThree[iThree] = sequenceThree[iThree - 1] * 2;
        printf("%i\n", sequenceThree[iThree]);
        
    }


    // Program 9
    
    printf("-----------------Program 9-----------------\n");
    
    /*
    
    int sizeThree;
    
    printf("Enter a size: ");
    scanf("%d", &sizeThree);
    
    int sequenceFour[sizeThree];
    
    sequenceFour[0] = 1;
    printf("%i\n", sequenceFour[0]);
    
    for (int iFour = 1;iFour < sizeThree;iFour++) {
        
        sequenceFour[iFour] = sequenceFour[iFour - 1] * 2;
        printf("%i\n", sequenceFour[iFour]);
        
    }
     
    */
    
    return 0;
}
