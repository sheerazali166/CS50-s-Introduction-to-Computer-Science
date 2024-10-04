//
//  main.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include <stdio.h>
#include "buggy.h"
#include "scores.h"
#include "hi.h"
#include "length.h"
#include "uppercase.h"
#include "greet.h"
#include "status.h"


int main(int argc, const char * argv[]) {

    // Program 1
    
    printf("-----------------Program 1-----------------\n");
    
    // Welcome!
    
    // In our previous session, we learned about C, a text-based programming language.
    
    // This week, we are going to take a deeper look at additional building-blocks that will support our goals of learning
    // more about programming from the bottom up.
    
    // Fundamentally, in addition to the essentials of programming, this course is about problem-solving. Accordingly, we will
    // also focus further on how to approach computer science problems.
    
    // Compiling
    
    // Encryption is the act of hiding plain text from prying eyes. decrypting, then, is the act of taking an encrypted piece
    // of text and returning it to a human-readable form.
    
    // An encrypted piece of text may look like the following:
    
    // Recall that last week you learned about a compiler, a specialized computer program that converts source code into
    // machine code that can be understood by a computer.
    
    // For example, you might have a computer program that looks like this:
    
    printf("hello, world\n");
    
    // A compiler will take the above code and turn it into the following machine code:
    // VS Code, the programming environment provided to you as a CS50 student, utilizes a compiler called clang or c language.
    // If you were to type make hello, it runs a command that executes clang to create an output file that you can run as a
    // user.
    
    // VS Code has been pre-programmed such that make will run numerous command line arguments along with clang for your
    // convenience as a user.
    
    // Program 2
    
    printf("-----------------Program 2-----------------\n");
    
    // Consider the following code:
    
    /*
    
    char name[20];
    
    printf("What's your name? ");
    scanf("%s", name);
    
    
    printf("hello, %s\n", name);
    
    */
     
    // You can attempt to enter into the terminal window: clang -o hello hello.c. You will be met by an error that indicates
    // that clang does not know where to find the cs50.h library.
    
    // Attempting again to compile this code, run the following command in the terminal window: clang -o hello hello.c -lcs50.
    // This will enable the compiler to access the cs50.h library.
    
    // Running in the terminal window ./hello, your program will run as intended.
    
    // While the above is offered as an illustration, such that you can understand more deeply the process and concept of
    // compiling code, using make in CS50 is perfectly fine and the expectation!
    
    // Program 3
    
    printf("-----------------Program 3-----------------\n");
    
    // Compiling involves major steps, including the following:
    
    // First, preprocessing is where the header files in your code, designated by a # (such as #include <cs50.h>) are
    // effectively copied and pasted into your file. During this step, the code from cs50.h is copied into your program.
    // Similarly, just as your code contains #include <stdio.h>, code contained within stdio.h somewhere on your computer is
    // copied to your program. This step can be visualized as follows:

    /*
    
    char nameTwo[20];
    
    printf("What's your nameTwo? ");
    scanf("%s", nameTwo);
    
    printf("hello, %s\n", nameTwo);
    
    */
     
    // Second, compiling is where your program is converted into assembly code. This step can be visualized as follows:
    
    // Third, assembling involves the compiler converting your assembly code into machine code. This step can be visualized
    // as follows:
    
    // Finally, during the linking step, code from your included libraries are converted also into machine code and combined
    // with your code. The final executable file is then outputted.

    // Program 4
    
    printf("-----------------Program 4-----------------\n");
    
    // Debugging
    
    // Everyone will make mistakes while coding.
    // Consider the following image from last week:
    
    // Further, consider the following code that has a bug purposely inserted within it:
    
    for (int i = 0;i <= 3;i++) {
        printf("#\n");
    }

    // Program 5
    
    printf("-----------------Program 5-----------------\n");
    
    mainTwo();
    
    // Program 9
    
    printf("-----------------Program 9-----------------\n");
    
    mainThree();
    
    // Program 14
    
    printf("-----------------Program 14-----------------\n");
    
    mainFour();

    // Program 21
    
    printf("-----------------Program 21-----------------\n");
    
    mainFive();
    
    // Program 25
    
    printf("-----------------Program 25-----------------\n");
    
    mainSix();
    
    // Program 29
    
    printf("-----------------Program 29-----------------\n");
    
    mainSeven(argc, argv);
    
    // Program 32
    
    printf("-----------------Program 32-----------------\n");
    
    mainEight(argc, argv);
    
    return 0;
}
