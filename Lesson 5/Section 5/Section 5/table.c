//
//  table.c
//  Section 5
//
//  Created by Sheeraz on 10/13/24.
//

#include "table.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include "ctype.h"

typedef struct node {
    
    char phrase[100];
    struct node *next;
    
} node;

node table[26];

int hash(char phraseTwo[100]);
bool unload(node *list);
void visualizer(node *listTwo);

int mainThree(void) {
    
    // Program 5
    
    printf("--------------------Program 5--------------------\n");
    
    // Add items
    for (int i = 0; i < 3; i++) {
        
        char phraseThree[100];
        
        printf("Enter a new phrase: ");
        scanf("%s", phraseThree);
        
        // Find the phrase bucket
        int bucket = hash(phraseThree);
        printf("%s hashes to %i\n", phraseThree, bucket);
        
    }
    
    // Hashing
    
    // Download and open table.c at cs50.ly/supersection2.
    // TODO: complete hash to return a number, 0-25, depending on
    // the first character in the world.
    
    // we will walk through it together!
    
    // A good hash function...
    
        // Always gives you a same value for the same input
        // Produces an even distribution across buckets
        // Uses all buckets.
    
    
    // Inheritance
    

    // A good hash function...
    
        // Always gives you a same value for the same input
        // Produces an even distribution across buckets
        // Uses all buckets.
    
    
    // Inheritance
    
    
    
                                                        // person
                                                //-----------------------//
                                                //                       //
    //                                          //        alleles        //
    //   →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→//→→→→→→→ [0 , 1 ] ←←←←←←//←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
    //  ↑                                       //                       //                                           ↑
    //  ↑                                       //-----------------------//                                           ↑
    //  ↑                                       //                       //                                           ↑
    //  ↑                                       //        parents        //                                           ↑
    //  ↑                                       //        [*P,*P]        //                                           ↑
    //  ↑                                       //        [0 , 1]        //                                           ↑
    //  ↑                                       //         ↓   ↓         //                                           ↑
    //  ↑                                       //---------↓---↓---------//                                           ↑
    //  ↑                                                  ↓   ↓                                                      ↑
    //  ↑                                                  ↓   ↓                                                      ↑
    //  ↑                                                  ↓   ↓                                                      ↑
    //  ↑                                                  ↓   ↓                                                      ↑
    //  ↑       //-----------------------//                ↓   ↓                //-----------------------//           ↑
    //  ↑       //                       //                ↓   ↓                //                       //           ↑
    //  ↑       //        alleles        //                ↓   ↓                //        alleles        //           ↑
    //  ←←←←←←←←//←←←←←↑→ [A/O , B/O ]←←←//←←←←←←←←←←←←←←←←     →→→→→→→→→→→→→→→ //  ↑→→→[A/B , B/O ]→→→→→//→→→→→→→→→→→→
       // ↑→→→→→//→→→→→→[ 0 ,   1  ]↑←←←//←←←←←←←←←←←←←←←←↑                 ↑→→→//→→↑          ↑←←←←←←←←←←//←←←←
       // ↑     //-----------------------//               ↑                 ↑   //-----------------------//   ↑
       // ↑     //                       //               ↑                 ↑   //                       //   ↑
       // ↑     //        parents        //               ↑                 ↑   //        parents        //   ↑
       // ↑     //        [*P,*P]        //               ↑                 ↑   //        [*P,*P]        //   ↑
       // ↑     //        [0 , 1]        //               ↑                 ↑   //        [0 , 1]        //   ↑
       // ↑     //         ↓   ↓         //               ↑                 ↑   //         ↓   ↓         //   ↑
       // ↑     //---------↓---↓---------//               ↑                 ↑   //---------↓---↓---------//   ↑
       // ↑                ↓   ↓                          ↑                 ↑              ↓   ↓              ↑
       // ↑     ←←←←←←←←←← ↓   ↓ →→→→→→→→→→→→→→→          ↑                 ↑    ←←←←←←←←←←←   →→→→→→→→       ↑
       // ↑     ↓                              ↓          ↑                 ↑    ↓                     ↓       ↑
    //----↑------------------//    //---------------------↑-//   //---------↑-------------//   //-----------------------//
    //    ↑                  //    //                     ↑ //   //         ↑             //   //                       //
    //    ↑  alleles         //    //        alleles      ↑ //   //        alleles        //   //        alleles        //
    //    ←←←[A , O ]        //    //        [B , O ]→→→→→→ //   //        [A , B ]       //   //        [B , O ]       //
    //                       //    //                       //   //                       //   //                       //
    //-----------------------//    //-----------------------//   //-----------------------//   //-----------------------//
    //                       //    //                       //   //                       //   //                       //
    //        parents        //    //        parents        //   //        parents        //   //        parents        //
    //        [*P,*P]        //    //        [*P,*P]        //   //        [*P,*P]        //   //        [*P,*P]        //
    //        [0↓ ,↓ 1]      //    //        [0↓ ,↓ 1]      //   //        [0↓ ,↓ 1]      //   //        [0↓ ,↓ 1]      //
    //          ↓  ↓         //    //          ↓  ↓         //   //          ↓  ↓         //   //          ↓  ↓         //
    //----------↓--↓---------//    //----------↓--↓---------//   //----------↓--↓---------//   //----------↓--↓---------//
             // ↓  →→→→→                       ↓  →→→→→                      ↓  ↓ →→→→                     ↓  ↓
             // NULL    ↓                      NULL    ↓                     ↓        ↓                    ↓   →→→
                     // ↓                              ↓                    NULL      ↓                   NULL    ↓
                     // NULL                          NULL                           NULL                        NULL
                
    
    
    
    // Inheritance
    
    
    
    
    return 0;
}

// TODO: return the correct bucket for a given phrase
int hash(char phraseTwo[100]) {
    
    
    // return toupper(phraseTwo[0] - 'A');
    return tolower(phraseTwo[0] - 'a');
   // return 0;
}
