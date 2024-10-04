//
//  hi.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "hi.h"

int mainFour(void) {
    
    // Program 15
    
    printf("-----------------Program 15-----------------\n");
    
    // Strings
    
    // A string is simply an array of variables of type char: an array of characters.
    
    // Considering the following image, you can see how a string is an array of characters that begins with the first
    // character and ends with a special character called a NUL character:
    
    // Imagining this in decimal, your array would look like the following:
    
    // Implementing this in your own code, type code hi.c in the terminal window and write code as follows:
    
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    
    printf("%c%c%c\n", c1, c2, c3);
    
    // Notice that this will output a string of characters.

    // Program 16
    
    printf("-----------------Program 16-----------------\n");
    
    // Similarly, make the following modification to your code:
    
    char c1Two = 'H';
    char c2Two = 'I';
    char c3Two = '!';
    
    printf("%i %i %i\n", c1Two, c2Two, c3Two);
    
    // Notice that that ASCII codes are printed by replacing %c with %i.
    
    // Program 17
    
    printf("-----------------Program 17-----------------\n");
    
    // To further understand how a string works, revise your code as follows:
    
    char s[10] = "HI!"; // now days is the popular
    printf("%c%c%c\n", s[0], s[1], s[2]);

    // printf("%d\n", (72 + 73 + 33));
    // printf("%d\n", (72 - 73 - 33));
    // printf("%d\n", (178 - 34)); // once again toward anushka
    // printf("%d\n", (2024 - 168));
    
    // Notice how the printf statement presents three values from our array called s.

    // Program 18
    
    printf("-----------------Program 18-----------------\n");
    
    // As before, we can replace %c with %i as follows:
    
    char s1[10] = "HI!";
    
    printf("%i %i %i %i\n", s1[0], s1[1], s1[2], s1[3]);
    
    // Notice that this prints the string’s ASCII codes, including NUL.
    
    // Program 19
    
    printf("-----------------Program 19-----------------\n");
    
    // Let’s imagine we want to say both HI! and BYE!. Modify your code as follows:
    
    char s2[10] = "HI!";
    char t[20] = "BYE!";
    
    printf("%s\n", s2);
    printf("%s\n", t);
    
    // Notice that two strings are declared and used in this example.
    // You can visualize this as follow:

    // Program 20
    
    printf("-----------------Program 20-----------------\n");
    
    // We can further improve this code. Modify your code as follows:
    
    char words[] = "HI!";
    char words2[] = "BYE!";
    
    
    printf("%s\n", words);
    printf("%s\n", words2);
    
    
    return 0;
}

