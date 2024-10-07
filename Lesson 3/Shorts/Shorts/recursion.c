//
//  recursion.c
//  Shorts
//
//  Created by Sheeraz on 10/7/24.
//

#include "recursion.h"

int mainSix(void) {
    
    // Program 10
    
    printf("---------------Program 10---------------\n");
    
    // Recursion
    
    // We might describe an elementation of an algorithm as being
    // particularly "elegant" if it solves a problem in a way that
    // is both interesting and easy to visualize.
    
    // The technique of recursion is a very common way to implement
    // sach an "elegent" solution.
    
    // The definition of a recursive function is one that, as part of
    // its execution, invokes itself.
    
    
    // The factorial function(n!) is defined over all positive integers.
    // n! equals all of the positive integers less than or equal to n,
    // multiplied together.
    
    // Thinking in term of programming, we'll define the mathematical
    // function n! as fact(n).
    
    
    // fact(1) = 1
    // fact(2) = 2 * 1
    // fact(3) = 3 * 2 * 1
    // fact(4) = 4 * 3 * 2 * 1
    // fact(5) = 5 * 4 * 3 * 2 * 1
    // ...
    
    // fact(1) = 1
    // fact(2) = 2 * fact(1)
    // fact(3) = 3 * 2 * 1
    // fact(4) = 4 * 3 * 2 * 1
    // fact(5) = 5 * 4 * 3 * 2 * 1
    // ...
    
    // fact(1) = 1
    // fact(2) = 2 * fact(1)
    // fact(3) = 3 * fact(2)
    // fact(4) = 4 * 3 * 2 * 1
    // fact(5) = 5 * 4 * 3 * 2 * 1
    // ...
    
    // fact(1) = 1
    // fact(2) = 2 * fact(1)
    // fact(3) = 3 * fact(2)
    // fact(4) = 4 * fact(3)
    // fact(5) = 5 * 4 * 3 * 2 * 1
    // ...
    
    // fact(1) = 1
    // fact(2) = 2 * fact(1)
    // fact(3) = 3 * fact(2)
    // fact(4) = 4 * fact(3)
    // fact(5) = 5 * fact(4)
    // ...
    
    
    // fact(n) = n * fact(n - 1)
    
    
    // Recursion
    
    // This form the basis for a recursive definition of the factorial function
    
    // Every recursive function has two cases that could apply, given an input.
    
    // The base case, which when triggered will terminate the recursive
    // process.
    
    // The recursive case, which is where the recursion will actually occur.
    
    
    
    // fact(1) = 1
    // fact(2) = 2 * fact(1)
    // fact(3) = 3 * fact(2)
    // fact(4) = 4 * fact(3)
    // fact(5) = 5 * fact(4)
    // ...
    
    
    // int fact(int n) {
    
    // the base case
    // recursive case
    
    // }
    
    
    // int factTwo(int nTwo) {
    
    // if (nTwo == 1) {
    
    // return 1
    
    // }
    
    // recursive case
    
    // }
    
    // fact(1) = 1
    // fact(2) = 2 * fact(1)
    // fact(3) = 3 * fact(2)
    // fact(4) = 4 * fact(3)
    // fact(5) = 5 * fact(4)
    // ...
    
    
    // int factThree(int nThree) {
    
    // if (nThree == 1) {
    
    // return 1
    
    // } else {
    
    
    // return nThree * factThree(nThree - 1);
    
    // }
    // }
    
    
    // int factFour(int nFour) {
    
    // if (nFour == 1) {
    // return 1
    
    // else
    // return nFour * factFour(nFour - 1);
    
    // }
    
    
    // Recursion
    
    // In general, but not always, recursive functions replace loops in
    // non-recursive functions.
    
    
    // int factFive(int nFive) {                                  int factSix(int nSix) {
    
    // if (nFive == 1) {                                                  int product
    
    // return 1                                                           while (nSix > 0) {
    
    // else                                                                  product *= nSix
    // return nFive * factFive(nFive - 1);                                   nSix --;
    
                                                                  // }
    
                                                                  // return product;
  
    // }                                                          }
    
    
    // Recursive
    
    // In gerneral, but not always, recursive functions replace loops in
    // non-recursive functions.
    
    // It's also possible to have more than one base or recursive case,
    // if the program might recurse or terminate in different ways,
    // depending on the input being passed in.
    
    // Multiple base cases: The fibonacci number sequence is defined
    // as follows:
    
        // The first element is 0.
        // The second element is 1.
        // The n^th is the sum of the (n-1)^th and (n-2)^th elements.
    
    // Multiple recursive cases: The collatz conjecture.
    
    
    // The collatz conjecture is applies to positive integers and
    // speculates that it is always possible to get "back to 1" if
    // you follow these steps:
    
        // if n is 1, stop.
        // Otherwise, if n is even, repeat this process on n / 2
        // Otherwise, if n is odd, repeat this process on 3n + 1
    
    
    // Write a recursive function collatz(n) that calculates how
    // many steps it takes to get to 1 if you start from n and
    // recurse as indicated above.
    
    
    //-----------------------------------------------------------------------------------------------------------------------------------------//
    //      n       |      collatz(n)      |                                        steps                                                      //
    //-----------------------------------------------------------------------------------------------------------------------------------------//
    //      1       |         0            |    1                                                                                              //
    //      2       |         1            |    2 -> 1                                                                                         //
    //      3       |         7            |    3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1                                                         //
    //      4       |         2            |    4 -> 2 -> 1                                                                                    //
    //      5       |         5            |    5 -> 16 -> 8 -> 4 -> 2 -> 1                                                                    //
    //      6       |         8            |    6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1                                                    //
    //      7       |         16           |    7 -> 22 -> 11 -> 34 -> 17 -> 52 -> 26 -> 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1   //
    //      8       |         3            |    8 -> 4 -> 2 -> 1                                                                               //
    //      15      |         17           |    15 -> 46 -> 23 -> 70 -> ... -> 8 -> 4 -> 2 -> 1                                                //
    //      27      |         111          |    27 -> 82 -> 41 -> 124 -> ... -> 8 -> 4 -> 2 -> 1                                               //
    //      50      |         24           |    50 -> 25 -> 76 -> 38 -> ... 8 -> 4 -> 2 -> 1                                                   //
    //-----------------------------------------------------------------------------------------------------------------------------------------//

    
    // The collatz conjecture is applies to positive integers and
    // speculates that it is always possible to get "back to 1" if
    // you follow these steps:
    
        // if n is 1, stop.
        // Otherwise, if n is even, repeat this process on n / 2
        // Otherwise, if n is odd, repeat this process on 3n + 1
    
    
    // Write a recursive function collatz(n) that calculates how
    // many steps it takes to get to 1 if you start from n and
    // recurse as indicated above.
    
    
    // Recursion
    
    // int collatz(nSeven) {
    
        // base case
        // if (nSeven == 1)
            // return 0
    
        // even numbers
        // else if ((nSeven % 2) == 0)
            // return 1 + collatz(nSeven / 2)
    
        // odd numbers
        // else
            // return 1 + collatz(3*nSeven + 1)
    
    // }
    
    
    
    return 0;
}


