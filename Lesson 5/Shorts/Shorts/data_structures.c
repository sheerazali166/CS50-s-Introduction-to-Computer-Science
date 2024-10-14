//
//  data_structures.c
//  Shorts
//
//  Created by Sheeraz on 10/13/24.
//

#include "data_structures.h"

int mainTwo(void) {
    
    
    // Program 2
    
    printf("---------------Program 2---------------\n");
    
    
    // Data Structures Summary
    
        // By this point we've now examined four different ways to store
        // sets of data:
        
        // Arrays
        // Linked list
        // Hash tables
        // Tries
    
      
     // There are even some variations on these (trees and heaps, quite similar to arrays
     // or linked list, etc.) but this will generally cover most of what we're looking at
     // in C.
    
        // Arrays
    
            // Insertion is bad - lots of shifting to fit an elelment in the middle
            // Deletion is bad - lots of shifting after removing an element
            // Lookup is great - random access, constant time
            // Relatively easy to sort
            // Relatively small size-wise
            // Stuck with a fixed size, no flexibility
    
       
        // Linked lists
        
            // Insertion is easy just tack onto the front
            // Deletion is easy - once you find the element
            // Lookup is bad - have to rely on linear search
            // Relatively difficult to sort - unless you're
            // willing to compromise on super-fast insertion
            // and instead sort as you construct
            // Relatively small size-wise (not as small as arrays)
    
    
        // Hash tables
    
            // Insertion is two-step process - hash, then add
            // Deletion is easy - once you find the element
    
            // Lookup is on average better than with linked lists because you have
            // benefits of the real world constant factor
    
            // Not an ideal data structure if sorting is the goal - just use the array
            // Can run the gamut of size
    
    
        // Tries
    
            // Insertion is complex - lot of dynamic memory allocation, but gets
            // easier as you go

            // Deletion is easy - just free a node
            
            // Lookup is fast - not quite as fast as an array, but almost
    
            // Already sorted - sorts as you build in almost all situations
        
            // Repidly becomes huge, even with very little data present,
            // not great if space is at a premium
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
