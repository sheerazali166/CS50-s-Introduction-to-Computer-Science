//
//  main.c
//  Memory
//
//  Created by Sheeraz on 10/8/24.
//

#include <stdio.h>
#include "addresses.h"
#include "compare.h"
#include "copy.h"
#include "memory.h"
#include "garbage.h"
#include "swap.h"
#include "phonebook.h"
#include "cp.h"


int main(int argc, const char * argv[]) {
    
    // Program 1
    
    printf("-------------------Program 1-------------------\n");
    
    // Welcome!
    
    // In previous weeks, we talked about images being made of smaller building blocks called pixels.
    
    // Today, we will go into further detail about the zeros and ones that make up these images. In particular, we will be going deeper into the fundamental
    // building blocks that make up files, including images.
    
    // Further, we will discuss how to access the underlying data stored in computer memory.
    
    // Pixel Art
    
    // Pixels are squares, individual dots, of color that are arranged on an up-down, left-right grid.
    // You can imagine as an image as a map of bits, where zeros represent black and ones represent white.
    
    
                                            //----------------------------------------//        //  2345 | 3456
    // 1 1 0 0 0 0 1 1                      //    |    | 🗄️ | 🗄️ | 🗄️ | 🗄️ |    |    //
                                            //----------------------------------------//
    // 1 0 1 1 1 1 0 1                      //    | 🗄️ |    |    |    |    | 🗄️ |    //         //  16  | 27
                                            //----------------------------------------//
    // 0 1 0 1 1 0 1 0                      // 🗄️ |    | 🗄️ |    |    | 🗄️ |    | 🗄️ //        //  0257 | 1368
                                            //----------------------------------------//
    // 0 1 1 1 1 1 1 0    -------->         // 🗄️ |    |    |    |    |    |    | 🗄️ //        //    07 |  18
    //                    -------->         //----------------------------------------//
    // 0 1 0 1 1 0 1 0    -------->         // 🗄️ |    | 🗄️ |    |    | 🗄️ |    | 🗄️ //        //  0257 | 1368
                                            //----------------------------------------//
    // 0 1 1 0 0 1 1 0                      // 🗄️ |    |    | 🗄️ | 🗄️ |    |    | 🗄️  //       //   0347 | 1458
                                            //----------------------------------------//
    // 1 0 1 1 1 1 0 1                      //    | 🗄️ |    |    |    |    | 🗄️ |    //        //   16  | 27
                                            //----------------------------------------//
    // 1 1 0 0 0 0 1 1                      //    |    | 🗄️ | 🗄️ | 🗄️ | 🗄️ |    |    //       // 2345  | 3456
                                            //----------------------------------------//
    
    // 195 189 90 126 90 102 189 195
    
    
    
    printf("\n");
    printf("Binary: %d\n", (195 + 189 + 90 + 126 + 90 + 102 + 189 + 195));
    printf("-----------------------------\n");
    printf("Binary: %d\n", (195 - 189 - 90 - 126 - 90 - 102 - 189 - 195));
    printf("\n");
    printf("%d\n", (2024 - 1176));
    printf("-----------------------------\n");
    printf("%d\n", (2024 - 786));
    printf("\n");
    
    printf("\n");
    
    printf("-----------------------------\n");
    printf("%d\n", (1176 + 786));
    printf("%d\n", (848 + 1238));
    printf("-----------------------------\n");
    printf("%d\n", (1962 - 2006)); // TODO: One again anushka problem in anushka if she can't then why is she taking credit of others
    // TODO: Currupt illigal arrogant puppies
    printf("-----------------------------\n");
    
    
    printf("-----------------------------\n");
    printf("%d\n", (1176 + 848));
    printf("%d\n", (768 + 1238));
    printf("-----------------------------\n");
    
    printf("0: %d\n", (2345 - 3456));
    printf("1: %d\n", (16 - 27));
    printf("2: %d\n", (257 - 1368));
    printf("3: %d\n", (07 - 18));
    printf("4: %d\n", (257 - 1368));
    printf("5: %d\n", (347 - 1458));
    printf("6: %d\n", (347 - 1458));
    printf("7: %d\n", (16 - 27));
    printf("8: %d\n", (2345 - 3456));
    
    // -4 | -2 | -4 | -2 | -4 | -4 | -4 | -2 | -4
    
    //  -30
    
    
    printf("%d\n", (1943 + 30));
    printf("%d\n", (1943 - 30));
    
    // Karachi ya bangal please don't use imf otherwise anushka have future plans also
    
    // RGB, or red, green, blue, are numbers that represent the amount of each of these colors. In Adobe Photoshop, you can see
    // these settings as follows:
    
    // Notice how the amount of red, blue, and green changes the color selected.
    
    // You can see by the image above that color is not just represented in three values. At the bottom of the window, there is a special value
    // made up of numbers and characters. 255 is represented as FF. Why might this be?
    
    // Hexadecimal
    
    // Hexadecimal is a system of counting that has 16 counting values. They are as follows:
    
    // 0 1 2 3 4 5 6 7 8 9 a b c d e
    
    
    // Notice that F represents 15.
    // When counting in hexadecimal, each column is a power of 16.
    // The number 0 is represented as 00
    // The number 1 is represented as 01.
    // The number 9 is represented by 09.
    // The number 10 is represented as 0A.
    // The number 15 is represented as 0F.
    // The number 16 is represented as 10.
    
    // The number 255 is represented as FF, because 16 x 15 (or F) is 240. Add 15 more to make 255. This is the highest number you can count using
    // a two-digit hexadecimal system.
    
    // Hexadecimal is useful because it can be represented using fewer digits. Hexadecimal allows us to represent information more succinctly.
    
    // Memory
    
    // In weeks past, you may recall our artist rendering of concurrent blocks of memory. Applying hexadecimal numbering to each of these blocks of
    // memory, you can visualize these as follows:
    
    //----------------------------------------------------------------------//
    //   0   //   1   //   2   //   3   //   4   //   5   //   6   //   7   //
    //----------------------------------------------------------------------//
    //   8   //   9   //   A   //   B   //   C   //   D   //   E   //   F   //
    //----------------------------------------------------------------------//
    //   10  //  11   //  12   //  13   //  14   //  15   //  16   //  17   //
    //----------------------------------------------------------------------//
    //   18  //  19   //  A1   //  B1   //  C1   //  D1   //  E1   //  F1   //
    //----------------------------------------------------------------------//
    //       //       //       //      //        //       //       //       //
    //----------------------------------------------------------------------//
    
    // You can imagine how there may be confusion regarding whether the 10 block above may represent a location in memory or the value 10.
    // Accordingly, by convention, all hexadecimal numbers are often represented with the 0x prefix as follows:


    //--------------------------------------------------------------------------------------//
    //   0x1   //   0x1   //   0x2   //   0x3   //   0x4   //   0x5   //   0x6   //   0x7   //
    //--------------------------------------------------------------------------------------//
    //   0x8   //   0x9   //   0xA   //   0xB   //   0xC   //   0xD   //   0xE   //   0xF   //
    //--------------------------------------------------------------------------------------//
    //   0x10  //  0x11   //  0x12   //  0x13   //  0x14   //  0x15   //  0x16   //  0x17   //
    //--------------------------------------------------------------------------------------//
    //   0x18  //  0x19   //  0xA1   //  0xB1   //  0xC1   //  0xD1   //  0xE1   //  0xF1   //
    //--------------------------------------------------------------------------------------//
    //         //        //        //          //          //         //         //         //
    //--------------------------------------------------------------------------------------//
    
    
    // Program 2
    
    printf("-------------------Program 2-------------------\n");
    
    mainTwo();
    
    
    // Program 11
    
    printf("-------------------Program 11-------------------\n");
    
    mainThree();

    // Program 17
    
    printf("-------------------Program 17-------------------\n");
    
    mainFour();
    
    // Program 24
    
    printf("-------------------Program 24-------------------\n");
    
    mainFive();
    
    
    // Program 27
    
    printf("-------------------Program 27-------------------\n");
    
    mainSix();
    
    // Program 29
    
    printf("-------------------Program 29-------------------\n");
    
    mainSeven();
    
    
    // Program 36
    
    printf("-------------------Program 36-------------------\n");
    
    mainEight();
    
    
    // Program 39
    
    printf("-------------------Program 39-------------------\n");
    
    mainNine(argc, argv);
    
    
}
