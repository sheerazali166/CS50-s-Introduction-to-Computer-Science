//
//  recursion.c
//  Algorithms
//
//  Created by Sheeraz on 10/5/24.
//

#include "recursion.h"

void draw(int n);
void drawTwo(int nTwo);

int mainFour(void) {
    
    // Program 8
    
    printf("-----------------Program 8-----------------\n");
    
    // To implement this using recursion, type code recursion.c into your terminal window and write code as follows:
    
    // draw(1);
    
    // Notice that the draw function calls itself. Further, note that your code may get caught in an infinite loop.
    // To break from this loop, if you get stuck, hit ctrl-c on your keyboard. The reason this creates an infinite
    // loop is that there is nothing telling the program to end. There is no case where the program is done.

    // Program 9
    
    printf("-----------------Program 9-----------------\n");
    
    // We can correct our code as follows:
    
    int height;
    
    // Get the height of pyramid
    printf("Height: ");
    scanf("%d", &height);
    
    // Draw pyramid
    drawTwo(height);
    
    
    // Notice the base case will ensure the code does not run forever. The line if (n <= 0) terminates the recursion
    // because the problem has been solved. Every time draw calls itself, it calls itself by n-1. At some point, n-1
    // will equal 0, resulting in the draw function returning and the program will end.
    
    // Merge Sort
    
    // We can now leverage recursion in our quest for a more efficient sort algorithm and implement what is called
    // merge sort, a very efficient sort algorithm.
    
    // The pseudocode for merge sort is quite short:
    
    // If only one number
        // Quit
    // Else
        // Sort left half of number
        // Sort right half of number
        // Merge sorted halves
    
    // Consider the following list of numbers:
    
    // 6341
    
    // First, merge sort asks, “is this one number?” The answer is “no,” so the algorithm continues.
    
    // 6341
    
    // Second, merge sort will now split the numbers down the middle (or as close as it can get) and sort the left
    // half of numbers.
    
    // 63|41
    
    // Third, merge sort would look at these numbers on the left and ask, “is this one number?” Since the answer is
    // no, it would then split the numbers on the left down the middle.
        
    // 6|3
    
    // Fourth, merge sort will again ask , “is this one number?” The answer is yes this time! Therefore, it will quit
    // this task and return to the last task it was running at this point:
    
    // 63|41
    
    // Fifth, merge sort will sort the numbers on the left.
    
    // 36|41
    
    
    // Now, we return to where we left off in the pseudocode now that the left side has been sorted. A similar
    // process of steps 3-5 will occur with the right-hand numbers. This will result in:
    
    // 36|14
    
    // Both halves are now sorted. Finally, the algorithm will merge both sides. It will look at the first number on
    // the left and the first number on the right. It will put the smaller number first, then the second smallest.
    // The algorithm will repeat this for all numbers, resulting in:

    // 1346
    
    // Merge sort is complete, and the program quits.
    
    // Merge sort is a very efficient sort algorithm with a worst case of O(nlog n). The best case is still Ω(n log n)
    // because the algorithm still must visit each place in the list. Therefore, merge sort is also Θ(n log n) since
    // the best case and worst case are the same.
    
    // A final visualization was shared.
    
    // Summing Up
    
    // In this lesson, you learned about algorithmic thinking and building your own data types. Specifically,
    // you learned…
    
    // Algorithms.
    // Big O notation.
    // Binary search and linear search.
    // Various sort algorithms, including bubble sort, selection sort, and merge sort.
    // Recursion.
    
    // See you next time!
    
    return 0;
}

// Program 8

void draw(int n) {
    
    for (int i = 0;i < n;i++) {
        
        printf("#");
    }
    
    printf("\n");
    
    draw(n + 1);
}

// Program 9

void drawTwo(int nTwo) {
    
    // If nothing to draw
    if (nTwo < 0) {
        
        return;
    }
    
    // Draw paramid of height n - 1
    drawTwo(nTwo - 1);
    
    // Draw one more row of width n
    for (int iTwo = 0;iTwo < nTwo;iTwo++) {
        printf("#");
    }
    
    printf("\n");
}
