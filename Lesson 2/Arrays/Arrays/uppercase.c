//
//  uppercase.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "uppercase.h"
#include "string.h"
#include "ctype.h"

int mainSix(void) {
    
    // Program 26
    
    printf("-----------------Program 26-----------------\n");
    
    // ctype.h is another library that is quite useful. Imagine we wanted to create a program that converted all lowercase
    // characters to uppercase ones. In the terminal window type code uppercase.c and write code as follows:
    
    /*
    
    char s[50];
    
    printf("Before: ");
    scanf("%s", s);
    
    printf("After: ");
    
    for (long i = 0, n = strlen(s);i < n;i++) {
        
        if (s[i] >= 'a' && s[i] <= 'z') {
            printf("%c", s[i] - 32);
            
        } else {
            printf("%c", s[i]);
        }
    }
    
    printf("\n");
    
    */
    
    // Notice that this code iterates through each value in the string. The program looks at each character. If the character
    // is lowercase, it subtracts the value 32 from it to convert it to uppercase.
    
    // Recalling our previous work from last week, you might remember this ASCII values chart:
    
    // When a lowercase character has 32 subtracted from it, it results in an uppercase version of that same character.

    // Program 27
    
    printf("-----------------Program 27-----------------\n");
    
    // While the program does what we want, there is an easier way using the ctype.h library. Modify your program as follows:
    
    /*
    
    char s2[50];
    
    printf("Before: ");
    scanf("%s", s2);
    
    printf("After: ");
    
    for (long i2 = 0, n2 = strlen(s2);i2 < n2;i2++) {
        
        if (islower(s2[i2])) {
            printf("%c", toupper(s2[i2]));
            
        } else {
            
            printf("%c", s2[i2]);
        }
    }
    
    printf("\n");
    
   */
    
    // Notice that the program iterates through each character of the string. The toupper function is passed s[i]. Each
    // character (if lowercase) is converted to uppercase.

    // Program 28
    
    printf("-----------------Program 28-----------------\n");
    
    // It’s worth mentioning that toupper automatically knows to uppercase only lowercase characters. Hence, your code can be
    // simplified as follows:
    
    /*
    
    char s3[50];
    
    printf("Before: ");
    scanf("%s", s3);
    
    printf("After: ");
    
    for (long i3 = 0, n3 = strlen(s3);i3 < n3;i3++) {
        
        printf("%c", toupper(s3[i3]));
    }
    
    printf("\n");
    
    */
     
    // Notice that this code uppercases a string using the ctype library.
    // You can read about all the capabilities of the ctype library on the Manual Pages.
    
    
    return 0;
}
