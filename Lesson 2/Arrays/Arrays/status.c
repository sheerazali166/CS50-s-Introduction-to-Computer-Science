//
//  status.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "status.h"

int mainEight(int argc, const char * argv[]) {
    
    // Program 33
    
    printf("-----------------Program 33-----------------\n");
    
    // When a program ends, a special exit code is provided to the computer.
    
    // When a program exits without error, a status code of 0 is provided the computer. Often, when an error occurs that
    // results in the program ending, a status of 1 is provided by the computer.
    
    // You could write a program as follows that illustrates this by typing code status.c and writing code as follows:
    
    
    
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    
    
    
    // Notice that if you fail to provide ./status David, you will get an exit status of 1. However, if you do provide
    // ./status David, you will get an exit status of 0.
     
    // You can imagine how you might use portions of the above program to check if a user provided the correct number of
    // command-line arguments.
    
    // Cryptography
    
    // Cryptography is the art of ciphering and deciphering a message.
    // plaintext and a key are provided to a cipher, resulting in ciphered text.
    
    // The key is a special argument passed to the cipher along with the plaintext. The cipher uses the key to make decisions
    // about how to implement its cipher algorithm.
    
    // Summing Up
    
    // In this lesson, you learned more details about compiling and how data is stored within a computer. Specifically,
    // you learned…
    
    // Generally, how a compiler works.
    // How to debug your code using four methods.
    // How to utilize arrays within your code.
    // How arrays store data in back to back portions of memory.
    // How strings are simply arrays of characters.
    // How to interact with arrays in your code.
    // How command-line arguments can be passed to your programs.
    // The basic building-blocks of cryptography.
    
    // See you next time!
    
    
    
    return 0;
}
