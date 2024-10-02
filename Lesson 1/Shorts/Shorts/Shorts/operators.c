//
//  operators.c
//  Shorts
//
//  Created by Sheeraz on 10/2/24.
//

#include "operators.h"

int mainTwo(void) {
    
    // Program 4
    
    printf("-------------Program 4-------------\n");
    
    // Arithmetic Operators
    
    // In C we can add(+), subtract(-), multiply(*) and
    // devide(/) numbers, as expected.
    
    
    
    // int x = y + 1;
    // x = x * 5;
    
    // we also have the modulus operator, (%) which gives
    // us the remainder when the number on the left of
    // the operator is divided by the number on the right.
    
    
    int m = 13 % 4; // m is now 1
    
    printf("%d\n", m);
    
    // Program 5
    
    printf("-------------Program 5-------------\n");
    
    // Arthmetic Operators
    
    // C also provides a shorthand way to apply on
    // arithmetic operator to a single variable.
    
    // all about little x or big X
    // you purchase i achieve this is the problem
    // but you said you achieve i purchase please
    // avoid imf otherwise dogs have future plans also
    
    int xTwo = 10;
    
    xTwo = xTwo * 5;
    printf("%d\n", xTwo);
    
    xTwo *= 5;
    printf("%d\n", xTwo);

    // This trick works with all five basic arithmetic
    // operators. C provides a further shorthand for
    // incrementing or decrementing a variable by 1:
    
    printf("---------------------\n");
    
    xTwo++;
    printf("%d\n", xTwo);
    
    xTwo--;
    printf("%d\n", xTwo);
    
    // Program 6
    
    printf("-------------Program 6-------------\n");
    
    // Boolean Expressions
    
    // Boolean expressions are used in C for comparing
    // values.
    
    // All boolean expressions in C evaluate to one of two
    // possible values - true or false
    
    // We can use the result of evaluating a Boolean
    // expression in other programming constructs such
    // as deciding wich branch in a conditional to take, or
    // determining whether a loop should continue to run.
    
    
    // Sometimes when working with Boolean
    // expressions we will use variables of type bool, but
    // but we don't have to.
    
    // In C, every nonezero value equivalent to true, and
    // zero is false
    
    // Two main types of Boolean expressions: logical
    // operators and relational operators.
    
        // Logical operators
        
            // Logical AND(&&) is true if and only if both operands are
            // true, otherwise false.
    
            //------------------------------------------------//
            //      x               y               (x && y)  //
            //------------------------------------------------//
            //      true            true              true    //
            //      true            false             false   //
            //      false           true              false   //
            //      false           false             false   //
            //------------------------------------------------//
    
    
    
        // Logical Oprators
            // Logical NOT(!) inverts the value of its operand.
    
            //---------------------------------//
            //      x               !x         //
            //---------------------------------//
            //      true            false      //
            //      false           true       //
            //---------------------------------//
            
            
    
    
    // Boolean Expressions
    
        // Relational operators
    
            // These behave as you would expect them to, and appear
            // syntactically similar to how you may recall them from
            // elementary arithmetic.
            
            // less than (x < y)
            // less than or equal to (x <= y)
            // greater than (x > y)
            // Greater than or equal to (x >= y)
            
    
        // Relational Operators
    
            // C also can test two variables for equality and inequality
    
                // Equality (x == y)
                // Inequality (x != y)
    
    
            // Be careful! it's common mistake use the
            // assignment operator (=) when you intend to use the
            // equality operator (==).
    
    
    return 0;
}
