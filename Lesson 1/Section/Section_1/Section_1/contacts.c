//
//  contacts.c
//  Section_1
//
//  Created by Sheeraz on 10/2/24.
//

#include "contacts.h"

int mainThree(void) {
    
    // Program 10
    
    printf("---------------Program 10---------------\n");
    
    // Hello, contacts!
    
    // Lets write a program that store (and prints out!) a user's contact information
    
    /*
    
    char name[20];
    int age;
    char number[20];
    
    printf("What's your name? ");
    scanf("%s", name);
    
    printf("What's your age? ");
    scanf("%d", &age);
    
    printf("What's your phone number? ");
    scanf("%s", number);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Number: %s\n", number);
    
    */

    // Program 11
    
    printf("---------------Program 11---------------\n");
    
    int j = 0;
    
    while (j < 4) {
        printf("#");
        j++;
    }
    
    printf("\n");

    // Program 12
    
    printf("---------------Program 12---------------\n");
    
    for (int jTwo = 0;jTwo < 4;jTwo++) {
        printf("#");
    }
    printf("\n");
    
    // Program 13
    
    printf("---------------Program 13---------------\n");
    
    // Mario
    
    // Let's write a program to print a right-aligned pyramid
    
    for (int i = 0;i < 4;i++) {
        for (int jThree = 0;jThree < 4;jThree++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
