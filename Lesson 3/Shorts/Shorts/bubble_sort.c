//
//  bubble_sort.c
//  Shorts
//
//  Created by Sheeraz on 10/7/24.
//

#include "bubble_sort.h"

int mainFour(void) {
    
    
    // Program 6
    
    printf("---------------Program 6---------------\n");
    
    // Bubble Sort
    
        // In bubble sort, the idea of the algorithm is to move higher valued
        // elements generally towards the right and lower value elements
        // generalyy toward the left.
    
    
    // In pseudocode:
    
        // Set swap counter to a non-zero value
        // Repeat untill the swap counter is 0:
            
            // Reset swap counter to 0
            // Look at each adjacent pair
    
                // if two adjacent elements are not in order, swap them and add one to the swap counter
    
    
    // Bubble Sort
    
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //       -1        //
    //-----------------//
    
    //-----------------------------------//
    //  5  |  2  |  1  |  3  |  6  |  4  //
    //-----------------------------------//

    // Set the swap counter to 0
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        0        //
    //-----------------//
    

    // Swap them
    //-----------------------------------//
    //     | <-- |     |     |     |     //
    //  5  |  2  |  1  |  3  |  6  |  4  //
    // --> |     |     |     |     |     //
    //-----------------------------------//
    

    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        1        //
    //-----------------//
    
    //-----------------------------------//
    //     |     |     |     |     |     //
    //  2  |  5  |  1  |  3  |  6  |  4  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        1        //
    //-----------------//
    
            // they also out of order
            // swap them
    //-----------------------------------//
    //     |     | <-- |     |     |     //
    //  2  |  5  |  1  |  3  |  6  |  4  //
    //     | --> |     |     |     |     //
    //-----------------------------------//
    

    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        2        //
    //-----------------//
    
    //-----------------------------------//
    //     |     |     |     |     |     //
    //  2  |  1  |  5  |  3  |  6  |  4  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        2        //
    //-----------------//
    
                 // they out of order
                 // swap them
    //-----------------------------------//
    //     |     |     | <-- |     |     //
    //  2  |  1  |  5  |  3  |  6  |  4  //
    //     |     | --> |     |     |     //
    //-----------------------------------//
    

    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        3        //
    //-----------------//

    //-----------------------------------//
    //     |     |     |     |     |     //
    //  2  |  1  |  3  |  5  |  6  |  4  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    
                       // 5 and 6
                       // they are in order
    //-----------------------------------//
    //     |     |     |     | <-- |     //
    //  2  |  1  |  3  |  5  |  6  |  4  //
    //     |     |     | --> |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        3        //
    //-----------------//

                             // they out of order
                             // swap them
    //-----------------------------------//
    //     |     |     |     |     | <-- //
    //  2  |  1  |  5  |  3  |  6  |  4  //
    //     |     |     |     | --> |     //
    //-----------------------------------//
    
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        4        //
    //-----------------//
   
                                   // that is sorted
    //--------------------------------------//
    //     |     |     |     |     |  ---   //
    //  2  |  1  |  3  |  5  |  4  | | 6 |  //
    //     |     |     |     |     |  ---   //
    //--------------------------------------//
    
                                    
    //-----------------------------------//
    //     |     |     |     |     |     //
    //  2  |  1  |  3  |  5  |  4  |  6  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        0        //
    //-----------------//

    
    // they out of order
    // swap them
    //-----------------------------------//
    //     | <-- |     |     |     |     //
    //  2  |  1  |  3  |  5  |  4  |  6  //
    // --> |     |     |     |     |     //
    //-----------------------------------//
 
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        1        //
    //-----------------//

            // they are in order
    //-----------------------------------//
    //     |     | <-- |     |     |     //
    //  1  |  2  |  3  |  5  |  4  |  6  //
    //     | --> |     |     |     |     //
    //-----------------------------------//
  
    //-----------------------------------//
    //     |     |     |     |     |     //
    //  1  |  2  |  3  |  5  |  4  |  6  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        1        //
    //-----------------//
    
                  // they are in order
    //-----------------------------------//
    //     |     |     | <-- |     |     //
    //  1  |  2  |  3  |  5  |  4  |  6  //
    //     |     | --> |     |     |     //
    //-----------------------------------//

    //-----------------------------------//
    //     |     |     |     |     |     //
    //  1  |  2  |  3  |  5  |  4  |  6  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        2        //
    //-----------------//

    //-----------------------------------//
    //     |     |     |     | <-- |     //
    //  1  |  2  |  3  |  5  |  4  |  6  //
    //     |     |     | --> |     |     //
    //-----------------------------------//

    //-----------------------------------//
    //     |     |     |     |     |     //
    //  1  |  2  |  3  |  4  |  5  |  6  //
    //     |     |     |     |     |     //
    //-----------------------------------//

    //-----------------------------------------//
    //     |     |     |     |  ---   |  ---   //
    //  1  |  2  |  3  |  4  | | 5 |  | | 6 |  //
    //     |     |     |     |  ---   |  ---   //
    //-----------------------------------------//

    //-----------------------------------//
    //     |     |     |     |     |     //
    //  1  |  2  |  3  |  4  |  5  |  6  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    //-----------------//
    //  Swap Counter   //
    //-----------------//
    //        0        //
    //-----------------//

    // in order
    //-----------------------------------//
    //     | <-- |     |     |     |     //
    //  1  |  2  |  3  |  4  |  5  |  6  //
    // --> |     |     |     |     |     //
    //-----------------------------------//

           // in order
    //-----------------------------------//
    //     |     | <-- |     |     |     //
    //  1  |  2  |  3  |  4  |  5  |  6  //
    //     | --> |     |     |     |     //
    //-----------------------------------//
    
                 // in order
    //-----------------------------------//
    //     |     |     | <-- |     |     //
    //  1  |  2  |  3  |  4  |  5  |  6  //
    //     |     | --> |     |     |     //
    //-----------------------------------//

    
    //-----------------------------------//
    //     |     |     |     |     |     //
    //  1  |  2  |  3  |  4  |  5  |  6  //
    //     |     |     |     |     |     //
    //-----------------------------------//
    
    // In pseudocode:
    
        // Set swap counter to a non-zero value
        // Repeat untill the swap counter is 0:
            
            // Reset swap counter to 0
            // Look at each adjacent pair
    
                // if two adjacent elements are not in order, swap them and add one to the swap counter
    
    
    // BUbble Sort
    
    // Worst-case scenario: They are in reverse order; we have
    // to "bubble" each of the n elements all the way across the
    // array, and since we can only fully bubble one element into
    // position per pass, we must do this n times.
    
    // Best-case scenario: The array is already perfectly sorted,
    // and we make no swaps on the first pass.
    
    // O(n^2)
    // Ω(1)
    
    
    return 0;
}
