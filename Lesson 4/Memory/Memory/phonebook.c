//
//  phonebook.c
//  Memory
//
//  Created by Sheeraz on 10/9/24.
//

#include "phonebook.h"
#include "string.h"
#include "stdlib.h"

int mainEight(void) {
    
    // Program 37
    
    printf("-------------------Program 37-------------------\n");
    
    // File I/O
    
    // You can read from and manipulate files. While this topic will be discussed further in a future week, consider the following code for
    // phonebook.c:
    
    /*
    
    char *name = malloc(4);
    char *number = malloc(4);
    
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    
    
    // Get name and number
    
    printf("Name: ");
    scanf("%s", name);
    
    printf("Number: ");
    scanf("%s", number);
    
    // Print to file
    fprintf(file, "%s,%s\n", name, number);
    
    // Close file
    fclose(file);
    
    */
     
    // Notice that this code uses pointers to access the file.
    
    // You can create a file called phonebook.csv in advance of running the above code. After running the above program and inputting a name and phone
    // number, you will notice that this data persists in your CSV file.
    
    
    // Program 38
    
    printf("-------------------Program 38-------------------\n");
    
    // If we want to ensure that phonebook.csv exists prior to running the program, we can modify our code as follows:
    
    /*
    
    char *nameTwo = malloc(4);
    char *numberTwo = malloc(4);
    
    // Open CSV File Two
    FILE *fileTwo = fopen("phonebook_two.csv", "a");
    
    if (!fileTwo) {
        
        return 1;
    }
    
    // Get nameTwo and numberTwo
    
    printf("Name Two: ");
    scanf("%s", nameTwo);
    
    printf("Number Two: ");
    scanf("%s", numberTwo);
    
    // Print to file
    fprintf(fileTwo, "%s,%s\n", nameTwo, numberTwo);
    
    // Close file
    fclose(fileTwo);
    
    */
     
    return 0;
}
