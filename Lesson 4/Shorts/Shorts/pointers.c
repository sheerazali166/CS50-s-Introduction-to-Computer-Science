//
//  pointers.c
//  Shorts
//
//  Created by Sheeraz on 10/10/24.
//

#include "pointers.h"

int mainThree(void) {
    
    // Program 4
    
    printf("------------------Program 4------------------\n");
    
    
    // Pointers

        // Pointers provide an alternative way to pass data between functions.
            
            // Recall that up to this point, we have passed all data by value, on one execution.
            // When we pass data by value we only pass a copy of that data.
    
    
    // If we use pointers, instead we have the power to pass the actual variable itself.
        
        // That mean that a change that is made in one function can impact previously,
        // This wasn't possible!
    
    
    // Pointers
    
        // Before we dive into what pointers are and how to work with them, it's worth going back to
        // basics and have a look at our computer's memory.
    
    
        // Every file on your computer lives on your disk drive, be it a hard disk drive (HDD) or
        // a solid-state-drive (SSD).
    
        // Disk drives are just storage space; we can't directly work there. manipulation and use
        // of data can only take place in RAM, so we have to move data there.
    
        // Memory is basically huge array of 8-bit wide bytes.
            // 512 MB, 1GB, 2GB, 4GB...
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //            float              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             float             |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //            double             |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             float             |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             double            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //          long long            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             float             |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             double            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //          long long            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //            string             |                 ???                 //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    // Pointers
    
        // Back to this idea of memory as a big array of byte-sized cells.
    
        // Recall from our discussion of arrays that they not noly are
        // useful for storage of information but also for so-called
        // random access.
    
            // We can access indivual elements of the array by indicating
            // which index location we want.
    
        // Similarly, each location in memory has an address.
    
    
    //---------------------------------------------------------------------------------------------------//
    //    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    //
    //---------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15    16   17   18  19
    
    
    //---------------------------------------------------------------------------------------------------//
    //    |    |    |    | H  |    |    |    | 🗄️ | 🗄️ | 🗄️ |🗄️ |    |    |    |    |    |    |    |    //
    //---------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15    16   17   18  19
    
    
                                    //  char c = 'H';
                                    //  int speedlimit = 65;
    
    
    
    //-----------------------------------------------------------------------------------------------------//
    //    |    |    |    | 0100 |    |    |     | 0000000000000000 |    |    |    |    |    |    |    |    //
    //    |    |    |    | 1000 |    |    |     | 0000000001000001 |    |    |    |    |    |    |    |    //
    //-----------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15    16   17   18  19
    

                                    //  char c = 'H';
                                    //  int speedlimit = 65;
    
    
    //--------------------------------------------------------------------------------------------------------------//
    //    |    |    |    | 0100 |    |    |     | 0000 | 0000 | 0000 | 0000 |    |    |    |    |    |    |    |    //
    //    |    |    |    | 1000 |    |    |     | 0000 | 0000 | 0100 | 0001 |    |    |    |    |    |    |    |    //
    //--------------------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5     6     7     8       9     10     11    12   13   14   15   16   17   18   19
    
    
                                    //  char c = 'H';
                                    //  int speedlimit = 65;

    
    //--------------------------------------------------------------------------------------------------//
    //    |    |    |    |  H   |    |    |     |        65     |    |    |    |    |    |    |    |    //
    //--------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15    16   17   18  19
    

                                    //  char c = 'H';
                                    //  int speedlimit = 65;
    
    
    //--------------------------------------------------------------------------------------------------//
    //    |    |    |    |  H   |    |    |     |        65     |    |    |    |    |    |    |    |    //
    //--------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15    16   17   18  19
    

                                    //  char c = 'H';
                                    //  int speedlimit = 65;
                                    // string surname = "Lloyd";
    
    
    //--------------------------------------------------------------------------------------------------//
    //    |    |    |    |  H   |    |    |     |        65     | L  | l  | o  | y  | d  |    |    |    //
    //--------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15    16   17   18  19
    

                                    //  char c = 'H';
                                    //  int speedlimit = 65;
                                    // string surname = "Lloyd";
    
    
    //--------------------------------------------------------------------------------------------------//
    //    |    |    |    |  H   |    |    |     |        65     | L  | l  | o  | y  | d  | \0 |    |    //
    //--------------------------------------------------------------------------------------------------//
    //  0   1    2    3     4    5    6    7    8    9   10   11   12   13   14   15   16  17   18   19
    

                                    //  char c = 'H';
                                    //  int speedlimit = 65;
                                    // string surname = "Lloyd";
                                    
    
    
    // Pointers
    
        // There's only one critical thing to remember as we start working
        // with pointers.
    
    
            // Pointers are just addresses
    
    
    // As we start to work with pointers, just keep this image in mind.
    
    
    //------------------------//
    //                        //
    //------------------------//
              // k
    
    
                        // int k;
    
    
    //------------------------//
    //           5            //
    //------------------------//
              // k
    
    
                                        // int k;
                                        // k = 5;
                        
    
    
    
    
    //------------------------//                            //------------------------//
    //           5            //                            //                        //
    //------------------------//                            //------------------------//
                                                                        // pk
    
    
                    
                                        // int k;
                                        // k = 5;
                                        // int* pk;
    
    
    
    
    //------------------------//                             //------------------------//
    //           5            //                             //       0x80C74820       //
    //------------------------//                             //------------------------//
                                                                        // pk
    
    
                    
                                        // int k;
                                        // k = 5;
                                        // int* pk;
                                        // pk = &k;
    
    
    
    //------------------------//                             //------------------------//
    //           5  ←←←←←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                             //------------------------//
                                                                        // pk
    
    
                    
                                        // int k;
                                        // k = 5;
                                        // int* pk;
                                        // pk = &k;
                
    
    
    
    // Pointers
    
        // A pointer, then is a data item whose
        // value is memory addresss
    
        // type describes the data located at that memory address.
    
        // As such, pointers allow data structures and/or variables to be
        // shared among functions.
    
        // pointers make a computer environment more like the real world.
    
    
        // The simplest pointer available to us in C is the NULL pointer.
            
            // As you might expect, this pointer points to nothing (a
            // fact with can actually come in handy!)
    
    
        // When you create a pointer and you don't set its value
        // immediately, you should always set the value of the
        // pointer to NULL.
    
        // You can check whether a pointer is NULL using the equality
        // operator(==)
    
    
        // Another easy way to create a pointer is to simply extract the
        // address of an already existing variable. We can do this with
        // the address extraction operator(&).
    
        // If x is an int-type variable, then &x is a pointer-to int whose
        // value is the address of x.
    
        // If arr is an array of doubles, the &arr[i] is a pointer-to-double
        // who value is the address of the i^th element of arr.
            
            // An array's name, then, is actually just a pointer to its first
            // element- you've been working with pointers all among.
    
    
        // The main purpose of pointer is to allow us to modify or inspect
        // the location to which it points.
   
            // We do this by dereferencing the pointer.
                
        // If we have a pointer-to-char called pc, then *pc is the data
        // that lives at the memory address stored inside the variable
        // pc.
    
        // Used in this context, * is known as the dereference operator.
        
        // It "goes to the reference" and accesses the data at that memory
        // location, allowing you to manipulate it at will.
    
    
        // This is just like visiting your neighbor. having their address isn't
        // enough. You need to go to the address and only then can you interact
        // with them.          -----
        
        // Can you guess what might happen if we try to derefence a pointer
        // whose value is NULL?
    

        // Can you guess what might happen if we try to derefence a pointer
        // whose value is NULL?
    
        
                        // Segmentation fault
    
    
      // Surprisingly, this is actually good behavior! It defend against
      // accidental dangerous manipulation of unknown pointers.
    
    
        // That's why we recommend you set your pointers to NULL
        // immediately if you aren't setting them to a known, desired
        // value
    
    
                                // int* p;
    
      
      // The value of p is an address.
      // We can derefence p with the * operator.
      // If we do, what we'll find at that location is an int.
    
    
     // One more annoying thing with those *s. They're an important
     // part of both the type name and the variable name.
    
        // Best illustrated with an example.
    
                    // int* px, py, pz;
    
    
    // One more annoying thing with those *s. They're an important
    // part of both the type name and the variable name.
   
       // Best illustrated with an example.
   
                   // int* px, py, pz;
                   // ---------------
                   
                   // int* pa, *pb, *pc;
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             float             |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             double            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //          long long            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //            string             |                 ???                 //
    //                               |                                     //
    //---------------------------------------------------------------------//
    
    
    
    
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             float             |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             double            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //          long long            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char*             |                4 or 8               //
    //                               |                                     //
    //---------------------------------------------------------------------//
        
    //---------------------------------------------------------------------//
    //           Data Type           |           Size (in bytes)           //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //              int              |                  4                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             char              |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             float             |                  1                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //             double            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //          long long            |                  8                  //
    //                               |                                     //
    //---------------------------------------------------------------------//
    //                               |                                     //
    //      char*, int*, float*      |                                     //
    //                               |               4 or 8                //
    //      double*, _______*        |                                     //
    //                               |                                     //
    //---------------------------------------------------------------------//

    
    // Pointers
    
        // So what happens?
    
    
    
    //------------------------//                             //------------------------//
    //           5  ←←←←←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                             //------------------------//
                
              // k                                                      // pk
    
    
    
    //------------------------//                             //------------------------//
    //           5  ←←←←←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                             //------------------------//
                
              // k                                                      // pk
     
    
                                            // *pk = 35;
    
    
    //------------------------//                             //------------------------//
    //           5  ←←←←←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                             //------------------------//
                
              // k                                                      // pk
     
    
    //-----------------------//
    //                       //              // int m;
    //-----------------------//
    
              // m

    
    //------------------------//                             //------------------------//
    //          35  ←←←←←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                             //------------------------//
                
              // k                                                      // pk
     
    
    //-----------------------//
    //                       //              // int m;
    //-----------------------//              // m = 4;
    
              // m
    

    
    //------------------------//                             //------------------------//
    //          35  ←←←←←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                             //------------------------//
                
              // k                                                      // pk
     
    
    //-----------------------//
    //           4           //              // int m;
    //-----------------------//              // m = 4;
                                             // pk = &m;
              // m

    
    
    
    //------------------------//                             //------------------------//
    //          35            //                  ←←←←←←←←←←←//←←←←←←←←←←←←            //
    //------------------------//                  ↓          //------------------------//
              // k                             // ↓                     // pk
                                               // ↓
              // ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
              // ↓
    //-----------------------//
    //           4           //              // int m;
    //-----------------------//              // m = 4;
             // m                            // pk = &m;
             

    
    return 0;
}
