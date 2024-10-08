//
//  binary_search.c
//  Shorts
//
//  Created by Sheeraz on 10/6/24.
//

#include "binary_search.h"

int mainThree(void) {
    
    // Program 4
    
    printf("---------------Program 4---------------\n");
    
    // Binary Search
    
        // In binary search, the idea of the algorithm is to divide and conquer, reducing the search
        // area by half each time, trying to find a target number.
    
            // In order to leverage this power however, our array must first be sorted, else we cannot
            // make assumptions about the array's contents.
    
    
    // In pseudocode:
        
        // Repeat untill the (sub)array is of size 0:
    
            // Calculate the middle point of the current (sub)array.
            // If the target is at the middle, stop.
            // Otherwise, if target is less than what's at the middle, repeat
            // changing the end point to be just to the left of the middle.
            // Otherwise, if the target is greater than what's at the middle
            // Otherwise, if the target is greater than what's at the middle,
            // repeat, changing the start point to be just to the right of the
            // middle
    
    
    // Binary Search
    
                                                //---------------------------------------------------------//
                                                //    Target    //    Start    //   End    //    Middle    //
                                                //---------------------------------------------------------//
                                                //             //             //          //               //
                                                //---------------------------------------------------------//
    
    
    //----------------------------------------------------------------------------------------------------//
    //  11  |  23  |  8  |  14  |  30  |  9  |  6  |  17  |  2  |  28  |  25  |  15  |  7  |  10  |  19   //
    //----------------------------------------------------------------------------------------------------//
    
    //----------------------------------------------------------------------------------------------------//
    //  11  |  23  |  8  |  14  |  30  |  9  |  6  |  17  |  2  |  28  |  25  |  15  |  7  |  10  |  19   //
    //----------------------------------------------------------------------------------------------------//
    //  [0]    [1]   [2]    [3]    [4]   [5]   [6]    [7]   [8]    [9]   [10]   [11]   [12]  [13]   [14]
    
    
    // Sorted array
    
    //----------------------------------------------------------------------------------------------------//
    //  6  |  7  |  8  |  9  |  10  |  11  |  14  |  15  |  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //----------------------------------------------------------------------------------------------------//
    //  [0]    [1]   [2]    [3]    [4]   [5]   [6]    [7]   [8]    [9]   [10]   [11]   [12]  [13]   [14]
    
    

                                               //---------------------------------------------------------//
                                               //    Target    //    Start    //   End    //    Middle    //
                                               //---------------------------------------------------------//
                                               //     19       //     0       //   14     //               //
                                               //---------------------------------------------------------//
    
    //----------------------------------------------------------------------------------------------------//
    //  6  |  7  |  8  |  9  |  10  |  11  |  14  |  15  |  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //----------------------------------------------------------------------------------------------------//
    //  [0]    [1]   [2]    [3]    [4]   [5]   [6]    [7]   [8]    [9]   [10]   [11]   [12]  [13]   [14]

    
                                             //---------------------------------------------------------//
                                             //    Target    //    Start    //   End    //    Middle    //
                                             //---------------------------------------------------------//
                                             //     19       //     0       //   14     //      7       //
                                             //---------------------------------------------------------//

    
    //--------------------------------------------//
    //            Eliminate Half                  //
    //----------------------------------------------------------------------------------------------------//
    //  6  |  7  |  8  |  9  |  10  |  11  |  14  |  15  |  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //     |     |     |     |      |      |      | -->  |      |      |      |      |      |      |      //
    //----------------------------------------------------------------------------------------------------//
    //  [0]    [1]   [2]    [3]    [4]   [5]   [6]   [7]    [8]    [9]   [10]   [11]   [12]   [13]   [14]
    

    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     19       //     8       //   14     //      7       //
    //---------------------------------------------------------//

    
    // (8 + 14) / 2 = 11
    
    //------------------------------------------------//
    //  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //      |      |      |  --> |      |      |      //
    //------------------------------------------------//
    // [8]    [9]    [10]   [11]   [12]   [13]   [14]
    
    
    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     19       //     8       //   14     //      11      //
    //---------------------------------------------------------//
    
                           // ---- Eliminate Half ----//
    //------------------------------------------------//
    //  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //      |      |      |  --> |      |      |      //
    //------------------------------------------------//
    // [8]    [9]    [10]   [11]   [12]   [13]   [14]
    

    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     19       //     8       //   10     //      11      //
    //---------------------------------------------------------//
    
    //--------------------//
    //  17  |  19  |  22  //
    //      |      |      //
    //--------------------//
    // [8]    [9]    [10]
    

    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     19       //     8       //   10     //      11      //
    //---------------------------------------------------------//
    
    
    // (8 + 10) / 2 = 9

    //--------------------//
    //  17  |  19  |  22  //
    //      | -->  |      //
    //--------------------//
    // [8]    [9]    [10]
    

    // 19 found at position of 9
    
    //---------//
    //   ---   //
    //  | 19 | //
    //   ---   //
    //---------//
    //   [9]
    
    
    // Binary Search
    
        // Second Example
    

                                               //---------------------------------------------------------//
                                               //    Target    //    Start    //   End    //    Middle    //
                                               //---------------------------------------------------------//
                                               //     16       //     0       //   14     //              //
                                               //---------------------------------------------------------//
    
    //----------------------------------------------------------------------------------------------------//
    //  6  |  7  |  8  |  9  |  10  |  11  |  14  |  15  |  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //     |     |     |     |      |      |      |      |      |      |      |      |      |      |      //
    //----------------------------------------------------------------------------------------------------//
    //  [0]    [1]   [2]    [3]    [4]   [5]   [6]   [7]    [8]    [9]   [10]   [11]   [12]   [13]   [14]
    
    
    
    

    
    
                                           //---------------------------------------------------------//
                                           //    Target    //    Start    //   End    //    Middle    //
                                           //---------------------------------------------------------//
                                           //     16       //     0       //   14     //      7       //
                                           //---------------------------------------------------------//

    // (0 + 14) / 2 = 7
    
    // -------------- Eliminate Half ----------------//
    //----------------------------------------------------------------------------------------------------//
    //  6  |  7  |  8  |  9  |  10  |  11  |  14  |  15  |  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //     |     |     |     |      |      |      | -->  |      |      |      |      |      |      |      //
    //----------------------------------------------------------------------------------------------------//
    //  [0]    [1]   [2]    [3]    [4]   [5]   [6]   [7]    [8]    [9]   [10]   [11]   [12]   [13]   [14]
 
    
    
    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     16       //      8       //   14     //      7      //
    //---------------------------------------------------------//
    
    //------------------------------------------------//
    //  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //      |      |      |      |      |      |      //
    //------------------------------------------------//
    // [8]    [9]   [10]   [11]   [12]   [13]   [14]
    

    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     16       //      8       //   14     //      11     //
    //---------------------------------------------------------//
    
    
    // (8 + 14) / 2 = 11

                           // --- Eliminate Half ---  //
    //------------------------------------------------//
    //  17  |  19  |  22  |  23  |  25  |  28  |  30  //
    //      |      |      | -->  |      |      |      //
    //------------------------------------------------//
    // [8]    [9]   [10]   [11]   [12]   [13]   [14]


    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     16       //      8      //   10     //      11      //
    //---------------------------------------------------------//
    
    //--------------------//
    //  17  |  19  |  22  //
    //      |      |      //
    //--------------------//
    // [8]    [9]    [10]
    

    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     16       //      8      //   10     //      11      //
    //---------------------------------------------------------//
    
    
    // (8 + 10) / 2 = 9
    
            // Eliminate Half
    //--------------------//
    //  17  |  19  |  22  //
    //      |  --> |      //
    //--------------------//
    // [8]    [9]    [10]
    
    //------//
    //  17  //
    //      //
    //------//
    // [8]
        

    //---------------------------------------------------------//
    //    Target    //    Start    //   End    //    Middle    //
    //---------------------------------------------------------//
    //     16       //      8      //    7     //      11      //
    //---------------------------------------------------------//
    
    
    // Start point is greater than end point 16 doesn't exist
    // In that array
    
    
    // In pseudocode:
        
        // Repeat untill the (sub)array is of size 0:
    
            // Calculate the middle point of the current (sub)array.
            // If the target is at the middle, stop.
            // Otherwise, if target is less than what's at the middle, repeat
            // changing the end point to be just to the left of the middle.
            // Otherwise, if the target is greater than what's at the middle
            // Otherwise, if the target is greater than what's at the middle,
            // repeat, changing the start point to be just to the right of the
            // middle
    
    
    
    // Binary Search
    
    // Worst-case scenario: we have to divide a list of n elements
    // in half repeatedly to find the target element, either because
    // the target element will be found at the end of last division
    // or doesn't exist in the array at all.
    
    // Best-case scenario: The target element is at the midpoint of
    // the full array, and so we can stop looking immediately after
    // we start.
    
    // O(log n)
    // Ω(1)

    // O(log n) --> worst case in binary search
    // Ω(1)     --> best case in binary search
    
    
    
    return 0;
}
