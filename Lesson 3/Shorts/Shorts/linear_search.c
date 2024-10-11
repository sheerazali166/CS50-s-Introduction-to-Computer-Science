//
//  linear_search.c
//  Shorts
//
//  Created by Sheeraz on 10/6/24.
//

#include "linear_search.h"

int mainTwo(void) {
    
    // Program 2
    
    printf("---------------Program 2---------------\n");
    
    // Linear Search
    
        // In linear search, the idea of the algorithm is to iterate across
        // the array from left to right, seaching for a specified element.
    
    // In pseudocode:
    
        // Repeat, starting at the first element:
            
            // If the first element is what you're looking for (the target), stop.
            // Otherwise, move to the next element.
    
    
    // Linear Search
    
        // ----------//
        //   Target  //
        //-----------//
        //    ---    //
        //   | 9 |   //
        //    ---    //
        //-----------//
    
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |   |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    

    // In pseudocode:
    
        // Repeat, starting at the first element:
            
            // If the first element is what you're looking for (the target), stop.
            // Otherwise, move to the next element.
    
    
    
    // Linear Search
    
        // ----------//
        //   Target  //
        //-----------//
        //    ---    //
        //   | 9 |   //
        //    ---    //
        //-----------//
    
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |    |    //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    // -> |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |    |    //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    | -> |   |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//

    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |    |    //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |-> |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |   |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   | -> |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |   |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    | -> |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    | ->|   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//

    // Not three six step required in O(N)
    

    // In pseudocode:
    
        // Repeat, starting at the first element:
            
            // If the first element is what you're looking for (the target), stop.
            // Otherwise, move to the next element.
    

    // Linear Search
    
        // ----------//
        //   Target  //
        //-----------//
        //   ----    //
        //  | 50 |   //
        //   ----    //
        //-----------//

    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |   |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//

    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |    |   |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    // -> |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    | -> |   |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//

    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |-> |    |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   | -> |    |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    | -> |   |   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    | ->|   |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |-> |    |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   | -> |    |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    | -> |    |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    | -> |    |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    | -> |    |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    |    | -> |   |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    |    |    |-> |    |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    |    |    |   | -> |     //
    //-----------------------------------------------------------------------//
    
    //-----------------------------------------------------------------------//
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    |     //
    // 11 | 23 | 8 | 14 | 30 | 9 | 6 | 17 | 22 | 28 | 25 | 15 | 7 | 10 | 19  //
    //    |    |   |    |    |   |   |    |    |    |    |    |   |    | ->  //
    //-----------------------------------------------------------------------//
    
    
    
    // In pseudocode:
    
        // Repeat, starting at the first element:
            
            // If the first element is what you're looking for (the target), stop.
            // Otherwise, move to the next element.
    
    
    // Linear Search
    
    // Worst-case scenario: we have to look through the entire array of n elements,
    // either because the target element is the last elent of array or doesn't exists
    // in the array at all.
    
    // Best-case scenario: The target element is the first element of the array, and so
    // we can stop looking immidiately after we start.
    
    // O(n)
    // Ω(1)
    
    
    return 0;
}