//
//  main.c
//  Section_1
//
//  Created by Sheeraz on 10/2/24.
//

#include <stdio.h>
#include "mario.h"
#include "contacts.h"
#include "marioTwo.h"

int main(int argc, const char * argv[]) {

    // Program 1
    
    printf("---------------Program 1---------------\n");
    
    // Type    assignment operator
    int calls = 3; // value
        // name
    
    // Calls || 3 ||
    
    
    printf("Calls: %d\n", calls);
    
    // Program 2
    
    printf("---------------Program 2---------------\n");
    
    
    // Why have data type
    int country_code = 65;
    
    printf("Country Code: %d\n", country_code);

    // Program 3
    
    printf("---------------Program 3---------------\n");
    
    int callsTwo = 4;
    
    callsTwo = callsTwo + 1;
    callsTwo = callsTwo - 2;
    callsTwo = callsTwo * 3;
    callsTwo = callsTwo / 2;
    
    // "Truncation"
    printf("callsTwo  = %d\n", callsTwo);
    

    // Program 4
    
    printf("---------------Program 4---------------\n");
    
    /*
    
    int callsThree;
    
    printf("callsThree: ");
    scanf("%d", &callsThree);

    */
     
    // Program 5
    
    printf("---------------Program 5---------------\n");
    
    int callsFour = 4;
    printf("calls is %i\n", callsFour);
    
    // "calls is 4"
    
    // Types and format code
    
    // int (%i)
    // float (%f)
    // char (%c)
    // string (%s)
    
    // if-cs
    // s is not available in c
    
    // Program 6
    
    printf("---------------Program 6---------------\n");

    mainTwo();
    mainThree();
    mainFour();
    
    return 0;
}
