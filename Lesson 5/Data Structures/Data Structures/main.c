//
//  main.c
//  Data Structures
//
//  Created by Sheeraz on 10/11/24.
//

#include <stdio.h>
#include "list.h"



int main(int argc, const char * argv[]) {

    // Program 1
    
    printf("-------------------Program 1-------------------\n");
    
    
    // Welcome!
    
    // All the prior weeks have presented you with the fundamental building blocks of programming.
    // All you have learned in C will enable you to implement these building blocks in higher-level programming languages
    // such as Python.
    
    // Today, we are going to talk about organizing data in memory and design possibilities that emerge from your growing
    // knowledge.
    
    
    // Data Structures
    
    // Data structures essentially are forms of organization in memory.
    
    // There are many ways to organize data in memory.
    
    // Abstract data structures are those that we can conceptually imagine. When learning about computer science, it’s
    // often useful to begin with these conceptual data structures. Learning these will make it easier later to understand
    // how to implement more concrete data structures.
    
    
    // Stacks and Queues
    
    
    // Queues are one form of abstract data structure.
    
    // Queues have specific properties. Namely, they are FIFO or “first in first out.” You can imagine yourself in a line
    // for a ride at an amusement park. The first person in the line gets to go on the ride first. The last person gets to
    // go on the ride last.
    
    // Queues have specific actions associated with them. For example, an item can be enqueued; that is, the item can join
    // the line or queue. Further, an item can be dequeued or leave the queue once it reaches the front of the line.
    
    // Queues contrast a stack. Fundamentally, the properties of a stack are different than a queue. Specifically, it is
    // LIFO or “last in first out.” Just like stacking trays in a cafeteria, a tray that is placed in a stack last is the
    // first that may be picked up.
    
    // Stacks have specific actions associated with them. For example, push places something on top of a stack. Pop is
    // removing something from the top of the stack.
    
    // In code, you might imagine a stack as follows:
    
    
    // typedef struct {
        
        // person people[CAPACITY];
        
    // } stack;
    
    // Notice that an array called people is of type person. The CAPACITY is how high the stack could be. The integer size
    // is how full the stack actually is, regardless of how much it could hold.
    
    // You might imagine that the above code has a limitation. Since the capacity of the array is always predetermined in
    // this code. Therefore, the stack may always be oversized. You might imagine only using one place in the stack out
    // of 5000.
    
    // It would be nice for our stack to be dynamic – able to grow as items are added to it.
    
    // Jack Learns the Facts
    
    // We watched a video called Jack Learns the Facts by Professor Shannon Duvall of Elon University.
    
    // Resizing Arrays
    
    // Rewinding to Week 2, we introduced you to your first data structure.
    
    // An array is a block of contiguous memory.
    
    // You might imagine an array as follows:
    
    
    //-----------------------------------//
    //           |         |             //
    //      1    |    2    |     3       //
    //           |         |             //
    //-----------------------------------//
    
    
    // In memory, there are other values being stored by other programs, functions, and variables. Many of these may be
    // unused garbage values that were utilized at one point but are available now for use.
    
    
    //---------------------------------------------------------------------------------------//
    //          |          |          |          |          |          |          |          //
    //    🗑️    |    🗑️    |    🗑️    |    🗑️    |    🗑️   |    🗑️    |    🗑️    |   🗑️     //
    //          |          |          |          |          |          |          |          //
    //---------------------------------------------------------------------------------------//
    //          |          |          |          |          |          |          |          //
    //    🗑️    |    1     |    2     |     3    |    h     |     e    |    l     |    l     //
    //          |          |          |          |          |          |          |          //
    //---------------------------------------------------------------------------------------//
    //          |          |          |          |          |          |          |          //
    //    o     |    ,     |          |    w     |     o    |     r    |     l    |     d    //
    //          |          |          |          |          |          |          |          //
    //---------------------------------------------------------------------------------------//
    //          |          |          |          |          |          |          |          //
    //    \0    |    🗑️    |    🗑️    |    🗑️    |   🗑️    |    🗑️    |    🗑️    |    🗑️    //
    //          |          |          |          |          |          |          |          //
    //---------------------------------------------------------------------------------------//
    //    🗑️    |   🗑️    |    🗑️     |    🗑️    |    🗑️    |    🗑️    |    🗑️   |    🗑️    //
    //---------------------------------------------------------------------------------------//
    
    // printf("%d\n", (7 + 8));
    // printf("%d\n", (7 - 8));
    // printf("%d\n", (7 * 8));
    // printf("%f\n", (7.0 / 8.0));
    
    // Imagine you wanted to store a fourth value 4 in our array? What would be needed is to allocate a new area of memory
    // and move the old array to a new one. Initially, this new area of memory would be populated with garbage values.
    
    
    //--------------------------------//
    //         |          |           //
    //    1    |    2     |     3     //
    //         |          |           //
    //--------------------------------//
    

    //---------------------------------------------//
    //          |          |           |           //
    //    🗑️    |    🗑️    |    🗑️     |   🗑️     //
    //          |          |           |           //
    //---------------------------------------------//
    
    
     // printf("%d\n", (7 * 8) * 4);
     // printf("%d\n", (7 * 3) * 4);
     // printf("%d\n", (224 - 84));
     // printf("%d\n", (2024 - 140));
    
    
    
    // As values are added to this new area of memory, old garbage values would be overwritten.
    
    
    //-----------------------------------------------//
    //           |           |           |           //
    //     1     |    2      |     3     |     🗑️    //
    //           |           |           |           //
    //-----------------------------------------------//
    
    
    // Eventually, all old garbage values would be overwritten with our new data.

    
    //--------------------------------//
    //         |          |           //
    //    1    |    2     |     3     //
    //         |          |           //
    //--------------------------------//
    
    //--------------------------------------------//
    //         |          |           |           //
    //    1    |    2     |     3     |     4     //
    //         |          |           |           //
    //--------------------------------------------//
    
    
    
    // One of the drawbacks of this approach is that it’s bad design: Every time we add a number, we have to copy the
    // array item by item.
    
    // Wouldn’t it be nice if we were able to put the 4 somewhere else in memory? By definition, this would no longer
    // be an array because 4 would no longer be in contiguous memory.
    
    
    // Program 2
    
    printf("-------------------Program 2-------------------\n");
    
    mainTwo();
    
    
    
    
    return 0;
}
