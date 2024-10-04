//
//  functions.c
//  Shorts
//
//  Created by Sheeraz on 10/4/24.
//

#include "functions.h"
#include "stdbool.h"

// declare functions
int add_two_intsFive(int aTen, int bTen);

bool valid_triangle(float xSix, float ySix, float zThree);

int mainTwo(void) {
    
    // Program 2
    
    printf("-----------------Program 2-----------------\n");
    
    // Function
    
    // So far, all the programs we've been writing in the
    // course have been written inside of main().
    
    // The hasn't been a problem yet, but it could be if
    // our programs start to become unwiedly.
    
    // C and nearly all languages developed since allow us
    // to write functions, sometimes also known as
    // procedures, methods, or subroutines.
    
    // Let's see what functions are all about.
    
    
    // What is a function?
    
    // A black box with a set of 0+ inputs and 1 output.
    
    // ---> func(a, b, c) -> z
    // ---> funcTwo(aTwo = 3, bTwo = 6, cTwo = 7) -> 16
    
    // mult(aThree = 4, bThree = 5) -> 20
    
    
    // Why call it a black box?
    
    // if we aren't writing a functions ourselves, we don't
    // need to know the underlying implementation.
    
    // multTwo(aFour, bFour):
        // output aFour * bFour

    
    // Why call it a black box?
    
    // if we aren't writing a functions ourselves, we don't
    // need to know the underlying implementation.
    
    // multThree(aFive, bFive):
        // set counter to 0
        // repeat bFive times
            // add aFive to counter
        // output counter
    
    
    // Why call it a black box?
    
    // if we aren't writing a functions ourselves, we don't
    // need to know the underlying implementation.
    
    // That's part of the contract of using functions. The
    // behavior is typically predictable based on that name.
    // That's why most functions have clear, obvious(ish)
    // names, and are well-documented.
    
    // Why use functions?
    
        // Organization
    
            // Functions help break up a complicated problem into more
            // manageable subparts.
    
        // Simplification
    
            // Smaller components tend to be easier to design,
            // implemenet, and debug.
    
        // Reusability
    
            // Functions can be recycled; you only need to write them
            // once, but can use them as often as you need!
    
    
    // Function Declarations.
    
        // The first step to creating a function is to declare it. This
        // gives the compiler a heads-up that's a user-written
        // function appears in the code.
    
        // Function declarations should always go a top your code,
        // before you begin writing main().
    
        // There is a standard form that every function
        // declaration follows.
    
    
    // Function Declarations.
    
        // return-type name(argument-list)
        
      // The return-type is what kind of variable the
      // function will output.
    
      // The name is what you want to call your function.
    
      // The argument-list is the comma-separated set of
      // inputs to your function, each of which has a type and a
      // name
    
    
    // Function to add two integers.
    
        // int add_two_ints(int aSix, int bSix);
    
      // The sum of two integers is going to be an integer as
      // well
    
      // Given what this function does, make sure to give it an
      // appropriate name.
    
      // There are two inputs to this function, and we need to
      // give a name to each of them for purposes of the
      // function. There's nothing important about these inputs
      // as far as we know, so giving them simple names is okay.
    
    
    // A function to multiply two floating point numbers.
    
    
    // A function to multiply two floating point numbers.
        
        // float mult_two_reals(float x, float y);
    
      // The product of two floating point numbers is also a
      // floating point number.
    
      // Let's be sure to give this a relevant name.
    
      // Again, the names of these particular inputs don't seem
      // to be important, so we can call them anything simple.
    
    
    // A function to multiply two floating point numbers.
        
        // double mult_two_realsTwo(double xTwo, double yTwo);
    
      // The product of two floating point numbers is also a
      // floating point number.
    
      // Let's be sure to give this a relevant name.
    
      // Again, the names of these particular inputs don't seem
      // to be important, so we can call them anything simple.
    
    
    // Function Definitions
    
        // The second step to creating a function is to define it.
        // This allows for predictable behavior when the function
        // is called with inputs.
    
        // Let's try to define mult_two_realsTwo(), from a
        // moment ago.
    
    
    // Functions
        
        // A function definition looks almost identical to a
        // function, declaration, with a small change.
    
            // float mult_two_realsThree(float xThree, float yThree);
    
            // float mult_two_realsThree(float xThree, float yThree) {
            
                    // float product = xThree * ythree;
                        
                    // return product;
            
            // }
    
            // How would you fill in this black box?
    
    
        // A function definition looks almost identical to a
        // function, declaration, with a small change.

            // float mult_two_realsFour(float xFour, float yFour);

            // float mult_two_realsFour(float xFour, float yFour) {
            
                        
                    // return xFour * yFour;
            
            // }

            // How would you fill in this black box?
    
    
        // Now, take a moment and try to define
        // add_two_intsTwo(), from a moment ago.
    
        // int add_two_intsTwo(int aSeven, int bSeven);
    
        // int add_two_intsTwo(int aSeven, int bSeven) {
    
            
        
        // }
    
        // Example Two
        
        // Now, take a moment and try to define
        // add_two_intsThree(), from a moment ago.

        // int add_two_intsThree(int aEight, int bEight);

        // int add_two_intsThree(int aEight, int bEight) {

                // int sum; // declaration variable
                // sum = aEight + bEight; // calculate the sum
                // return sum;  // give result back
        
        // }
    
    
        // Example Three
        
        // Now, take a moment and try to define
        // add_two_intsFour(), from a moment ago.

        // int add_two_intsFour(int aNine, int bNine);

        // int add_two_intsFour(int aNine, int bNine) {

                   // int sumTwo = 0;
    
                   // if (aNine > 0)
                        // for (int i = 0; i < aNine;sumTwo++, i++);
                   // else
                        // for (int iTwo = aNine;iTwo < 0;sumTwo--, iTwo++)
                   // if (bNine > 0)
                        // for (int iThree = 0; iThree < bNine;sumTwo++, iThree++);
                   // else
                        // for (int iFour = bNine;iFour < 0;sumTwo--, iFour++);
    
                   // return sumTwo;
                    
        
        // }
    
         
        // Function calls
        
            // Now that's you've created a function, time to use it!
    
            // To call a function, simply pass it appropriate arguments
            // and assign its return value to something of the correct
            // type.
    
            // To illustrate this, let's have a look at adder-1.c
   
    /*
    
    int xFive, yFive;
    
    // ask user for input
    printf("Give me an integer: ");
    scanf("%d", &xFive);
    
    printf("Give me another integer: ");
    scanf("%d", &yFive);
    
    // Add two numbers together via a function call
    int zTwo = add_two_intsFive(xFive, yFive);
    
    // output the result
    printf("The sum of %i and %i is %i!\n", xFive, yFive, zTwo);
    
    */
     
    // Functions
    
        // Function Miscellany
            
            // Recall from our discussion of data types that function
            // can sometimes take no inputs. In that case, we declare
            // function as having a void argument list.
    
            // Recall also that functions sometimes do not have an
            // output. In that case, we declare the function as having
            // a void return type.
    
    
        // Practice Problem
    
            // Declare a write a function called valid_triangle
            // that takes three real numbers representing the lengths
            // of the three sides of a triangle as its arguments, and
            // outputs either true or false, depending on whether
            // those three lengths are capable of making a triangle
    
    
        // Note the following rules about triangles:
        
            // A triangle may only have sides with positive length.
            
            // The sum of the lengths, of any two sides of the traingle must
            // be greater than the length of the third side.

    // Program 3
    
    printf("-----------------Program 3-----------------\n");
    
     bool triangle =  valid_triangle(5, 7, 12);
     printf("%d\n", triangle);
    
    if (triangle == 0) {
        
        printf("False\n");

    } else {
        printf("True\n");
    }
        
    
    
    return 0;
}

int add_two_intsFive(int aTen, int bTen) {
    
    int sumThree = aTen + bTen;
    
    return sumThree;
}

bool valid_triangle(float xSix, float ySix, float zThree) {
    
    // check for all positives sides
    if (xSix <= 0 || ySix <= 0 || zThree <= 0) {
        
        return false;
    }
    
    // check that sum of any two sides greater than third
    if ((xSix + ySix <= zThree) || (xSix + zThree <= ySix) || (ySix + zThree <= xSix)) {
        
        return false;
    }
    
    // if we passed both tests, we're good!
    return true;
}
