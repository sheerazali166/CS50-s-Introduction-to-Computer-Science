//
//  structures.c
//  Shorts
//
//  Created by Sheeraz on 10/13/24.
//

#include "structures.h"

int mainThree(void) {
    
    // Program 4
    
    printf("---------------Program 4---------------\n");
    
    
    // Structures
    
        // Structures provides a way ro unify several variables of different
        // types into a single, new variable type which can be assigned its
        // own type name.
    
        // We use structures (structs) to group together elements of a variety
        // of data types that have a logical connection.
    
        // Think of a structure like a "super-variable"
    
        
      // struct car {
    
    
          // int year;
          // char model[10];
          // char plate[7];
          // int odometer;
          // double engine_size;
    
     // };

    
    // struct carTwo {
           // ---
  
        // int yearTwo;
        // char modelTwo[10];
        // char plateTwo[7];
        // int odometerTwo;
        // double engine_sizeTwo;
  
   // };
    
    
    // struct carThree {
  
  
        // int yearThree;
        // -------------
    
        // char modelThree[10];
        // -------------------
    
        // char plateThree[7];
        // ------------------
    
    
        // int odometerThree;
        // -----------------
    
        // double engine_sizeThree;
        // -----------------------
    
   
    // };
    
    
    
    // Once we have defined a structure, which we typically do in
    // separates.h files or a top our programs outsides of any functions,
    // we have effectively created a new type.
    
    // That's mean we can create variablee of that type using the
    // familiar syntax.
    
    // We can also access the various fields (also known as variables)
    // of the structure using the dot operator (.)
    
    
    // Structures
    
        // variable declarations
        // struct carThree mycar;
    
        // field accessing
        // mycar.yearThree = 2011;
    
        // strcpy(mycar.plateThree, "CS50");
        // mycar.odometerThree = 50505;

    
        // -------------------------- //

    
        // variable declarations
        // struct carThree mycarTwo;
                        // --------

        // field accessing
        // mycarTwo.yearThree = 2011;
        // --------
        // strcpy(mycarTwo.plateThree, "CS50");
               // --------
        // mycarTwo.odometerThree = 50505;
        // -------

    
        // -------------------------- //


        // variable declarations
        // struct carThree mycarThree;
                  

        // field accessing
        // mycarThree.yearThree = 2011;
                   // ---------
        // strcpy(mycarThreee.plateThree, "CS50");
                           // ----------
        // mycarThree.odometerThree = 50505;
                   // -------------
    
    
    
    // Structures
    
    
        // Structures, like variables of all other data types we do not need to
        // be created on the stack. We can dynamically allocate structues at run
        // time if our program requires it.
    
        // In order to access the fields of our structures in that situations,
        // we first need to derefrence the pointer to the structure, and then
        // we can access its fields.
    
    
        // variable declaration
        // struct carFour *mycarFour = malloc(sizeof(struct carFive));
    
    
        // ------------------------------------------------------------------- //
    
    
        // variable declaration
        // struct carSix *mycarFive = malloc(sizeof(struct carSeven));
    
        // field accessing
        // (*mycarFive).yearThree = 2011
        // strcpy((*mycarFive).plateThree, "CS50");
        // (*mycarFive).odometerThree = 50505;
    
    
    // Structures
    
        // This is a little annoying. And so as you might expect, there's a
        // shorter way!
    
        // The arrow operator (->) makes this process easier. it's an operator
        // that does two things back-to-back:
    
            // First, it dereferences the pointer on the left side of the operator.
            // Second, it accesses the field on the right side of the operator.
   
    
    // ------------------------------------------------------------------- //

    
    // Structures

        // This is the code look like before
    
    
        // variable declaration
        // struct carEight *mycarSix = malloc(sizeof(struct carNine));

        // field accessing
        // (*mycarSix).yearThree = 2011
        // strcpy((*mycarSix).plateThree, "CS50");
        // (*mycarSix).odometerThree = 50505;
    
    
        // Here is the same code with arrow syntax
    
    
        // variable declaration
        // struct carTen *mycarSeven = malloc(sizeof(struct carEleven));

        // field accessing
        // mycarSeven->yearThree = 2011
        // strcpy(mycarSeven->plateThree, "CS50");
        // mycarSeven->odometerThree = 50505;
    
    
    return 0;
}
