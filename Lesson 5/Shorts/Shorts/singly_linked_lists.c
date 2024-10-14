//
//  singly_linked_lists.c
//  Shorts
//
//  Created by Sheeraz on 10/13/24.
//

#include "singly_linked_lists.h"


int mainFour(void) {
    
    // Program 6
    
    printf("---------------Program 6---------------\n");
    
    
    // Singly linked lists
    
        // So far in the course we've had only one kind of data structure
        // for representing collections of like values.
    
        // structs, recall, gives us "containers" for holding variables of
        // different data types, typically.
    
    
    // Arrays are great for element lookup, but unless we want to insert at
    // the very end of the array, inserting elements is quite costly-remember
    // insertion sort?
    
    
    // Singly linked lists
    
        // Arrays also suffer from a great inflexibility - what happens if we
        // need a larger array than we thought?
    
        // Through clever use of pointers, dynamic memory allocation, and
        // structs, we can put the pieces together to develop a new kind of
        // data structure that gives us the ability to grow and shrink a
        // collection of like values to fit our needs.
    
    
    // Singly linked lists
    
        // We call this combination of elements, when used in this way, a
        // linked-list
    
        // A linked list node is a special kind of structs with two members:
        
            // Data of some data types (int, char, float, ...)
            // A pointer to another node of the same type.
    
        // In this way, a set of nodes together can be thought of as forming
        // a chain of elements that we can follow from beginning to end.
    
    
    // Singly linked lists
    
    
        // typedef struct sllist {
                
            // VALUE val;
            // struct sllist* next;
                
        // } sllnode;
    
    
        // typedef struct sllistTwo {
            
            // VALUE valTwo;
            // struct sllistTwo* nextTwo;
            
        // } sllnodeTwo;
          // ---------
    
    
    // typedef struct sllistThree {
            // ------------------
    
        // VALUE valThree;
    
        // struct sllistThree* nextThree;
        // -------------------
    
    
    // } sllnodeThree;

    
    // Singly linked lists
    
        // In order to work with linked lists effectively, there are
        // a number of operations that we need to understand:
    
        // 1. Create a linked list when it doesn't already exists.
        // 2. Seach through a linked list to find an element.
        // 3. Insert a new node into the linked list.
        // 4. Delete a single element from a linked list.
        // 5. Delete an entire linked list.
    
    
    // Singly linked lists
    
        // Create a linked list.
    
            // sllnodeFour* create(VALUE valFour);

    
    // ----------------------------------------------------------------
    
    
    // Singly linked lists
    
        // Create a linked list.
    
            // sllnodeFive* createTwo(VALUE valFive);
    
    
        // Steps involved:
        
            // a. Dynamically allocate space for new sllnodeFive.
            // b. Check to make sure we didn't run out of memory.
            // c. Initialize the node's val field.
            // d. Initialize the node's next field.
            // e. Return a pointer to the newly created sllnodeFive.
    

    // ----------------------------------------------------------------
    
    
    // Singly linked lists
    
        // sllnodeSix* new = createThree(6);
    
            // a. Dynamically allocate space for a new sllnodeSix.                //----------------//
            // b. check to make sure we didn't run out of memory.                 //                //
            // c. Initialize the node's val field.                                //----------------//
            // d. Initialize the node's next field.                               //                //
            // e. Return a pointer to the newly created sllnodeSix.               //----------------//
    

    // --------------------------------------------------------------------------------------------------------
    
    
    // Singly linked lists
    
        // sllnodeSeven* new = createFour(6);
    
            // a. Dynamically allocate space for a new sllnodeSeven.               //----------------//
            // b. check to make sure we didn't run out of memory.                  //       6        //
            // c. Initialize the node's val field.                                 //----------------//
            // d. Initialize the node's next field.                                //                //
            // e. Return a pointer to the newly created sllnodeSeven.              //----------------//
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
    // Singly linked lists
    
        // sllnodeEight* new = createFive(6);
    
            // a. Dynamically allocate space for a new sllnodeEight.               //----------------//
            // b. check to make sure we didn't run out of memory.                  //       6        //
            // c. Initialize the node's val field.                                 //----------------//
            // d. Initialize the node's next field.                                // -------------- //
            // e. Return a pointer to the newly created sllnodeEight.              //----------------//
    
    

    // --------------------------------------------------------------------------------------------------------
    
    
    // Singly linked lists                                                                 new
                                                                                         // ↓
        // sllnodeNine* new = createSix(6);                                                    ↓
                                                                                         // ↓
            // a. Dynamically allocate space for a new sllnodeNine.                //----------------//
            // b. check to make sure we didn't run out of memory.                  //       6        //
            // c. Initialize the node's val field.                                 //----------------//
            // d. Initialize the node's next field.                                // -------------- //
            // e. Return a pointer to the newly created sllnodeNine.m              //----------------//
    
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
            // Search through a liked list to find an element.
    
                // bool find(sllnodeTen* head, VALUE valSix);
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
            // Search through a liked list to find an element.
    
                // bool findTwo(sllnodeEleven* headTwo, VALUE valSeven);
    
    
            // Steps involved:
            
                // a. Create a traversal pointer pointing to the list's head.
                // b. If the current node's val field is what we're looking
                // for, report success.
                // c. If, not set the traversal pointer to the next pointer
                // in the list and go back to step b.
                // d. If you are reached to the end of the list, report failure.
    
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool exists = findThree(list, 6);
    
             // list
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//

    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsTwo = findFour(listTwo, 6);
    
             // listTwo
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
             //  ↑
             //  ↑
             //  ↑
             // trav
    
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsThree = findFive(listThree, 6);
    
             // listThree
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                    // ↑
                                    // ↑
                                    // ↑
                                   // trav

    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsFour = findSix(listFour, 6);
    
             // listFour
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                                          // ↑
                                                          // ↑
                                                          // ↑
                                                         // trav

    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsFive = findSeven(listFive, 6);
    
             // listFive
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                                                                // ↑
                                                                                // ↑
                                                                                // ↑
                                                                               // trav
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsSix = findEight(listSix, 6);
    
             // listSix
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
              // ↑
              // ↑
              // ↑
              // trav
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsSeven = findNine(listSeven, 6);
    
             // listSeven
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                    // ↑
                                    // ↑
                                    // ↑
                                   // trav
    

    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsEight = findTen(listEight, 6);
    
             // listEight
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                                          // ↑
                                                          // ↑
                                                          // ↑
                                                         // trav
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsNine = findEleven(listNine, 6);
    
             // listNine
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                                                                // ↑
                                                                                // ↑
                                                                                // ↑
                                                                               // trav
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // bool existsTen = findTwelve(listTen, 6);
    
             // listTen
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //   2   //     →→→→→ //   3   //     →→→→→ //   5   //     →→→→→ //   6   //     →→→→→ //   8   //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
                                                                                                      // ↑
                                                                                                      // ↑
                                                                                                      // ↑
                                                                                                     // trav

    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
        
            // Insert a new node into the linked list.
    
                // sllnodeTwelve* insert(sllnodeThirteen* headThree, VALUE valEight);
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
        
            // Insert a new node into the linked list.
    
                // sllnodeFourteen* insertTwo(sllnodeFifteen* headFour, VALUE valNine);
    
    
        // Steps involved:
    
            // a. Dynamically allocate space for a new sllnodeFourteen
            // b. Check to make sure we didn't run out of memory.
            // c. Populate and insert the node at the beginning of the
            // linked list.
            // d. Return a pointer to the new head of the linked list.
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
        
            // Insert a new node into the linked list.
    
                // sllnodeFourteen* insertThree(sllnodeFifteen* headFive, VALUE valNine);
    
    
        // Steps involved:
    
            // a. Dynamically allocate space for a new sllnodeFourteen
            // b. Check to make sure we didn't run out of memory.
            // c. Populate and insert the node at the beginning of the
                                            // -----------------------
            // linked list.
            // -----------
    
            // d. Return a pointer to the new head of the linked list.
    


    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // listEleven = insertFour(listTwelve, 12);
    
             // listEleven
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//           //-------//           //-------//           //-------//
            //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
            //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//
    
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // listThirteen = insertFive(listFourteen, 12);
    
                               // listThirteen
                                   //  ↓
                                   //  ↓
                                   //  ↓
                                   //  ↓
                                   //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //       //           //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
            //-------//           //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       //           //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             // new

    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // listFifteen = insertSix(listSixteen 12);
    
                               // listFifteen
                                   //  ↓
                                   //  ↓
                                   //  ↓
                                   //  ↓
                                   //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //  12   //           //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
            //-------//           //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       //           //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             // new

    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
            // Decision time!
    
                // Which pointer should we move first? Should the "12" node be
                // the new head of the linked list, since it now exists, or
                // should we connect it to the list first?
    
                // This is the one of the trichiest things which linked lists.
                // Order matters!
    

    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // listSeventeen = insertSeven(listEighteen, 12);
    
                             // listSeventeen
                                   //  ↓
                                   //  ↓
                                   //  ↓
                                   //  ↓
                                   //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //  12   //           //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
            //-------//           //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       //           //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             // new
    
    
    
    // --------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // listNineteen = insertEight(listTwenty, 12);
    
       // listNineteen
            //  ↓
            //  ↓
            //  ↓
            //  ↓
            //  ↓
            //-------//           //-------//           //-------//           //-------//           //-------//
            //  12   //           //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
            //-------//           //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
            //       //           //       // →→→       //       // →→→       //       // →→→       // ----- //
            //-------//           //-------//           //-------//           //-------//           //-------//
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             //  ↑
             // new
    

    
    // --------------------------------------------------------------------------------------------------------------
    
    
        // Singly linked lists
    
    
            // listTwentyOne = insertNine(listTwentyTwo, 12);
    
       // listTwentyOne
            //  ↓
            //  ↓           //-------------------------------------------------------------------------------------//
            //  ↓           // ----------------------------------------------------------------------------------- //
            //  ↓           // ----------------------------------------------------------------------------------- //
            //  ↓           // ----------------------------------------------------------------------------------- //
            //-------//     // -- //-------// --------- //-------// --------- //-------// --------- //-------// -- //
            //  12   //     // -- //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  // -- //
            //-------//     // -- //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------// -- //
            //   ?   //     // -- //       // →→→       //       // →→→       //       // →→→       // ----- // -- //
            //-------//     // -- //-------// --------- //-------// --------- //-------// --------- //-------// -- //
             //  ↑          // ----------------------------------------------------------------------------------- //
             //  ↑          // ----------------------------------------------------------------------------------- //
             //  ↑          // ----------------------------------------------------------------------------------- //
             //  ↑          //-------------------------------------------------------------------------------------//
             //  ↑
             // new
    

    
    // --------------------------------------------------------------------------------------------------------------
    
    
    
    // Singly linked lists


        // listTwentyThree = insertTen(listTwentyFour, 12);

                           // listTwentyThree
                                //  ↓
                                //  ↓
                                //  ↓
                                //  ↓
                                //  ↓
        //-------//           //-------//           //-------//           //-------//           //-------//
        //  12   //           //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
        //-------//           //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
        //       //           //       // →→→       //       // →→→       //       // →→→       // ----- //
        //-------//           //-------//           //-------//           //-------//           //-------//
         //  ↑
         //  ↑
         //  ↑
         //  ↑
         //  ↑
         // new
    
    
    
    // --------------------------------------------------------------------------------------------------------------
    
    
    
    // Singly linked lists


        // listTwentyFive = insertEleven(listTwentySix, 12);

                           // listTwentyFive
                                //  ↓
                                //  ↓
                                //  ↓
                                //  ↓
                                //  ↓
        //-------//           //-------//           //-------//           //-------//           //-------//
        //  12   //     →→→→→ //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
        //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
        //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
        //-------//           //-------//           //-------//           //-------//           //-------//
         //  ↑
         //  ↑
         //  ↑
         //  ↑
         //  ↑
         // new
    
    
    
    // --------------------------------------------------------------------------------------------------------------
    
    
    
    
    // Singly linked lists


        // listTwentySeven = insertTwelve(listTwentyEight, 12);

    
            // listTwentySeven
                 //  ↓
                 //  ↓
                 //  ↓
                 //  ↓
                 //  ↓
                //-------//           //-------//           //-------//           //-------//           //-------//
                //  12   //     →→→→→ //   15  //     →→→→→ //   9   //     →→→→→ //   13  //     →→→→→ //   10  //
                //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//    ↑      //-------//
                //       // →→→       //       // →→→       //       // →→→       //       // →→→       // ----- //
                //-------//           //-------//           //-------//           //-------//           //-------//
                 //  ↑
                 //  ↑
                 //  ↑
                 //  ↑
                 //  ↑
                 // new
    
    
    


    // --------------------------------------------------------------------------------------------------------------

    
    // Singly-Linked lists
    
        // Delete an entire linked list.
    
            // void destroy(sllnodeTwelve* headSix);
    
    
    // --------------------------------------------------------------------------------------------------------------

    
    // Singly-Linked lists
    
        // Delete an entire linked list.
    
            // void destroyTwo(sllnodeThirteen* headSeven);
             // ? then who is he?
    
    // Steps involved:
    
        // a. If you are reached a null pointer, stop.
        // b. Delete the rest of the list.
        // c. Free the current node.
    
    
    // --------------------------------------------------------------------------------------------------------------

    
    // Singly-Linked lists
    
        // Delete an entire linked list.
    
            // void destroyThree(sllnodeFourteen* headEight);
    
    // Steps involved:
    
        // a. If you are reached a null pointer, stop.
    
        // b. Delete the rest of the list.
                  // --------------------
                    
        // c. Free the current node.
    
    
    // --------------------------------------------------------------------------------------------------------------

    
    // Singly-Linked lists
    
        // destroyFour(listTwentyNine);
    
            // a. If you're reached the null pointer, stop.
            
            // b. Delete the rest of list.
                      // ----------------
    
            // c. Free the current node.
  

    // listTwentyNine
         //  ↓
         //  ↓
         //  ↓
         //  ↓
         //  ↓
        //-------//       //-------//       //-------//       //-------//       //-------//
        //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //
        //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //-------------//
        //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       //  destroy()  //
        //-------//       //-------//       //-------//       //-------//       //-------//       //-------------//
    
                                                                                                   // STACK FRAMES

    
    // --------------------------------------------------------------------------------------------------------------
    
    
    
        // Singly-Linked lists
        
            // destroyFive(listThirty);
        
                // a. If you're reached the null pointer, stop.
                
    // ------>  // b. Delete the rest of list.
                          // ----------------
        
                // c. Free the current node.
      

        // listThirty
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//       //-------//       //-------//       //-------//       //-------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //-------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       //  destroy()  //
            //-------//       //-------//       //-------//       //-------//       //-------//       //-------------//
        
                                                                                                       // STACK FRAMES
    
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroySix(listThirtyOne);
        
                // a. If you're reached the null pointer, stop.
                
    // ------>  // b. Delete the rest of list.
                          // ----------------
        
                // c. Free the current node.
      

        // listThirtyOne     listThirtyOne
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
        
                                                                                                       // STACK FRAMES
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroySeven(listThirtyTwo);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>  // b. Delete the rest of list.
                          // ----------------
        
                // c. Free the current node.
      

        // listThirtyTwo     listThirtyTwo
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
        
                                                                                                       // STACK FRAMES
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyEight(listThirtyThree);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>  // b. Delete the rest of list.
                          // ----------------
        
                // c. Free the current node.
      

       // listThirtyThree   listThirtyThree   listThirtyThree
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                                                //---------------//
             //  ↓                 ↓                 ↓                                                // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
        
                                                                                                       // STACK FRAMES
    
    
  
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyNine(listThirtyFour);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
        
                // c. Free the current node.
      

        // listThirtyFour   listThirtyFour     listThirtyFour
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                                                //---------------//
             //  ↓                 ↓                 ↓                                                // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
        
                                                                                                       // STACK FRAMES
    
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTen(listThirtyFive);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
        
                // c. Free the current node.
      

        // listThirtyFive   listThirtyFive     listThirtyFive    listThirtyFive
             //  ↓                 ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
        
                                                                                                       // STACK FRAMES
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyEleven(listThirtySix);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
        
                // c. Free the current node.
      

         // listThirtySix    listThirtySix     listThirtySix     listThirtySix
             //  ↓                 ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
    
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwelve(listThirtySeven);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
        
                // c. Free the current node.
      

       // listThirtySeven    listThirtySeven  listThirtySeven   listThirtySeven   listThirtySeven     //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//

                                                                                                       // STACK FRAMES

    
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyThirteen(listThirtyEight);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    // ------>
    
                // c. Free the current node.
      

       // listThirtyEight    listThirtyEight  listThirtyEight   listThirtyEight   listThirtyEight     //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//

                                                                                                       // STACK FRAMES

    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyFourteen(listThirtyNine);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    // ------>
    
                // c. Free the current node.
                                                                                                      //---------------//
                                                                                                      // - destroy() - //
        // listThirtyNine    listThirtyNine  listThirtyNine   listThirtyNine   listThirtyNine         //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
                                                                                     //  ↑
                                                                                     //  ↑              // STACK FRAMES
                                                                                     //  ↑
                                                                                     //  ↑
                                                                                  // listThirtyNine
    

    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyFifteen(listFourty);
        
    // ------>  // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    // ------>
    
                // c. Free the current node.
                                                                                                      //---------------//
                                                                                                      // - destroy() - //
         // listFourty        listFourty        listFourty        listFourty        listFourty        //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
                                                                                     //  ↑
                                                                                     //  ↑              // STACK FRAMES
                                                                                     //  ↑
                                                                                     //  ↑
                                                                                  // listFourty
    
    

    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroySixteen(listFourtyOne);
        
                // a. If you're reached the null pointer, stop.
    
    // ------>
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    // ------>
    
                // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtyOne     listFourtyOne     listFourtyOne     listFourtyOne     listFourtyOne      //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
                                                                                    
                                                                                                        // STACK FRAMES

    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroySeventeen(listFourtyTwo);
        
                // a. If you're reached the null pointer, stop.
    
    
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    // ------>
    
    // ------>  // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtyTwo     listFourtyTwo     listFourtyTwo     listFourtyTwo     listFourtyTwo      //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                 ↓            //---------------//
             //  ↓                 ↓                 ↓                 ↓                 ↓            // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //    →→ //   10  //       // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//       //---------------//
            //       // →→    //       // →→    //       // →→    //       // →→    // ----- //       // - destroy() - //
            //-------//       //-------//       //-------//       //-------//       //-------//       //---------------//
                                                                                    
                                                                                                        // STACK FRAMES

    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyEighteen(listFourtyThree);
        
                // a. If you're reached the null pointer, stop.
    
    
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    // ------>
    
                // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtyThree  listFourtyThree   listFourtyThree   listFourtyThree
             //  ↓                 ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
            //-------//       //-------//       //-------//       //-------//                         //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //                         // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//                         //---------------//
            //       // →→    //       // →→    //       // →→    //       //                         // - destroy() - //
            //-------//       //-------//       //-------//       //-------//                         //---------------//
                                                                                    
                                                                                                        // STACK FRAMES
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyNineteen(listFourtyFour);
        
                // a. If you're reached the null pointer, stop.
    
    
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    
    
    // ------>  // c. Free the current node.
                                                                                                      
                                                                                                      
       // listFourtyFour    listFourtyFour    listFourtyFour    listFourtyFour
             //  ↓                 ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
             //  ↓                 ↓                 ↓                 ↓                              //---------------//
             //  ↓                 ↓                 ↓                 ↓                              // - destroy() - //
            //-------//       //-------//       //-------//       //-------//                         //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //    →→ //   13  //                         // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//   ↑   //-------//                         //---------------//
            //       // →→    //       // →→    //       // →→    //       //                         // - destroy() - //
            //-------//       //-------//       //-------//       //-------//                         //---------------//
                                                                                    
                                                                                                        // STACK FRAMES

    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwenty(listFourtyFive);
        
                // a. If you're reached the null pointer, stop.
    
    
    // ------>
    // ------>  // b. Delete the rest of list.
    // ------>            // ----------------
    
    
               // c. Free the current node.
                                                                                                      
                                                                                                      
       // listFourtyFive    listFourtyFive    listFourtyFive
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                                                //---------------//
             //  ↓                 ↓                 ↓                                                // - destroy() - //
            //-------//       //-------//       //-------//                                           //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //                                           // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//                                           //---------------//
            //       // →→    //       // →→    //       // →→                                        // - destroy() - //
            //-------//       //-------//       //-------//                                           //---------------//
                                                                                    
                                                                                                        // STACK FRAMES
    

    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwentyOne(listFourtySix);
        
                // a. If you're reached the null pointer, stop.
    
    
    // ------>
    // ------>  // b. Delete the rest of list.
                          // ----------------
    
    
    // ------>  // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtySix     listFourtySix     listFourtySix
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓
             //  ↓                 ↓                 ↓                                                //---------------//
             //  ↓                 ↓                 ↓                                                // - destroy() - //
            //-------//       //-------//       //-------//                                           //---------------//
            //  12   //    →→ //   15  //    →→ //   9   //                                           // - destroy() - //
            //-------//   ↑   //-------//   ↑   //-------//                                           //---------------//
            //       // →→    //       // →→    //       // →→                                        // - destroy() - //
            //-------//       //-------//       //-------//                                           //---------------//
                                                                                    
                                                                                                        // STACK FRAMES
    
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwentyTwo(listFourtySeven);
        
                // a. If you're reached the null pointer, stop.
    
    
    // ------>
    // ------>  // b. Delete the rest of list.
                          // ----------------
    
    
               // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtySeven  listFourtySeven
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
            //-------//       //-------//                                                             //---------------//
            //  12   //    →→ //   15  //                                                             // - destroy() - //
            //-------//   ↑   //-------//                                                             //---------------//
            //       // →→    //       //                                                             // - destroy() - //
            //-------//       //-------//                                                             //---------------//
                                                                                    
                                                                                                        // STACK FRAMES

    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwentyThree(listFourtyEight);
        
                // a. If you're reached the null pointer, stop.
    
    
    
    // ------>  // b. Delete the rest of list.
                          // ----------------
    
    
    // ------>  // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtyEight  listFourtyEight
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
             //  ↓                 ↓
            //-------//       //-------//                                                             //---------------//
            //  12   //    →→ //   15  //                                                             // - destroy() - //
            //-------//   ↑   //-------//                                                             //---------------//
            //       // →→    //       //                                                             // - destroy() - //
            //-------//       //-------//                                                             //---------------//
                                                                                    
                                                                                                        // STACK FRAMES
    
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwentyFour(listFourtyNine);
        
                // a. If you're reached the null pointer, stop.
    
    
    
    // ------>  // b. Delete the rest of list.
                          // ----------------
    
    
                // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFourtyNine
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//
            //  12   //
            //-------//                                                                               //---------------//
            //       //                                                                               // - destroy() - //
            //-------//                                                                               //---------------//
                                                                                    
                                                                                                        // STACK FRAMES
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwentyFive(listFifty);
        
                // a. If you're reached the null pointer, stop.
    
    
    
                // b. Delete the rest of list.
                          // ----------------
    
    
    // ------>  // c. Free the current node.
                                                                                                      
                                                                                                      
        // listFifty
             //  ↓
             //  ↓
             //  ↓
             //  ↓
             //  ↓
            //-------//
            //  12   //
            //-------//                                                                               //---------------//
            //       //                                                                               // - destroy() - //
            //-------//                                                                               //---------------//
                                                                                    
                                                                                                        // STACK FRAMES

    
    // ------------------------------------------------------------------------------------------------------------------
    
    

        // Singly-Linked lists
        
            // destroyTwentySix(listFiftyOne);
        
                // a. If you're reached the null pointer, stop.
    
                // b. Delete the rest of list.
                          // ----------------
    
                // c. Free the current node.
                                                                                                      
                                                                                                      

    
    
    
    
    
    
    
    
                                                                                    
                                                                                                        // STACK FRAMES
    
    
    // ------------------------------------------------------------------------------------------------------------------
    
    
    // Singly-Linked Lists
    
        // In order to work with linked lists effectively, there are a
        // number of operations that we need to understand:
    
        // 1. Create a linked list when it doesn't already exist.
        // 2. Search through a linked list to find an element.
        // 3. Insert a new node into the linked list.
        // 4. Delete a single element from a linked list.
        // 5. Delete an entire linked list.
    
    
    
    
    
    
    
    return 0;
}
