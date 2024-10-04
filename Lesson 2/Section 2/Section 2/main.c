//
//  main.c
//  Section 2
//
//  Created by Sheeraz on 10/4/24.
//

#include <stdio.h>
#include "double.h"
#include "alphabetical.h"
#include "argv.h"
#include "mario.h"

int main(int argc, const char * argv[]) {

    // Program 1
    
    printf("-----------------Program 1-----------------\n");
    
    printf("Hello");
    printf("\n");

    // Program 2
    
    printf("-----------------Program 2-----------------\n");
    
    int nights[5];

    
    // Program 3
    
    printf("-----------------Program 3-----------------\n");
    
    int nightsTwo[5] = { 7, 8, 6, 7, 8 };

    // Program 4
    
    printf("-----------------Program 4-----------------\n");
    
    int nightsThree[5];

    // Program 5
    
    printf("-----------------Program 5-----------------\n");
    
    mainTwo();
    
    // Program 10
    
    printf("-----------------Program 10-----------------\n");
    
    mainThree();
    
    // Program 18
    
    printf("-----------------Program 18-----------------\n");
    
    int height;
    
    printf("Height: ");
    scanf("%d", &height);
    
    // argv
    
    // Write a program that prints each command-line argument given to the program
    
    // Program 19
    
    printf("-----------------Program 19-----------------\n");
    
    /*
    
    int mainFour(int argc, string argv[]) {
        
    }
    */

    // Program 20
    
    printf("-----------------Program 20-----------------\n");
    
    mainFive(argc, argv);
    
    // Program 22
    
    printf("-----------------Program 22-----------------\n");
    
    mainSix(argc, argv);
    
    return 0;
}
