//
//  dynamic_allocating_memory.c
//  Shorts
//
//  Created by Sheeraz on 10/10/24.
//

#include "dynamic_allocating_memory.h"


int mainFive(void) {
    
    // Program 8
    
    printf("------------------Program 8------------------\n");

    
    // Dynamic Memory Allocation

        // We can use pointers to get access to a block of dynamically-allocated
        // memory at runtime
    
        // Dynamically allocated memory comes from a pool of memory known as the
        // heap.
    
        // Prior to this point, all memory we've been working with has been coming
        // from a pool of memory known as the stack.
    
    
    //-----------------------------//
    //            text             //
    //-----------------------------//
    //       initialized data      //
    //-----------------------------//
    //      uninitialized data     //
    //-----------------------------//
    //             heap            //
    //              ↓              //
    //              ↓              //
    //              ↓              //
    //              ↓              //
    //              ↓              //
    //              ↓              //
    //              ↓              //
    //              ↓              //
    //            stack            //
    //-----------------------------//
    //   environmental variables   //
    //-----------------------------//
    
    
    //----------------------------- //
    //            text              //
    //------------------------------//
    //       initialized data       //
    //------------------------------//
    //      uninitialized data      //
    //------------------------------//
    // ----------- heap  ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // -----------   ↓   ---------- //
    // ----------- stack ---------- //
    //------------------------------//
    //   environmental variables    //
    //------------------------------//
    
    
    // Dynamic Memory Allocation
    
        // We can get this dynamically-allocated memory by making a call to
        // the C standard library function malloc(), passing as its parameter
        // the number of bytes requested.
    
        // After obtaining memory for you (if it can), malloc() will return
        // a pointer to that memory.
    
        // What if malloc() can't give you memory? it'll hand you back NULL.
    
    
        // statically obtain an integer
        // int x;
        
        
        // dynamically obtain an integer
        // int *px = malloc(4);
    
        
    
        // statically obtain an integer
        // int x;
        
        
        // dynamically obtain an integer
        // int *px = malloc(sizeof(int));

        // Get an integer from the user
        // int xTwo = GetInt();
    
    
        // Get an integer from the user
        // int xThree = GetInt();
    
        // Array of floats on the stack
        // float stack_array[xThree];
    
    
        // Get an integer from the user
        // int xFour = GetInt();

        // Array of floats on the stack
        // float stack_arrayTwo[xFour];
    
        // array of floats on the heap
        // float* heap_array = malloc(stack_arrayTwo * sizeof(float));
        
    
    
    // Dynamic Memory allocation
    
        // Here's the trouble: Dynamically allocated memory is not
        // automatically returned to the system for later use when
        // function in which it's created finishes execution.
    
        // Failing to return memory back to the system when you're
        // finished with it results in a memory leak which can
        // compromise your system's performance.
    
        // When you finish working with dynamically-allocated
        // memory, you must free() it.
    
        // char* word = malloc(50 * sizeof(char));
    
        // -----------------------------------------
    
        // char* wordTwo = malloc(50 * sizeof(char));
        
        // do stuff with wordTwo
    
        // -----------------------------------------
    
        // char* wordThree = malloc(50 * sizeof(char));
        
        // do stuff with wordThree
    
        // now we're done working that block
        // free(wordThree);
    
    
    // Dynamic Memory Allocation
    
        // Three golden rules:
    
            // 1. Every block of memory that you malloc() must
            //    susequently be free()d
    
            // 2. Only memory that you malloc() should be free()d.
    
            // 3. Do not free() a block of memory more than once.
    
    
    
    // Dynamic Memory Allocation
    
        // int m;
    
        // ----------------
    
        // int mTwo;                          //----------//
                                              // -------- //
                                              // -------- //
                                              // -------- //
                                              //----------//
                                                 // mTwo
    
    
    
    
    // -----------------------------------------------------------------------//
    
    
    
    
        // int mThree;                        //----------//
        // int* a;                            // -------- //
                                              // -------- //
                                              // -------- //
                                              //----------//
                                                // mThree
    
   
    
    
    // -----------------------------------------------------------------------//
    
    
    
    
    // int mFour;                         //----------//
    // int* aTwo;                         // -------- //
                                          // -------- //
                                          // -------- //
                                          //----------//
                                            // mFour
    
    
                                                
                                          //----------//
                                          // -------- //
                                          // -------- //
                                          // -------- //
                                          //----------//
                                             // aTwo
                            
    
    
    // -----------------------------------------------------------------------//
    
    
    

    // int mFive;                            //----------//
    // int* aThree;                          // -------- //
    // int* b = malloc(sizeof(int));         // -------- //
                                             // -------- //
                                             //----------//
                                               // mFive
    
    
                                                
                                             //----------//
                                             // -------- //
                                             // -------- //
                                             // -------- //
                                             //----------//
                                              // aThree
                            
    
    
    
    
    // -----------------------------------------------------------------------//
    

    
    // int mSix;                             //----------//             //----------//
    // int* aFour;                           // -------- //             // -------- //
    // int* bTwo = malloc(sizeof(int));      // -------- //             // -------- //
                                             // -------- //             // -------- //
                                             //----------//             //----------//
                                               // mSix                      // ↑
                                                                            // ↑
                                                                            // ↑
                                                                            // ↑
                                              //----------//            //----------//
                                              // -------- //            // -------- //
                                              // -------- //            // -------- //
                                              // -------- //            // -------- //
                                              //----------//            //----------//
                                               // aFour                     // bTwo
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mSeven;                             //----------//             //----------//
    // int* aFive;                             // -------- //             // -------- //
    // int* bThree = malloc(sizeof(int));      // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               //----------//             //----------//
                                                // mSeven                    // ↑
                                                                             // ↑
                                                                             // ↑
                                                                             // ↑
                                               //----------//             //----------//
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               //----------//             //----------//
                                                // aFive                    // bThree
    
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mEight;                             //----------//             //----------//
    // int* aSix;                              // -------- //             // -------- //
    // int* bFour = malloc(sizeof(int));       // -------- //             // -------- //
    // aSix = &mEight;                         // -------- //             // -------- //
                                               //----------//             //----------//
                                                // mEight                    // ↑
                                                                             // ↑
                                                                             // ↑
                                                                             // ↑
                                               //----------//             //----------//
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               //----------//             //----------//
                                                // aSix                     // bFour
    
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mNine;                              //----------//             //----------//
    // int* aSeven;                            // -------- //             // -------- //
    // int* bFive = malloc(sizeof(int));       // -------- //             // -------- //
    // aSeven = &mNine;                        // -------- //             // -------- //
                                               //----------//             //----------//
                                                // mNine                     // ↑
                                                  // ↑                       // ↑
                                                  // ↑                       // ↑
                                                  // ↑                       // ↑
                                               //----------//             //----------//
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               //----------//             //----------//
                                                // aSeven                   // bFive
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mTen;                               //----------//             //----------//
    // int* aEight;                            // -------- //             // -------- //
    // int* bSix = malloc(sizeof(int));        // -------- //             // -------- //
    // aEight = &mTen;                         // -------- //             // -------- //
    // aEight = bSix;                          //----------//             //----------//
                                                // mTen                      // ↑
                                                  // ↑                       // ↑
                                                  // ↑                       // ↑
                                                  // ↑                       // ↑
                                               //----------//             //----------//
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               // -------- //             // -------- //
                                               //----------//             //----------//
                                                // aEight                   // bSix
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mEleven;                               //----------//             //----------//
    // int* aNine;                                // -------- //        →→→→→// -------- //
    // int* bSeven = malloc(sizeof(int));         // -------- //        ↑    // -------- //
    // aNine = &mEleven;                          // -------- //        ↑    // -------- //
    // aNine = bSeven;                            //----------//        ↑    //----------//
                                                    // mEleven          ↑         // ↑
                                                                     // ↑         // ↑
                                                      // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aNine                    // bSseven
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mTwelve;                               //----------//             //----------//
    // int* aTen;                                 // -------- //        →→→→→// -------- //
    // int* bEight = malloc(sizeof(int));         //    10    //        ↑    // -------- //
    // aTen = &mTwelve;                           // -------- //        ↑    // -------- //
    // aTen = bEight;                             //----------//        ↑    //----------//
                                                    // mTwelve          ↑         // ↑
                                                                     // ↑         // ↑
                                                      // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aTen                    // bEight
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mThirteen;                             //----------//             //----------//
    // int* aEleven;                              // -------- //        →→→→→// -------- //
    // int* bNine = malloc(sizeof(int));          //    10    //        ↑    // -------- //
    // aEleven = &mThirteen;                      // -------- //        ↑    // -------- //
    // aEleven = bNine;                           //----------//        ↑    //----------//
    // *bNine = mThirteen + 2;                    // mThirteen          ↑         // ↑
                                                                     // ↑         // ↑
                                                      // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aEleven                   // bNine
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mFourteen;                             //----------//             //----------//
    // int* aTwelve;                              // -------- //        →→→→→// -------- //
    // int* bTen = malloc(sizeof(int));           //    10    //        ↑    //    12    //
    // aTwelve = &mFourteen;                      // -------- //        ↑    // -------- //
    // aTwelve = bTen;                            //----------//        ↑    //----------//
    // *bTen = mFourteen + 2;                     // mFourteen          ↑         // ↑
                                                                     // ↑         // ↑
                                                      // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aTwelve                   // bTen
                                                    
    

    
    // -----------------------------------------------------------------------------------//
    

    
    // int mFifteen;                              //----------//             //----------//
    // int* aThirteen;                            // -------- //        →→→→→// -------- //
    // int* bEleven = malloc(sizeof(int));        //    10    //        ↑    //    12    //
    // aThirteen = &mFifteen;                     // -------- //        ↑    // -------- //
    // aThirteen = bEleven;                       //----------//        ↑    //----------//
    // *bEleven = mFifteen + 2;                    // mFifteen          ↑         // ↑
    // free(bEleven);                                                // ↑         // ↑
                                                      // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aThirteen                // bEleven
    
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mSixteen;                              //----------//             //----------//
    // int* aFourteen;                            // -------- //        →→→→→//          //
    // int* bTwelve = malloc(sizeof(int));        //    10    //        ↑    //          //
    // aFourteen = &mSixteen;                     // -------- //        ↑    //          //
    // aFourteen = bTwelve;                       //----------//        ↑    //----------//
    // *bTwelve = mSixteen + 2;                    // mSixteen          ↑         // ↑
    // free(bTwelve);                                                // ↑         // ↑
                                                      // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aFourteen                // bTwelve
    
    
    
    // -----------------------------------------------------------------------------------//
    

    
    // int mSeventeen;                            //----------//             //----------//
    // int* aFifteen;                             // -------- //        →→→→→//          //
    // int* bThirteen = malloc(sizeof(int));      //    10    //        ↑    //          //
    // aFifteen = &mSeventeen;                    // -------- //        ↑    //          //
    // aFifteen = bTwelve;                        //----------//        ↑    //----------//
    // *bThirteen = mSeventeen + 2;               // mSeventeen         ↑         // ↑
    // free(bThirteen);                                              // ↑         // ↑
    // aFifteen = 11;                                 // →→→→→→→→→→→→→→→→         // ↑
                                                      // ↑                        // ↑
                                                  //----------//             //----------//
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  // -------- //             // -------- //
                                                  //----------//             //----------//
                                                   // aFifteen               // bThirteen
    
    
    
    
    
    
    
    
    return 0;
}
