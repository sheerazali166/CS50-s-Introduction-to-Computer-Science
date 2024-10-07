//
//  search.c
//  Section 3
//
//  Created by Sheeraz on 10/6/24.
//

#include "search.h"
#include "string.h"

typedef struct {
    
    char name[50];
    int votes;
    
} candidate;

typedef struct {
    
    char nameTwo[50];
    int votesTwo;
    
} candidateTwo;


int mainTwo(void) {
    
    // Program 3
    
    printf("------------------Program 3------------------\n");
    
    /*
    
    const int num_condidates = 3;
    
    candidate candidates[num_condidates];
    
    strcpy(candidates[0].name, "Carter");
    candidates[0].votes = 10;
    
    strcpy(candidates[1].name, "Yulia");
    candidates[1].votes = 12;
    
    strcpy(candidates[2].name, "Inno");
    candidates[2].votes = 7;
    
    
    // TODO: Find highest number of votes
    int highest_votes = 0;
    
    for (int i = 0;i < num_condidates;i++) {
        
        if (candidates[i].votes > highest_votes) {
            
            highest_votes = candidates[i].votes;
        }
        
    }
    
    printf("%i\n", highest_votes);

    */
    
    // TODO: Print the name of candidate with highest number of votes
    
    
    // Program 4
    
    printf("------------------Program 4------------------\n");
    
    const int num_condidatesTwo = 3;
    
    candidateTwo candidatesTwo[num_condidatesTwo];
    
    strcpy(candidatesTwo[0].nameTwo, "Carter");
    candidatesTwo[0].votesTwo = 10;
    
    strcpy(candidatesTwo[1].nameTwo, "Yulia");
    candidatesTwo[1].votesTwo = 12;
    
    strcpy(candidatesTwo[2].nameTwo, "Inno");
    candidatesTwo[2].votesTwo = 7;
    
    
    // TODO: Find highest number of votes
    int highest_votesTwo = 0;
    
    for (int iTwo = 0;iTwo < num_condidatesTwo;iTwo++) {
        
        if (candidatesTwo[iTwo].votesTwo > highest_votesTwo) {
            
            highest_votesTwo = candidatesTwo[iTwo].votesTwo;
        }
        
    }
    
    printf("%i\n", highest_votesTwo);

    
    // TODO: Print the name of candidate with highest number of votes
    
    for (int iThree = 0;iThree < num_condidatesTwo;iThree++) {
        
        if (candidatesTwo[iThree].votesTwo == highest_votesTwo) {
            
            printf("%s\n", candidatesTwo[iThree].nameTwo);
            
        }
        
    }
    
    

    // How many steps did each algorithm take?
    
    
    //------------------------------------------------------------------//
    //          Linear Search       //       Binary Search              //
    //------------------------------------------------------------------//
    //                3            //              3                    //
    //------------------------------------------------------------------//
    
    // Most Votes
    
    // Create an array of candidates.
    
    // Search the array to find the most votes awarded
    // to any single candidate.
    
    // Print out that candidate's name

    // Recursion
    
    // Factorial
    
    // Factorial
        
        // 1! = 1
    
    // Factorial
        
        // 1! = 1
        // 2! = 2 * 1
    
    
    // Factorial
        
        // 1! = 1
        // 2! = 2 * 1
        // 3! = 3 * 2 * 1
    
    // Factorial
        
        // 1! = 1   ----------> 1
        // 2! = 2 * 1   ----------> 2
        // 3! = 3 * 2 * 1  ----------> 6
        // 4! = 4 * 3 * 2 * 1  ----------> 24
    
    // Factorial
        
                    // 1! = 1
                // 2! = 2 * 1
            // 3! = 3 * 2 * 1
        // 4! = 4 * 3 * 2 * 1
    
    
    // Factorial
        
        // 4! = ?
    
    // Factorial
        
        // 4! = 4 * 3!
                // ----
                // Recursive call
    
    
    // Factorial
        
        // 4! = 4 * 3 * 2 * 1
    
    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * * 2!
    
    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    // Factorial
        
        // 4! = 4 * 3!      |
        // 3! = 3 * 2!      |    Call stack
        // 2! = 2 * 1       |
        // 1! = 1           |
    
    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
        // 1! = 1
        // ------
        // base case
    

    // Factorial

        // 4! = 4 * 3!      |
        // 3! = 3 * 2!      |    Call stack
        // 2! = 2 * 1       |
        // 1! = 1           |
    

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
         
    // Factorial

        // 4! = 4 * 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
         

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1

    // Factorial

        // 4! = 4 * 3!     |
        // 3! = 3 * 2!     |    Call stack
        // 2! = 2 * 1!     |
        // 1! = 1          |

    
    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1!
        // 1! = 1
        // ------
        // base case
    
    
    // Factorial

        // 4! = 4 * 3!     |
        // 3! = 3 * 2!     |    Call stack
        // 2! = 2 * 1!     |
        // 1! = 1          |
    
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
        // 2! = 2 * 1
    
    
    // Factorial

        // 4! = 4 * 3!     |
        // 3! = 3 * 2!     |    Call stack
        // 2! = 2 * 1!     |
        // 1! = 1          |
   

    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1!
        // 1! = 1
        // ------
        // base case


    // Factorial

        // 4! = 4 * 3!     |
        // 3! = 3 * 2!     |    Call stack
        // 2! = 2 * 1!     |
        // 1! = 1          |

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1
    
    // Factorial

        // 4! = 4 * 3 * 2 * 1

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    // Factorial

        // 4! = 4 * 3!      |
        // 3! = 3 * 2!      |   Call stack
        // 2! = 2 * 1       |
        // 1! = 1           |

    // Factorial
        
        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1!
        // 1! = 1
        // ------
        // base case
    

    // Factorial

        // 4! = 4 * 3!      |
        // 3! = 3 * 2!      |   Call stack
        // 2! = 2 * 1       |
        // 1! = 1           |

    // Factorial

        // 4! = 4 * 3 * 2 * 1

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2 * 1

    // Factorial

        // 4! = 4 * 3!
        // 3! = 3 * 2!
        // 2! = 2 * 1
    
    return 0;
}
