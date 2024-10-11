//
//  addresses.c
//  Memory
//
//  Created by Sheeraz on 10/8/24.
//

#include "addresses.h"

int mainTwo(void) {
    
    // Program 3
    
    printf("-------------------Program 3-------------------\n");
    
    // In your terminal window, type code addresses.c and write your code as follows:
    
    int n = 50;
    
    printf("%i\n", n);
    
    // printf("%d\n", (1973 - 1913));
    // printf("%d\n", (50- 60));
    
    // Notice how n is stored in memory with the value 50.
    
    // Program 4
    
    printf("-------------------Program 4-------------------\n");
    
    
    // You can visualize how this program stores this value as follows:
    
    //----------------------------------------------------------------------//
    //       //       //       //       //       //       //       //       //
    //----------------------------------------------------------------------//
    //       //       //       //       //       //       //       //       //
    //----------------------------------------------------------------------//
    //       //       //       //       //       //       //       //       //
    //----------------------------------------------------------------------//
    //       //       //       //       //                                  //
    //       //       //       //       //              50                  //
    //       //       //       //       //             0X123                //
    //       //       //       //       //                                  //
    //----------------------------------------------------------------------//
    //       //       //       //      //        //       //       //       //
    //----------------------------------------------------------------------//
    
    // The C language has two powerful operators that relate to memory:
    
    // & Provides the address of something stored in memory.
    // * Instructs the compiler to go to a location in memory.
    
    // We can leverage this knowledge by modifying our code as follows:
    
    int nTwo = 50;
    printf("%p\n", &nTwo);
    
    // Notice the %p, which allows us to view the address of a location in memory. &n can be literally translated as “the address of n.”
    // Executing this code will return an address of memory beginning with 0x.

    // Program 5
    
    printf("-------------------Program 5-------------------\n");
    
    // Pointers
    
    // A pointer is a variable that contains the address of some value. Most succinctly, a pointer is an address in your computer’s memory.
    // Consider the following code:
    
    int nThree = 50;
    int *p = &nThree;
    
    printf("%p\n", p);
    
    // Notice that this code has the same effect as our previous code. We have simply leveraged our new knowledge of the & and * operators.
    // To illustrate the use of the * operator, consider the following:

    // Program 6
    
    printf("-------------------Program 6-------------------\n");
    
    int nFour = 50;
    int *pTwo = &nFour;
    
    printf("%i\n", *pTwo);
    
    // Notice that the printf line prints the integer at the location of p. int *p creates a pointer whose job is to store the memory address
    // of an integer.
    
    // Notice that the printf line prints the integer at the location of p. int *p creates a pointer whose job is to store the memory address of
    // an integer.
    
    // You can visualize our code as follows:

    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                0x123                                 //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                  //                                  //
    //                                  //              50                  //
    //                                  //             0X123                //
    //                                  //                                  //
    //----------------------------------------------------------------------//
    
    
    // Notice the pointer seems rather large. Indeed, a pointer is usually stored as an 8-byte value. p is storing the address of the 50.
    // You can more accurately visualize a pointer as one address that points to another:
    
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                   p                                  //
    //                                   ↓                                  //
    //-----------------------------------↓----------------------------------//
    //                                   ↓ →→→→→→→→→→ ↓                     //
    //                                                ↓                     //
    //                                                ↓                     //
    //------------------------------------------------↓---------------------//
    //                                  //            ↓                     //
    //                                  //              50                  //
    //                                  //             0X123                //
    //                                  //                                  //
    //----------------------------------------------------------------------//

    
    //Strings
    
    // Now that we have a mental model for pointers, we can peel back a level of simplification that was offered earlier in this course.
    // Recall that a string is simply an array of characters. For example, string s = "HI!" can be represented as follows:

    
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                0x123                                 //
    //                                  s                                   //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //                           //---------------------------------//      //
    //                           //       |       |       |         //      //
    //                           //   H   |   I   |   !   |   \0    //      //
    //                           // 0x123 | 0x124 | 0x125 |  0x126  //      //
    //                           //       |       |       |         //      //
    //                           //---------------------------------//      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    
    // However, what is s really? Where is the s stored in memory? As you can imagine, s needs to be stored somewhere. You can visualize the
    // relationship of s to the string as follows:
    
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//
    //                                                                      //
    //                                                                      //
    //                                  s                                   //
    //----------------------------------↓-----------------------------------//
    //                               ←←←                                    //
    //                               ↓                                      //
    //                               ↓                                      //
    //-------------------------------↓--------------------------------------//
    //                               ↓                                      //
    //                               ↓                                      //
    //                               ↓                                      //
    //                               ↓                                      //
    //                               ↓                                      //
    //                           //---------------------------------//      //
    //                           //       |       |       |         //      //
    //                           //   H   |   I   |   !   |   \0    //      //
    //                           // 0x123 | 0x124 | 0x125 |  0x126  //      //
    //                           //       |       |       |         //      //
    //                           //---------------------------------//      //
    //                                                                      //
    //                                                                      //
    //----------------------------------------------------------------------//

    
    // Notice how a pointer called s tells the compiler where the first byte of the string exists in memory.
    // Modify your code as follows:
    
    // Program 7
    
    printf("-------------------Program 7-------------------\n");
    
    char s[] = "HI!";
    
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    
    // Notice the above prints the memory locations of each character in the string s. The & symbol is used to show the address of each element
    // of the string. When running this code, notice that elements 0, 1, 2, and 3 are next to one another in memory.


    // Program 8
    
    printf("-------------------Program 8-------------------\n");
    
    
    // Likewise, you can modify your code as follows:
    
    char sTwo[] = "HI!";
    printf("%s\n", sTwo);
    
    // Notice that this code will present the string that starts at the location of s. This code effectively removes the training wheels of the
    // string data type offered by cs50.h. This is raw C code, without the scaffolding of the cs50 library.
    
    // You can imagine how a string, as a data type, is created.
    // Last week, we learned how to create your own data type as a struct.
    // The cs50 library includes a struct as follows: typedef char *string
    // This struct, when using the cs50 library, allows one to use a custom data type called string.
    
    // Pointer Arithmetic
    
    // You can modify your code to accomplish the same thing in a longer form as follows:
    
    
    // Program 9
    
    printf("-------------------Program 9-------------------\n");
    
    char sThree[] = "HI!";
    
    printf("%c\n", sThree[0]);
    printf("%c\n", sThree[1]);
    printf("%c\n", sThree[2]);
    
    // Notice that we are printing each character at the location of s.

    
    // Program 10
    
    printf("-------------------Program 10-------------------\n");
    
    // Further, you can modify your code as follows:
    
    char *sFour = "HI!";
    
    printf("%c\n", *sFour);
    printf("%c\n", *(sFour + 1));
    printf("%c\n", *(sFour + 2));
    
    // Notice that the first character at the location of s is printed. Then, the character at the
    // location s + 1 is printed, and so on.
    
    
    
    return 0;
}
