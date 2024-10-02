//
//  main.c
//  C
//
//  Created by Sheeraz on 9/30/24.
//

#include <stdio.h>
#include "agree.h"
#include "meow.h"
#include "calculator.h"
#include "mario.h"

// 'cs50.h' file not found
// #include <"cs50.h">

int main(int argc, const char * argv[]) {

    
    // Program 1
    
    printf("------------------Program 1------------------\n");
    
    // Welcome!
    
    // In our previous session, we learned about Scratch, a visual programming language.
    // Indeed, all the essential programming concepts presented in Scratch will be utilized as you learn how to program any
    // programming language.
    // Recall that machines only understand binary. Where humans write source code, a list of instructions for the compute
    //that is human readable, machines only understand what we can now call machine code. This machine code is a pattern of
    //ones and zeros that produces a desired effect.
    // It turns out that we can convert source code into machine code using a very special piece of software called a
    // compiler. Today, we will be introducing you to a compiler that will allow you to convert source code in the programming
    // language C into machine code.
    // Today, in addition to learning about how to code, you will be learning about how to write good code.
    // Code can be evaluated upon three axes. First, correctness refers to “does the code run as intended?” Second, design
    // refers to “how well is the code designed?” Finally, style refers to “how aesthetically pleasing and consistent is the
    // code?”
    
    // Hello World
    
    // The integrated development environment (IDE) that is utilized for this course is Visual Studio Code, affectionately
    // referred to as , which can be accessed via that same url, or simply as *VS Code.*
    
    // One of the most important reasons we utilize VS Code is that it has all the software required for the course already
    // pre-loaded on it. This course and the instructions herein were designed with VS Code in mind.
    
    // Manually installing the necessary software for the course on your own computer is a cumbersome headache. Best always to
    // utilize VS Code for assignments in this course.
    
    // You can open VS Code at cs50.dev.
    // The compiler can be divided into a number of regions:
    
    printf("hello, world\n");
    
    // Notice that there is a file explorer on the left side where you can find your files. Further, notice that there is a
    // region in the middle called a text editor where you can edit your program. Finally, there is a command line interface,
    // known as a CLI, command line, or terminal window where we can send commands to the computer in the cloud.
    
    // We will be using three commands to write, compile, and run our first program:
    
    // code hello.c

    // make hello

    // ./hello
    
    // The first command, code hello.c creates a file and allows us to type instructions for this program. The second command,
    //make hello, compiles the file from our instructions in C and creates an executable file called hello. The last command,
    // ./hello, runs the program called hello.
    
    
    // Program 2
    
    printf("------------------Program 2------------------\n");
    
    // We can build your first program in C by typing code hello.c into the terminal window. Notice that we deliberately
    // lowercased the entire filename and included the .c extension. Then, in the text editor that appears, write code as
    // follows:
    
    printf("hello, world\n");
    
    
   // Note that every single character above serves a purpose. If you type it incorrectly, the program will not run. printf is
   // a function that can output a line of text. Notice the placement of the quotes and the semicolon. Further, notice that
   // the \n creates a new line after the words hello, world.
   
   // Clicking back in the terminal window, you can compile your code by executing make hello. Notice that we are omitting .c.
   // make is a compiler that will look for our hello.c file and turn it into a program called hello. If executing this
   // command results in no errors, you can proceed. If not, double-check your code to ensure it matches the above.
    
   // Now, type ./hello and your program will execute saying hello, world.
   
   // Now, open the file explorer on the left. You will notice that there is now both a file called hello.c and another file
   // called hello. hello.c is able to be read by the compiler: It’s where your code is stored. hello is an executable file
   // that you can run, but cannot be read by the compiler.

   // Program 3
    
    printf("------------------Program 3------------------\n");
    
   // Functions
    
   // In Scratch, we utilized the say block to display any text on the screen. Indeed, in C, we have a function called printf
   // that does exactly this.
    
   // Notice our code already invokes this function:
   
    printf("hello, world\n");
    
    // Notice that the printf function is called. The argument passed to printf is ‘hello, world\n’. The statement of code is
    // closed with a ;

    // Program 4
     
     printf("------------------Program 4------------------\n");
    
    // A common error in C programming is the omission of a semicolon. Modify your code as follows:
    
    // printf("hello, world\n")
    
    // Notice the semicolon is now gone.
    
    // In your terminal window, run make hello. You will now be met with numerous errors! Placing the semicolon back in the
    // correct position and running make hello again, the errors go away.
    
    // Notice also the special symbol \n in your code. Try removing those characters and making your program again by
    // executing make hello. Typing ./hello in the terminal window, how did your program change? This \ character is
    // called an escape character that tells the compiler that \n is a special instruction.

    
    // Program 5
     
     printf("------------------Program 5------------------\n");
    
    // Restore your program to the following:
    
    printf("hello, world\n");
 
    // Notice the semicolon and \n have been restored.
    
    // The statement at the start of the code #include <stdio.h> is a very special command that tells the compile that you
    // want to use the capabilities of a library called stdio.h, a header file. This allows you, among many other things, to
    // utilize the printf function. You can read about all the capabilities of this library on the Manual Pages. The Manual
    // Pages provide a means by which to better understand what various commands do and how they function.
    
    // Libraries are collections of pre-written functions that others have written in the past that we can utilize in
    // our code.
    
    // It turns out that CS50 has its own library called cs50.h. Let’s use this library in your program.
    
    // Program 6
     
     printf("------------------Program 6------------------\n");
    
    // Variables
    
    // Recall that in Scratch, we had the ability to ask the user “What’s your name?” and say “hello” with that name appended
    // to it.
    
    // In C, we can do the same. Modify your code as follows:
    
    /*
    
    char answer[] = "";
    
    printf("What's your name? ");
    scanf("%s", &answer);
    
    printf("%s\n", answer);
    
    */
     
    // The get_string function is used to get a string from the user. Then, the variable answer is passed to the printf
    // function. %s tells the printf function to prepare itself to receive a string.

    // Program 7
     
     printf("------------------Program 7------------------\n");
    
    // answer is a special holding place we call a variable. answer is of type string and can hold any string within it.
    // There are many data types, such as int, bool, char, and many others.
    
    // %s is a placeholder called a format code that tells the printf function to prepare to receive a string. answer is the
    // string being passed to %s.
    
    // Running make hello again in the terminal window, notice that numerous errors appear.
    
    // Looking at the errors string and get_string are not recognized by the compiler. We have to teach the compiler these
    // features by adding a library called cs50.h:
    
    /*
    
    char answerTwo[] = "";
    
    printf("What's your name? ");
    scanf("%s", answerTwo);
    
    printf("hello, %s\n", answerTwo);
     
    */
    
    // Notice that #include <cs50.h> has been added to the top of your code.
    
    // Now running make hello again in the terminal window, you can run your program by typing ./hello. The program now asks
    // for your name and then says hello with your name attached, as intended.
    
    // printf allows for many format codes. Here is a noncomprehensive list of ones you may utilize in this course:
    
    // %c
    
    // %f

    // %i

    // %li

    // %s
    
    // %s is used for string variables. %i is used for int or integer variables. You can find out more about this on the
    // Manual Pages
    
    // Conditionals
    
    // Another building block you utilized within Scratch was that of conditionals. For example, you might want to do one
    // thing if x is greater than y. Further, you might want to do something else if that condition is not met.
    
    // We look at a few examples from Scratch.
    
    // In C, you can assign a value to an int or integer as follows:
    int counter = 0;
    printf("%d \n", counter);
    
    // Notice how a variable called counter of type int is assigned the value 0.
    
    // C can also be programmed to add one to counter as follows:
    counter = counter + 1;
    printf("%d \n", counter);
    // Notice how 1 is added to the value of counter
    
    // This can be represented also as:
    counter = counter++;
    printf("%d \n", counter);
    
    // Notice how 1 is added to the value of counter. However the ++ is used instead of counter + 1
    // You can also subtract one from counter as follows:
    counter = counter--;
    printf("%d \n", counter);
    
    // Notice how 1 is removed to the value of counter.
    
    // Program 8
     
     printf("------------------Program 8------------------\n");
    
    // Using this new knowledge about how to assign values to variables, you can program your first conditional statement.
    // In the terminal window, type code compare.c and write code as follows:
    
    /*
    
    int x, y;
    
    printf("What's x? ");
    scanf("%d", &x);

    printf("What's y? ");
    scanf("%d", &y);
    
    if (x < y) {
        printf("x is less than y\n");
    }
     
    */
    
    // Notice that we create two variables, an int or integer called x and another called y. The values of these are populated
    // using the get_int function.
    
    // You can run your code by executing make compare in the terminal window, followed by ./compare. If you get any error
    // messages, check your code for errors.
    
    // Flow charts are a way by which you can examine how a computer program functions. Such charts can be used to examine the
    // efficiency of our code.
    
    // Looking at a flow chart of the above code, we can notice numerous shortcomings.
    
    // Program 9
     
     printf("------------------Program 9------------------\n");
    
    /*
    
    // We can improve your program by coding as follows:
    int xTwo, yTwo;
    
    printf("What's xTwo? ");
    scanf("%d", &xTwo);
    
    printf("What's yTwo? ");
    scanf("%d", &yTwo);
    
    if (xTwo < yTwo) {
        printf("xTwo is less than yTwo\n");
        
    } else if (xTwo > yTwo) {
        printf("xTwo is greater than yTwo\n");
        
    } else {
        printf("xTwo is equal to yTwo\n");
    }
    
    */
     
    // Notice that all potential outcomes are now accounted for.
    
    mainTwo();
    mainThree();
    mainFour();
    mainFive();
    
    return 0;
}
