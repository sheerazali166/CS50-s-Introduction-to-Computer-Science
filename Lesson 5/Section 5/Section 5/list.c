//
//  list.c
//  Section 5
//
//  Created by Sheeraz on 10/13/24.
//

#include "list.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

typedef struct node {
 
    char phrase[100];
    struct node *next;
    
 } node;

#define LIST_SIZE 2


bool unload(node *list);
void visualizer(node *listTwo);

int mainTwo(void) {
    
    // Program 3
    
    printf("--------------------Program 3--------------------\n");
    
    /*
     
    node *listThree = NULL;
    
    
    // Add items to list
    for (int i = 0; i < LIST_SIZE; i++) {
 
        char phraseTwo[100];
        
        printf("Enter a new phrase: ");
        scanf("%s", phraseTwo);
        
        // TODO: Add phrase to new node in list
        node *n = malloc(sizeof(node));
        
        if (n == NULL) {
            
            return 1;
        }
        
        strcpy(n->phrase, phraseTwo);
        n->next = NULL;
        
        n->next = listThree;
        listThree = n;
        
        // Visualize list after adding a node
        visualizer(listThree);
 
        
    }
    
    // If all memory used
    if (!unload(listThree)) {
        
        printf("Error freeing the listThree.\n");
        return 1;
    }
    
    printf("Free the listThree.\n");
    
    */
    
    //-----------------//          //-----------------//         //-----------------//
    //      "HEY!"     //→→→→→→→→→→//     "Hello!"    //→→→→→→→→→//    "Lo There"   //
    //-----------------//          //-----------------//         //-----------------//
    
    
    // list = n;
    
    // list                     n →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→
     // ↓                                                             ↓
     // ↓                                                             ↓
     // ↓                                               //--------------------------//
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //           "Hi!"          //
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //--------------------------//
                                                        //           NULL           //
                                                        //--------------------------//
                                                        
    
    
    // listTwo = nTwo;
    
                          // listTwo →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→
                                                                   // ↓
                                    // nTwo                        // ↓
                                                        //--------------------------//
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //           "Hi!"          //
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //                          //
                                                        //--------------------------//
                                                        //           NULL           //
                                                        //--------------------------//
    

    
    //-----------------//          //-----------------//         //-----------------//
    //      "HEY!"     //→→→→→→→→→→//     "Hello!"    //→→→→→→→→→//    "Lo There"   //
    //-----------------//          //-----------------//         //-----------------//
    
    
    //-----//
    // ... //
    //-----//          //---------------------//          //---------------------//
    //  H  //→→→→→→→→→→//        "Hey!"       //→→→→→→→→→→//       "Hello!"      //
    //-----//          //---------------------//          //---------------------//
    //  I  //
    //-----//
    //  J  //
    //-----//
    //  K  //
    //-----//          //---------------------//
    //  L  //→→→→→→→→→→//      "Lo there!"    //
    //-----//          //---------------------//
    // ... //
    //-----//
    
    
    //-----//-----//
    // ... // ... //
    //-----//-----//          //---------------------//          //---------------------//
    //  7  //  H  //→→→→→→→→→→//        "Hey!"       //→→→→→→→→→→//       "Hello!"      //
    //-----//-----//          //---------------------//          //---------------------//
    //  8  //  I  //
    //-----//-----//
    //  9  //  J  //
    //-----//-----//
    //  10 //  K  //
    //-----//-----//          //---------------------//
    //  11 //  L  //→→→→→→→→→→//      "Lo there!"    //
    //-----//-----//          //---------------------//
    // ... // ... //
    //-----//-----//
    
    
                              //---------------------//
                              //                     //
                              //                     //
                              //                     //
                              //                     //
    // "Hey!" →→→→→→→→→→→→→   //    Hash Function    // →→→→→→→→→→→→→  7
                              //                     //
                              //                     //
                              //                     //
                              //                     //
                              //---------------------//
    
    
    
    // Hashing
    
    // Download and open table.c at cs50.ly/supersection2.
    // TODO: complete hash to return a number, 0-25, depending on
    // the first character in the world.
    
    // we will walk through it together!

    
    // Hashing
    
    // Download and open table.c at cs50.ly/supersection2.
    // TODO: complete hash to return a number, 0-25, depending on
    // the first character in the world.
    
    // we will walk through it together!
    
    
                            //---------------------//
                            //                     //
                            //                     //
                            //                     //
                            //                     //
    // "Hey!" →→→→→→→→→→→→→ //    Hash Function    // →→→→→→→→→→→→→  7
                            //                     //
                            //                     //
                            //                     //
                            //                     //
                            //---------------------//
    
    
    // Hashing
    
    // Download and open table.c at cs50.ly/supersection2.
    // TODO: complete hash to return a number, 0-25, depending on
    // the first character in the world.
    
    // we will walk through it together!

    
    
    return 0;
}

bool unload(node *list) {
    
    // TODO: Free all allocated nodes
    node *ptr = list;
    
    while (ptr != NULL) {
        
        ptr = list->next;
        free(list);
        list = ptr;
    }
    
    return true;
}



void visualizer(node *listTwo) {
    
    printf("\n+-- List Visualizer --+ \n\n");
    
    while (listTwo != NULL) {
        
        printf("Location %p\nPhrase: \"%s\"\nNext: %p\n\n", listTwo, listTwo->phrase, listTwo->next);
        
        listTwo = listTwo->next;
    }
    printf("+---------------------+\n\n");
}


