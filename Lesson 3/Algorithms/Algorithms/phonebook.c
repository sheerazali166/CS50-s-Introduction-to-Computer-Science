//
//  phonebook.c
//  Algorithms
//
//  Created by Sheeraz on 10/5/24.
//

#include "phonebook.h"
#include "string.h"

typedef struct{
    
    char nameTwo[50];
    char number[50];
    
} person;

int mainThree(void) {
    
    // Program 5
    
    printf("-----------------Program 5-----------------\n");
    
    // We can combine these ideas of both numbers and strings into a single program. Type code phonebook.c into your
    // terminal window and write code as follows:
    
    /*
    
    // Arrays of strings
    
    char *names[] = { "Carter", "David", "John" };
    
    char *numbers[] = { "+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750" };
    
    // Search for name
    char name[50];
    
    printf("Name: ");
    scanf("%[^[\n]s", name);
    
    for (int i = 0;i < 3;i++) {
        
        if (strcmp(names[i], name) == 0) {
            
            printf("Found %s\n", numbers[i]);
            
            return 0;
        }
    }
    
    printf("Not Found\n");
    
    
    */
     
    
    // Notice that Carter’s number begins with +1-617, David’s phone number starts with +1-617, and John’s number
    // starts with +1-949. Therefore, names[0] is Carter and numbers[0] is Carter’s number. This code will allow
    // us to search the phonebook to for a person’s specific number.
    
    // While this code works, there are numerous inefficiencies. Indeed, there is a chance that people’s names and
    // numbers may not correspond. Wouldn’t be nice if we could create our own data type where we could associate
    // a person with the phone number?

    // Program 6
    
    printf("-----------------Program 6-----------------\n");
    
    // Data Structures
    
    // It turns out that C allows a way by which we can create our own data types via a struct.
    // Would it not be useful to create our own data type called a person, that has inside of it a name and number.
    // Modify your code as follows:
    
    /*
    
    person people[3];
    
    strcpy(people[0].nameTwo, "Carter");
    strcpy(people[0].number, "+1-617-495-1000");
    
    strcpy(people[1].nameTwo, "David");
    strcpy(people[1].number, "+1-617-495-1000");
    
    strcpy(people[2].nameTwo, "John");
    strcpy(people[2].number, "+1-949-468-2750");
  
  
    // Serach for nameThree
    char nameThree[50];
    
    printf("nameThree: ");
    scanf("%s", nameThree);
    
    
    
    for (int iTwo = 0;iTwo < 3;iTwo++) {
        
        if (strcmp(people[iTwo].nameTwo, nameThree) == 0) {
            
            printf("Found %s\n", people[iTwo].number);
            
            return  0;
        }
    }
    
    printf("Not found\n");
    
    */
     
    // Notice that the code begins with typedef struct where a new datatype called person is defined. Inside a person
    // is a string called name and a string called number. In the main function, begin by creating an array called
    // people that is of type person that is a size of 3. Then, we update the names and phone numbers of the two people
    // in our people array. Most important, notice how the dot notation such as people[0].name allows us to access the
    // person at the 0th location and assign that individual a name.
    
    // Sorting
    
    // Sorting is the act of taking an unsorted list of values and transforming this list into a sorted one.
    // When a list is sorted, searching that list is far less taxing on the computer. Recall that we can use binary
    // search on a sorted list, but not on an unsorted one.
    
    // It turns out that there are many different types of sorting algorithms.
    // Selection sort is one such search algorithm.
    // We can represent an array as follows:
    
    // The algorithm for selection sort in pseudocode is:
    
    // For i from 0 to n–1
        // Find smallest number between numbers[i] and numbers[n-1]
        // Swap smallest number with numbers[i]
    
    
    // Summarizing those steps, the first time iterating through the list took n - 1 steps. The second time, it took
    // n - 2 steps. Carrying this logic forward, the steps required could be represented as follows:
    
    // (n - 1) + (n - 2) + (n - 3) + ... + 1
    
    // This could be simplified to n(n-1)/2 or, more simply, O(n^2).
    
    
    // Bubble Sort
    
    // Bubble sort is another sorting algorithm that works by repeatedly swapping elements to “bubble” larger elements
    // to the end.
    
    // The pseudocode for bubble sort is:
    
    // Repeat n-1 times
        // For i from 0 to n–2
            // If numbers[i] and numbers[i+1] out of order
                // Swap them
        // If no swaps
            // Quit
    
    // As we further sort the array, we know more and more of it becomes sorted, so we only need to look at the pairs of
    // numbers that haven’t been sorted yet.
    
    // Analyzing selection sort, we made only seven comparisons. Representing this mathematically, where n represents the
    // number of cases, it could be said that selection sort can be analyzed as:
    
    // (n - 1) + (n - 2) + (n - 3) + ... + 1
    
    // or, more simply n^2/2 - n/2.
    
    // Considering that mathematical analysis, n^2 is really the most influential factor in determining the efficiency of
    // this algorithm.
    
    // Therefore, selection sort is considered to be of the order of O(n^2) in the worst case where all values are unsorted.
    // Even when all values are sorted, it will take the same number of steps. Therefore, the best case can be noted as
    // Ω(n^2). Since both the upper bound and lower bound cases are the same, the efficiency of this algorithm as a whole
    // can be regarded as Θ(n^2).
    
    // Analyzing bubble sort, the worst case is O(n^2). The best case is Ω(n).
    
    // You can visualize a comparison of these algorithms.
    
    // Recursion
    
    // How could we improve our efficiency in our sorting?
    // Recursion is a concept within programming where a function calls itself. We saw this earlier when we saw…
    
    // If no doors left
        // Return false
    // If number behind middle door
        // Return true
    // Else if number < middle door
        // Search left half
    // Else if number > middle door
        // Search right half
    
    // Notice that we are calling search on smaller and smaller iterations of this problem.
    // Similarly, in our pseudocode for Week 0, you can see where recursion was implemented:
    
    // 1  Pick up phone book
    // 2  Open to middle of phone book
    // 3  Look at page
    // 4  If person is on page
    // 5      Call person
    // 6  Else if person is earlier in book
    // 7      Open to middle of left half of book
    // 8      Go back to line 3
    // 9  Else if person is later in book
    // 10     Open to middle of right half of book
    // 11     Go back to line 3
    // 12 Else
    // 13     Quit
    
    // This code could have been simplified, to highlight its recursive properties as follows:
    
    // 1  Pick up phone book
    // 2  Open to middle of phone book
    // 3  Look at page
    // 4  If person is on page
    // 5      Call person
    // 6  Else if person is earlier in book
    // 7      Search left half of book
    // 9  Else if person is later in book
    // 10     Search right half of book
    // 11 Else
    // 12     Quit
    
    // Consider how in Week 1 we wanted to create a pyramid structure as follows:
    
    // #
    // ##
    // ###
    // ####
    
    return 1;
}
