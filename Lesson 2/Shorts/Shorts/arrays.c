//
//  arrays.c
//  Shorts
//
//  Created by Sheeraz on 10/4/24.
//

#include "arrays.h"
#include "stdbool.h"

void set_array(int array[4]);
void set_int(int x);

int mainFour(void) {
    
    // Program 11
    
    printf("-----------------Program 11-----------------\n");

    // Arrays
    
    // Arrays are a fundamental data structure, and they,
    // are extremely useful!
    
    // We use arrays to hold values of the same type at
    // contiguous memory locations.
    
    // One way to analogize the notion of array is to think
    // of your local post office, which usually has a large
    // bank of post office boxes.
    
    
    //--------------------------------------------------------------------------//
    //              Arrays              //              Post Office Boxes       //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  Array is a block of contiguous  //  A mail bank is a large space on     //
    //  space in memory                 //  the wall of the post office...      //
    //                                                                          //
    //--------------------------------------------------------------------------//
    
    
    
    //--------------------------------------------------------------------------//
    //              Arrays              //              Post Office Boxes       //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  Array is a block of contiguous  //  A mail bank is a large space on     //
    //  space in memory                 //  the wall of the post office...      //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ... which has been partitioned  //  which has been partioned into       //
    //  into small, identically-sized   //  small, identically-sized blocks     //
    //  blocks of space called          //  of blocks of space called post      //
    //  elements..                      //  office boxes...                     //
    //                                                                          //
    //--------------------------------------------------------------------------//
    
    
    
    //--------------------------------------------------------------------------//
    //              Arrays              //              Post Office Boxes       //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  Array is a block of contiguous  //  A mail bank is a large space on     //
    //  space in memory                 //  the wall of the post office...      //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ... which has been partitioned  //  which has been partioned into       //
    //  into small, identically-sized   //  small, identically-sized blocks     //
    //  blocks of space called          //  of blocks of space called post      //
    //  elements..                      //  office boxes...                     //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ... each of which can store a   //  ...each of wich can hold a certain  //
    //  certain amount of data...       //  amount of email                     //
    //                                                                          //
    //--------------------------------------------------------------------------//
    
    
    
    
    //--------------------------------------------------------------------------//
    //              Arrays              //              Post Office Boxes       //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  Array is a block of contiguous  //  A mail bank is a large space on     //
    //  space in memory                 //  the wall of the post office...      //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ...which has been partitioned   //   ...which has been partioned into   //
    //  into small, identically-sized   //  small, identically-sized blocks     //
    //  blocks of space called          //  of blocks of space called post      //
    //  elements..                      //  office boxes...                     //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ...each of which can store a    //  ...each of wich can hold a certain   //
    //  certain amount of data...       //  amount of email...                  //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ... all of the same data type   //  ...all of a similar type such as    //
    //  sach as int or char...           //  letters of small packages...       //
    //                                                                          //
    //--------------------------------------------------------------------------//
    
    
    
    //--------------------------------------------------------------------------//
    //              Arrays              //              Post Office Boxes       //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  Array is a block of contiguous  //  A mail bank is a large space on     //
    //  space in memory                 //  the wall of the post office...      //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ...which has been partitioned   //   ...which has been partioned into   //
    //  into small, identically-sized   //  small, identically-sized blocks     //
    //  blocks of space called          //  of blocks of space called post      //
    //  elements..                      //  office boxes...                     //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ...each of which can store a    //  ...each of wich can hold a certain  //
    //  certain amount of data...       //  amount of email...                  //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ... all of the same data type   //  ...all of a similar type such as    //
    //  sach as int or char...          //  letters of small packages...        //
    //                                                                          //
    //--------------------------------------------------------------------------//
    //                                                                          //
    //  ...and which can be accessed    //  ...and which can be accessed        //
    //  directly by an index.           //  directly by a mailbox number.       //
    //                                                                          //
    //--------------------------------------------------------------------------//
    
    
    
    
    // Arrays
    
        // In C, the elements of an array are indexed starting
        // from 0.
    
            // This is one of major reasons we count from zero!
    
        // If an array consists of n elements, the first element
        // is located at index 0. The last element is located at
        // index (n-1)
    
        // C is very lenient. it will not prevent you from going
        // "out of bounds" of your array; be careful!
        
    
    // Arrays
    
        // Array declaration
    
            // type name[size];
    
    
        // The type is what kind of variable each element of the
        // array will be.
    
        // The name is what you want to call your array.
    
        // The size is how many elements you would like your
        // array to contain.
    
    
    
    // Arrays
    
        // Array declaration
    
            // int student_grades[40];
    
    
        // The type is what kind of variable each element of the
        // array will be.
    
        // The name is what you want to call your array.
    
        // The size is how many elements you would like your
        // array to contain.
    
    
    // Arrays
    
        // Array declaration
    
            // double menu_prices[8];
    
    
        // The type is what kind of variable each element of the
        // array will be.
    
        // The name is what you want to call your array.
    
        // The size is how many elements you would like your
        // array to contain.
    
    
    // Arrays
    
        // If you think of a single element of an array of type
        // data-type the same as you would any other variable of
        // type data-type (which, effectively, it is) then all the
        // fimiliar operations make sense.
    
    /*
    
    bool truthTable[10];
    
    truthTable[2] = false;
    
    if (truthTable[7] == true) {
        
        printf("TRUE!\n");
        
    }
    
    truthTable[10] = true;
    
    */
     
    // Array index 10 is past the end of the array (that has type 'bool[10]')
    
    
    // Program 12
    
    printf("-----------------Program 12-----------------\n");
    
    
    // Arrays
    
        // When declaring and initializing an array simultaneously,
        // there is a special syntax that may be used to fill up
        // the array with it's starting values.
    
    
    // instantiation syntax
    bool truthTableTwo[3] = { false, true, true };
    
    
    // indivisual element syntax
    bool truthTableThree[3];
    
    truthTableThree[0] = false;
    truthTableThree[1] = true;
    truthTableThree[2] = true;
    
    
    // printf("%d\n", truthTableTwo[1]);
    // printf("%d\n", truthTableThree[0]);
    
    
    // Arrays
    
        // Arrays can consists of more than a single dimension.
        // You can have as many size specifiers as you wish.
    
            // bool battleship[10][10];
    
        // You can choose to think of this as either a 10x10
        // grid of cells.
        
            // In memory though, it's really just a 100-element
            // one-dimensional array.
    
            // Multi-dimensional arrays are great abstractions
            // to help visualize game boards or other complex
            // representation.
    
    
    
    // Arrays
    
        // While we can treat indivisual elements of arrays as
        // variables, we can treat entire array themselves as
        // variables.
    
        // We cannot, for instance, assign one array to another
        // using the assignment operator. That is not legal C.
    
        // Instead, we must use a loop to copy over the element
        // one at a time.
    
    
    // Program 13
    
    printf("-----------------Program 13-----------------\n");
    
    int foo[5] = { 1, 2, 3, 4, 5 };
    int bar[5];
    
    // bar = foo; this is not legal
    
    // Array type 'int[5]' is not assignable
    
    /*
    
    printf("%d\n", foo[0]);
    printf("%d\n", foo[1]);
    printf("%d\n", foo[2]);
    printf("%d\n", foo[3]);
    printf("%d\n", foo[4]);

    */
     
    /*
    
    printf("%d\n", bar[0]);
    printf("%d\n", bar[1]);
    printf("%d\n", bar[2]);
    printf("%d\n", bar[3]);
    printf("%d\n", bar[4]);

    */

    // Program 14
    
    printf("-----------------Program 14-----------------\n");
    
    int fooTwo[5] = { 1, 2, 3, 4, 5 };
    int barTwo[5];
    
    for (int j = 0;j < 5;j++) {
        
        barTwo[j] = fooTwo[j];
    }

    
    printf("%d\n", fooTwo[0]);
    printf("%d\n", fooTwo[1]);
    printf("%d\n", fooTwo[2]);
    printf("%d\n", fooTwo[3]);
    printf("%d\n", fooTwo[4]);

    printf("-------------------------\n");
    
    printf("%d\n", barTwo[0]);
    printf("%d\n", barTwo[1]);
    printf("%d\n", barTwo[2]);
    printf("%d\n", barTwo[3]);
    printf("%d\n", barTwo[4]);
    
    
    // Arrays
    
        // Recall the most variables in C are passed by value
        // in function calls.
    
        // Arrays do not follow this rule. Rather, they are
        // passed by reference. callee recieves the actual
        // array, not a copy of it.
    
            // What does that mean when the callee manipulates
            // elements of the array?
    
        // For now, we'll gloss over why arrays have this
        // special property, but we'll return to it soon
        // enough!
        

    // Program 15
    
    printf("-----------------Program 15-----------------\n");
    
    int a = 10;
    int b[4] = { 0, 1, 2, 3 };
    
    set_int(a);
    set_array(b);
    
    printf("%d %d\n", a, b[0]);
    
    return 0;
}

void set_array(int array[4]) {
    
    array[0] = 22;
}

void set_int(int x) {
    
    x = 22;
}
