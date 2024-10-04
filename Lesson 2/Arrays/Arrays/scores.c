//
//  scores.c
//  Arrays
//
//  Created by Sheeraz on 10/3/24.
//

#include "scores.h"

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);

int mainThree(void) {
    
    // Program 10
    
    printf("-----------------Program 10-----------------\n");
    
    // Arrays
    
    // In Week 0, we talked about data types such as bool, int, char, string, etc.
    
    // Each data type requires a certain amount of system resources:
    
    // bool 1 byte
    // int 4 bytes
    // long 8 bytes
    // float 4 bytes
    // double 8 bytes
    // char 1 byte
    // string ? bytes
    
    // Inside of your computer, you have a finite amount of memory available.
    
    // Physically, on the memory of your computer, you can imagine how specific types of data are stored on your computer.
    // You might imagine that a char, which only requires 1 byte of memory, may look as follows:
    
    // Similarly, an int, which requires 4 bytes might look as follows:
    
    // We can create a program that explores these concepts. Inside your terminal, type code scores.c and write code as
    // follows:
    
    // Scores
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;
    
    // Print average
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
    
    // Notice that the number on the right is a floating point value of 3.0, such that the calculation is rendered as a
    // floating point value in the end.
    
    // Running make scores, the program runs.
    // You can imagine how these variables are stored in memory:
    // Arrays are a way of storing data back-to-back in memory such that this data is easily accessible.
    
    // int scores[3] is a way of telling the compiler to provide you three back-to-back places in memory of size int to store
    // three scores. Considering our program, you can revise your code as follows:
    
    // Program 11
    
    printf("-----------------Program 11-----------------\n");
    
    /*
    
    // Scan Scores
    int scores[3];
    
    printf("Score: ");
    scanf("%d", &scores[0]);
    
    printf("Score: ");
    scanf("%d", &scores[1]);
    
    printf("Score: ");
    scanf("%d", &scores[2]);
    
    // Print average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    
    
    */
    
    // Notice that score[0] examines the value at this location of memory by indexing into the array called scores at location
    // 0 to see what value is stored there.

    // Program 12
    
    printf("-----------------Program 12-----------------\n");
    
    // You can see how while the above code works, there is still an opportunity for improving our code. Revise your code as
    // follows:
    
    /*
    
    // Get scoresTwo
    int scoresTwo[3];
    
    for (int i = 0;i < 3;i++) {
        
        printf("Score: ");
        scanf("%d", &scoresTwo[i]);
    }
    
    
    
    // Print average
    printf("Average: %f\n", (scoresTwo[0] + scoresTwo[1] + scoresTwo[2]) / 3.0);
    
    */
     
    // Notice how we index into scores by using scores[i] where i is supplied by the for loop.
    
    // Program 13
    
    printf("-----------------Program 13-----------------\n");
    
    // We can simplify or abstract away the calculation of the average. Modify your code as follows:
    
    /*
    
    // Get scoresThree
    int scoresThree[N];
    
    for (int iThree = 0;iThree < N;iThree++) {
        
        printf("Score: ");
        scanf("%d", &scoresThree[iThree]);
    }
    
    // Print average
    printf("Average: %f\n", average(N, scoresThree));
    
    */
     
    // Notice that a new function called average is declared. Further, notice that a const or constant value of N is declared.
    // Most importantly, notice how the average function takes int array[], which means that the compiler passes an array to
    // this function.
    
    return 0;
}


// Program 13

float average(int length, int array[]) {

    // Calculate average
    int sum = 0;
    
    for (int iTwo = 0;iTwo < length;iTwo++) {
        sum += array[iTwo];
    }
    
    return sum / (float)length;
}



