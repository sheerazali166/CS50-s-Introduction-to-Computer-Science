//
//  list.c
//  Data Structures
//
//  Created by Sheeraz on 10/11/24.
//

#include "list.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"


typedef struct node {
 
    int number;
    struct node *next;
    
} node;

typedef struct nodeTwo {
    
    int numberTwo;
    struct nodeTwo *nextTwo;
    
} nodeTwo;

typedef struct nodeThree {

    int numberThree;
    struct nodeThree *nextThree;
    
} nodeThree;


// Represents a node
typedef struct nodeFour {
    
    int numberFour;
    struct nodeFour *left;
    struct nodeFour *right;
    
} nodeFour;

void free_tree(nodeFour *root);
void print_tree(nodeFour *rootTwo);

int mainTwo(void) {
    
    
    // Program 3
    
    printf("-------------------Program 3-------------------\n");
 
    
    // In your terminal, type code list.c and write code as follows:
    
    
    // Implements a list of numbers with an array of fixed size
    
    // list of size 3
    int list[3];
    
    
    // Initialize list with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    
    // Print list
    for (int i = 0;i < 3 ;i++) {
        
        printf("%i\n", list[i]);
    }
    
    
    // Notice that the above is very much like what we learned earlier in this course. We have memory being preallocated
    // for three items.

    
    // Program 4
    
    printf("-------------------Program 4-------------------\n");
    
    
    // Building upon our knowledge obtained more recently, we can leverage our understanding of pointers to create a
    // better design in this code. Modify your code as follows:
    
    // Implements a list numbers with an array of dynamic size
    
    
    // List of size 3
    int *listTwo = malloc(3 * sizeof(int));
    
    if (listTwo == NULL) {
        
        return 1;
    }
    
    
    // Initialize list of size 3 with numbers
    listTwo[0] = 1;
    listTwo[1] = 2;
    listTwo[2] = 3;
    
    // List of size 4
    int *temp = malloc(4 * sizeof(int));
    
    if (temp == NULL) {
        
        free(listTwo);
        return 1;
    }
    
    // Copy list of size 3 into list of size 4
    for (int iTwo = 0;iTwo < 3;iTwo++) {
        
        temp[iTwo] = listTwo[iTwo];
    }
    
    // Add number to list of size 4
    temp[3] = 4;
    
    // Free list of size 3
    free(listTwo);
    
    // Remember list of size 4
    listTwo = temp;
    
    // Print list
    for (int iThree = 0;iThree < 4;iThree++) {
        
        printf("%i\n", listTwo[iThree]);
    }
    
    // Free list
    free(listTwo);
    
    
    // Notice that a list of size three integers is created. Then, three memory addresses can be assigned the values
    // 1, 2, and 3. Then, a list of size four is created. Next, the list is copied from the first to the second. The
    // value for the 4 is added to the tmp list. Since the block of memory that list points to is no longer used, it
    // is freed using the command free(list). Finally, the compiler is told to point list pointer now to the block of
    // memory that tmp points to. The contents of list are printed and then freed.
    
    //It’s useful to think about list and tmp as both signs that point at a chunk of memory. As in the example above,
    // list at one point pointed to an array of size 3. By the end, list was told to point to a chunk of memory of size
    // 4. Technically, by the end of the above code, tmp and list both pointed to the same block of memory.
    
    // One may be tempted to allocate way more memory than required for the list, such as 30 items instead of the
    // required 3 or 4. However, this is bad design as it taxes system resources when they are not potentially needed.
    // Further, there is little guarantee that memory for more than 30 items will be needed eventually.
    
    
    // Linked Lists
    
        // In recent weeks, you have learned about three useful primitives. A struct is a data type that you can define
        // yourself. A . in dot notation allows you to access variables inside that structure. The * operator is used to
        // declare a pointer or dereference a variable.
    
        // Today, you are introduced to the -> operator. It is an arrow. This operator goes to an address and looks
        // inside of a structure.
    
        // A linked list is one of the most powerful data structures within C. A linked list allows you to include values
        // that are located at varying areas of memory. Further, they allow you to dynamically grow and shrink the list as
        // you desire.
    
        // You might imagine three values stored at three different areas of memory as follows:
    
        
        //-----------------------------------------------------------------------//
        //       |       |       |       |       |       |       |       |       //
        //       |       |   3   |       |       |       |       |       |       //
        //       |       |       |       |       |       |       |       |       //
        //-----------------------------------------------------------------------//
        //       |       |       |       |       |       |       |       |       //
        //       |       |       |       |   2   |       |       |       |       //
        //       |       |       |       |       |       |       |       |       //
        //-----------------------------------------------------------------------//
        //       |       |       |       |       |       |       |       |       //
        //       |       |       |       |       |       |   3   |       |       //
        //       |       |       |       |       |       |       |       |       //
        //-----------------------------------------------------------------------//
        //       |       |       |       |       |       |       |       |       //
        //       |       |       |       |       |       |       |       |       //
        //       |       |       |       |       |       |       |       |       //
        //-----------------------------------------------------------------------//
        //       |       |       |       |       |       |       |       |       //
        //       |       |       |       |       |       |       |       |       //
        //-----------------------------------------------------------------------//
        
    
    // printf("%d\n", ((1 * 3 ) + (2 * 5) + (3 * 7)));

    // How could one stitch together these values in a list?
    
    // We could imagine this data pictured above as follows:
    
    
                        //-------------//
                        //             //
                        //             //
                        //      1      //
                        //             //
                        //    0x123    //
                        //             //
                        //             //
                        //-------------//       //-------------//
                        //             //       //             //
                        //             //       //             //
                        //             //       //      2      //
                        //             //       //             //
                        //             //       //    0x456    //
                        //             //       //             //
                        //             //       //             //
                        //-------------//       //-------------//      //-------------//
                                                //             //      //             //
                                                //             //      //             //
                                                //             //      //      3      //
                                                //             //      //             //
                                                //             //      //    0x789    //
                                                //             //      //             //
                                                //             //      //             //
                                                //-------------//      //-------------//
                                                                       //             //
                                                                       //             //
                                                                       //             //
                                                                       //             //
                                                                       //             //
                                                                       //             //
                                                                       //             //
                                                                       //-------------//
    
    
    
    
    // We could utilize more memory to keep track of where the next item is.
    
    

                    //-------------//
                    //             //
                    //             //
                    //      1      //
                    //             //
                    //    0x123    //
                    //             //
                    //             //
                    //-------------//       //-------------//
                    //             //       //             //
                    //             //       //             //
                    //             //       //      2      //
                    //    0x456    //       //             //
                    //             //       //    0x456    //
                    //             //       //             //
                    //             //       //             //
                    //-------------//       //-------------//      //-------------//
                                            //             //      //             //
                                            //             //      //             //
                                            //             //      //      3      //
                                            //    0x789    //      //             //
                                            //             //      //    0x789    //
                                            //             //      //             //
                                            //             //      //             //
                                            //-------------//      //-------------//
                                                                   //             //
                                                                   //             //
                                                                   //             //
                                                                   //     NULL    //
                                                                   //             //
                                                                   //             //
                                                                   //             //
                                                                   //-------------//
    
    
    // printf("------------------------------\n");
    // printf("%d\n", (3 * 789));
    // printf("%d\n", (3 * 789) - 2024);
    // printf("%d\n", (789 - 2024));
    // printf("%d\n", (343) - 2024);


    
    // Notice that NULL is utilized to indicate that nothing else is next in the list.
    // By convention, we would keep one more element in memory, a pointer, that keeps track of the first item in the list.
    
    
                                //-------------//
                                //             //
                                //             //
                                //      1      //
                                //             //
                                //    0x123    //
                                //             //
                                //             //
                                //-------------//       //-------------//
                                //             //       //             //
                                //             //       //             //
                                //             //       //      2      //
                                //    0x456    //       //             //
                                //             //       //    0x456    //
                                //             //       //             //
                                //             //       //             //
    //-------------//           //-------------//       //-------------//      //-------------//
    //             //                                   //             //      //             //
    //             //                                   //             //      //             //
    //             //                                   //             //      //      3      //
    //    0x123    //                                   //    0x789    //      //             //
    //             //                                   //             //      //    0x789    //
    //             //                                   //             //      //             //
    //             //                                   //             //      //             //
    //-------------//                                   //-------------//      //-------------//
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //     NULL    //
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //-------------//
    
    
    
    
    
    
                                //-------------//
         //  →→→→→→→→→→→→→→→→→  //             //
         // ↑                   //             //
         // ↑                   //      1      //
         // ↑                   //             //
         // ↑                   //             //
         // ↑                   //             //
         // ↑                   //             //
         // ↑                   //-------------//       //-------------//
         // ↑                   //             //    →→ //             //
         // ↑                   //             //   ↑   //             //
         // ↑                   //             //   ↑   //      2      //
         // ↑                   //             //   ↑   //             //
         // ↑                   //             // →→    //             //
         // ↑                   //             //       //             //
         // ↑                   //             //       //             //
    //------↑------//           //-------------//       //-------------//      //-------------//
    //      ↑      //                                   //             //   →→ //             //
    //      ↑      //                                   //             //  ↑   //             //
    //      ↑      //                                   //             //  ↑   //      3      //
    //      ↑      //                                   //             //  ↑   //             //
    //             //                                   //             // →→   //             //
    //             //                                   //             //      //             //
    //             //                                   //             //      //             //
    //-------------//                                   //-------------//      //-------------//
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //             //
                                                                               //-------------//
    
    
    
    
    // These boxes are called nodes. A node contains both an item and a pointer called next. In code, you can imagine
    // a node as follows:
    
    
    // typedef struct {
      
        // int number;
        // struct node *next;
        
    // } node;
    
    
    
    // Notice that the item contained within this node is an integer called number. Second, a pointer to a node called
    // next is included, which will point to another node somewhere in memory.
    
    
    // Conceptually, we can imagine the process of creating a linked list. First, node *list is declared, but it is of
    // a garbage value.
    
    // node *list;
    
    
          // list
    //--------------//
    //              //
    //              //
    //      🗑️      //
    //              //
    //              //
    //--------------//
    
    
    // Next, a node called n is allocated in memory.
    
    // nodeTwo *n = malloc(sizeof(nodeTwo));
    

        // list
    //--------------//
    //              //
    //              //
    //              //
    //              //
    //              //
    //--------------//
    
    
          // n
    //--------------//
    //              //
    //              //
    //      🗑️      //
    //              //
    //              //
    //--------------//
    
    
    // Next, the number of node is assigned the value 1.
    
    // nTwo->number = 1;
    
    

        // listTwo
    //--------------//
    //              //
    //              //
    //              //
    //              //
    //              //
    //--------------//                                 //--------------//
                                                       //              //
                                // →→→→→→→→→→→→→→→→→→  //              //
        // nTwo                   ↑                    //      1       //  number
    //--------------//            ↑                    //              //
    //              //            ↑                    //              //
    //              //            ↑                    //--------------//
    //              // →→→→→→→→→→→→                    //              //
    //              //                                 //              //
    //              //                                 //      🗑️      //  next
    //--------------//                                 //              //
                                                       //              //
                                                       //--------------//
    
    
    
    
    // Next, the node’s next field is assigned NULL.
    
    // nThree->nextTwo = NULL;
    
    
      // listThree
    //--------------//
    //              //
    //              //
    //              //
    //              //
    //              //
    //--------------//                                 //--------------//
                                                       //              //
                                // →→→→→→→→→→→→→→→→→→  //              //
        // nThree                 ↑                    //      1       //  numberTwo
    //--------------//            ↑                    //              //
    //              //            ↑                    //              //
    //              //            ↑                    //--------------//
    //              // →→→→→→→→→→→→                    //              //
    //              //                                 //              //
    //              //                                 //              //  nextTwo
    //--------------//                                 //              //
                                                       //              //
                                                       //--------------//
    
    
    
    // Next, list is pointed at the memory location to where n points. n and list now point to the same place.
    
    // listFour = nFour;
    

        // listFour
      //--------------//
      //              //
      //              // →→→→→→→→→→→→→→
      //              //              ↓
      //              //              ↓
      //              //              ↓
      //--------------//              ↓                  //--------------//
                                  //  →→→→→→→→→→→→→→→→→ //              //
                                  // →→→→→→→→→→→→→→→→→→  //              //
          // nFour                  ↑                    //      1       //  numberThree
      //--------------//            ↑                    //              //
      //              //            ↑                    //              //
      //              //            ↑                    //--------------//
      //              // →→→→→→→→→→→→                    //              //
      //              //                                 //              //
      //              //                                 //              //  nextThree
      //--------------//                                 //              //
                                                         //              //
                                                         //--------------//
    
    
    
    // A new node is then created. Both the number and next field are both filled with garbage values.
    
    //  nodeThree *nFive = malloc(sizeof(nodeThree));
   
    
    
    
                                          //--------------//
                                          //              //
                                 // →→→→→ //              //
                                 // ↑     //      🗑️      //
                                 // ↑     //              //
                                 // ↑     //              //
        // listFive                 ↑     //--------------//
      //--------------//            ↑     //              //
      //              //            ↑     //              //
      //              // →→→→→→→→→→→↑→→→  //      🗑️      //
      //              //            ↑  ↓  //              //
      //              //            ↑  ↓  //              //
      //              //            ↑  ↓  //--------------//
      //--------------//            ↑  ↓                      //--------------//
                                //  ↑  →→→→→→→→→→→→→→→→→→→→→  //              //
                                //  ↑                         //              //
          // nFive                  ↑                         //      1       //
      //--------------//            ↑                         //              //
      //              //            ↑                         //              //
      //              //            ↑                         //--------------//
      //              // →→→→→→→→→→→→                         //              //
      //              //                                      //              //
      //              //                                      //              //
      //--------------//                                      //              //
                                                              //              //
                                                              //--------------//
    
    
    
    // The number value of n’s node (the new node) is updated to 2.
    
    
    // nSix-> numberFour;

                
    
                                        //--------------//
                                        //              //
                               // →→→→→ //              //
                               // ↑     //       2      //
                               // ↑     //              //
                               // ↑     //              //
       // listSix                 ↑     //--------------//
    //--------------//            ↑     //              //
    //              //            ↑     //              //
    //              // →→→→→→→→→→→↑→→→  //      🗑️      //
    //              //            ↑  ↓  //              //
    //              //            ↑  ↓  //              //
    //              //            ↑  ↓  //--------------//
    //--------------//            ↑  ↓                      //--------------//
                              //  ↑  →→→→→→→→→→→→→→→→→→→→→  //              //
                              //  ↑                         //              //
        // nSix                   ↑                         //      1       //
    //--------------//            ↑                         //              //
    //              //            ↑                         //              //
    //              //            ↑                         //--------------//
    //              // →→→→→→→→→→→→                         //              //
    //              //                                      //              //
    //              //                                      //              //
    //--------------//                                      //              //
                                                            //              //
                                                            //--------------//
     
    

    // Also, the next field is updated as well.
    
    
    // nSeven->nextFour = NULL:
    
    
                                        //--------------//
                                        //              //
                               // →→→→→ //              //
                               // ↑     //       2      //
                               // ↑     //              //
                               // ↑     //              //
       // listSeven               ↑     //--------------//
    //--------------//            ↑     //              //
    //              //            ↑     //              //
    //              // →→→→→→→→→→→↑→→→  //              //
    //              //            ↑  ↓  //              //
    //              //            ↑  ↓  //              //
    //              //            ↑  ↓  //--------------//
    //--------------//            ↑  ↓                      //--------------//
                              //  ↑  →→→→→→→→→→→→→→→→→→→→→  //              //
                              //  ↑                         //              //
        // nSeven                 ↑                         //      1       //
    //--------------//            ↑                         //              //
    //              //            ↑                         //              //
    //              //            ↑                         //--------------//
    //              // →→→→→→→→→→→→                         //              //
    //              //                                      //              //
    //              //                                      //              //
    //--------------//                                      //              //
                                                            //              //
                                                            //--------------//
     
    
    
    // Most important, we do not want to lose our connection to any of these nodes lest they be lost forever.
    // Accordingly, n’s next field is pointed to the same memory location as list.
    
    // nEight->nextFive = listEight;
    
    
                                        //--------------//
                                        //              //
                               // →→→→→ //              //
                               // ↑     //       2      //
                               // ↑     //              //
                               // ↑     //              //
       // listEight               ↑     //--------------//
    //--------------//            ↑     //              //
    //              //            ↑     //              //
    //              // →→→→→→→→→→→↑→→→  //              // →→
    //              //            ↑  ↓  //              //  ↓
    //              //            ↑  ↓  //              //  ↓
    //              //            ↑  ↓  //--------------//  v
    //--------------//            ↑  ↓                      ↓       //--------------//
                              //  ↑  →→→→→→→→→→→→→→↓        ↓       //              //
                              //  ↑                ↓         →→→→→  //              //
        // nEight                 ↑                ↓                //      1       //
    //--------------//            ↑                →→→→→→→→→→→→→→→→ //              //
    //              //            ↑                                 //              //
    //              //            ↑                                 //--------------//
    //              // →→→→→→→→→→→→                                 //              //
    //              //                                              //              //
    //              //                                              //              //
    //--------------//                                              //              //
                                                                    //              //
                                                                    //--------------//
    
    
    
    // Finally, list is updated to point at n. We now have a linked list of two items.
    
    // listNine->nNine;
    
                                        //--------------//
                                        //              //
                      //  →→→→→→→→→→→→→ //              //
                      //  ↑       →→→→→ //       2      //
                      //  ↑       ↑     //              //
                      //  ↑       ↑     //              //
       // listNine        ↑       ↑     //--------------//
    //--------------//    ↑       ↑     //              //
    //              //    ↑       ↑     //              //
    //              // →→→→       ↑     //              // →→
    //              //            ↑     //              //  ↓
    //              //            ↑     //              //  ↓
    //              //            ↑     //--------------//  v
    //--------------//            ↑                         ↓       //--------------//
                              //  ↑                         ↓       //              //
                              //  ↑                          →→→→→  //              //
        // nNine                  ↑                                 //      1       //
    //--------------//            ↑                                 //              //
    //              //            ↑                                 //              //
    //              //            ↑                                 //--------------//
    //              // →→→→→→→→→→→→                                 //              //
    //              //                                              //              //
    //              //                                              //              //
    //--------------//                                              //              //
                                                                    //              //
                                                                    //--------------//
        
    
    // To implement this in code, modify your code as follows:
    
    
    // Program 5
    
    printf("-------------------Program 5-------------------\n");
    
    
    // Prepends numbers to a linked list, using while loop to print
    
    // Number List?
    int numberList[] = { 37, 68, 70, 80 };
    
    
    
    // Memory for numbers
    node *listThree = NULL;
    
    for (int iFour = 0;iFour < 4; iFour++) {
        
        int number = numberList[iFour];

        // Alocate node for number
        node *n = malloc(sizeof(node));
        
        if (n == NULL) {
            
            return 1;
        }
        
        n->number = number;
        n->next = NULL;
        
        // Prepend node to list
        n->next = listThree;
        listThree = n;
        
    }
    
    // Print numbers
    node *ptr = listThree;
    
    while (ptr != NULL) {
        
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // Free memory
    ptr = listThree;
    while (ptr != NULL) {
        
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    
    
    // Notice that what the user inputs at the command line is put into the number field of a node called n, and then
    // that node is added to the list. For example, ./list 1 2 will put the number 1 into the number field of a node
    // called n, then put a pointer to list into the next field of the node, and then update list to point to n. That
    // same process is repeated for 2. Next, node *ptr = list creates a temporary variable that points at the same
    // spot that list points to. The while prints what at the node ptr points to, and then updates ptr to point to
    // the next node in the list. Finally, all the memory is freed.
    
    // In this example, inserting into the list is always in the order of O(1), as it only takes a very small number
    // of steps to insert at the front of a list.
    
    // Considering the amount of time required to search this list, it is in the order of O(n), as in the worst case the
    // entire list must always be searched to find an item. The time complexity for adding a new element to the list
    // will depend on where that element is added. This is illustrated in the examples below.
    
    // Linked lists are not stored in a contiguous block of memory. They can grow as large as you wish, provided that
    // enough system resources exist. The downside, however, is that more memory is required to keep track of the list
    // instead of an array. This is because for each element, you must store not just the value of the element, but also
    // a pointer to the next node. Further, linked lists cannot be indexed into like is possible in an array because we
    // need to pass through the first n-1 elements to find the location of the n^th element. Because of this, the list
    // pictured above must be linearly searched. Binary search, therefore, is not possible in a list constructed
    // as above.
    
    // Further, you could place numbers at the end of the list as illustrated in this code:

    
    // Program 6
    
    printf("-------------------Program 6-------------------\n");
    
    // Implements a list of numbers using a linked list
    
    
    // Numbers List
    int numbersListTwo[] = { 1500, 2000, 5000, 10000 };
    
    // Memory for numbers
    nodeTwo *listFour = NULL;
    
    // For each command-line argument
    for (int iFive = 0;iFive < 4;iFive++) {
        
        // Convert argument to int
        int numberTwo = numbersListTwo[iFive];
        
        // Allocate node for number
        nodeTwo *nTwo = malloc(sizeof(nodeTwo));
        
        if (nTwo == NULL) {
            
            return 1;
        }
        
        nTwo->numberTwo = numberTwo;
        nTwo->nextTwo = NULL;
        
        // If listFour is empty
        if (listFour == NULL) {
            
            // This node is the whole listFour
            listFour = nTwo;
            
        }
        // If list has numbers already
        else {
            
            // Iterate over nodes in list
            for (nodeTwo *ptrTwo = listFour;ptrTwo != NULL;ptrTwo = ptrTwo->nextTwo) {
                
                // If at end of list
                if (ptrTwo->nextTwo == NULL) {
                    
                    // Append node
                    ptrTwo->nextTwo = nTwo;
                    break;
                }
            }
        }
        
    }
    
    
    
    // Print numbers
    for (nodeTwo *ptrThree = listFour;ptrThree != NULL;ptrThree = ptrThree->nextTwo) {
        
        printf("%i\n", ptrThree->numberTwo);
        
    }
    
    
    // Free memory
    nodeTwo *ptrFour = listFour;
    while (ptrFour != NULL) {
        
        nodeTwo *nextTwo = ptrFour->nextTwo;
        free(ptrFour);
        ptrFour = nextTwo;
    }
    
    
    // Notice how this code walks down this list to find the end. When appending an element, (adding to the end of the
    // list) our code will run in , as we have to go through our entire list before we can add the final element.

    // Program 7
    
    printf("-------------------Program 7-------------------\n");
    
    // Further, you could sort your list as items are added:
    
    // Implements a sorted list of numbers using a linked list
    
    
    // Numbers List
    int numbersListThree[] = { 1, 2, 3, 4, 5 };
    
    
    // Memory for numbers
    nodeThree *listFive = NULL;
    
    for (int iFive = 0;iFive < 5;iFive++) {
        
        int numberThree = numbersListThree[iFive];
        
        // Allocate nodeThree for numbers
        nodeThree *nThree = malloc(sizeof(nodeThree));
        
        if (nThree == NULL) {
            
            return 1;
        }
        
        nThree->numberThree = numberThree;
        nThree->nextThree = NULL;
        
        // If list is empty
        if (listFive == NULL) {
            
            listFive = nThree;
        }
        // If numbers belongs at beginning of list
        else if (nThree->numberThree < listFive->numberThree) {
            
            nThree->nextThree = listFive;
            listFive = nThree;
        }
        // If numbers belong later in list
        else {
            
            // Iterate over nodes in list
            for (nodeThree *ptrFive = listFive;ptrFive != NULL;ptrFive = ptrFive->nextThree) {
                
                // If at end of list
                if (ptrFive->nextThree == NULL) {
                    
                    // Append node
                    ptrFive->nextThree = nThree;
                    break;
                }
                // If in middle of list
                if (nThree->numberThree < ptrFive->nextThree->numberThree) {
                    
                    nThree->nextThree = ptrFive->nextThree;
                    ptrFive->nextThree = nThree;
                    break;
                }
            }
        }
    }
    
    // Print numbers
    for (nodeThree *ptrSix = listFive;ptrSix != NULL;ptrSix = ptrSix->nextThree) {
        
        printf("%i\n", ptrSix->numberThree);
    }
    
    // Free memory
    nodeThree *ptrSeven = listFive;
    while (ptrSeven != NULL) {
        
        nodeThree *nextThree = ptrSeven->nextThree;
        free(ptrSeven);
        ptrSeven = nextThree;
    }
    
    // Notice how this list is sorted as it is built. To insert an element in this specific order, our code will still run in  for each insertion, as in
    // the worst case we will have to look through all current elements.
    
    // Trees
    
        // Binary search trees are another data structure that can be used to store data more efficiently such that it can be searched and retrieved.
        // You can imagine a sorted sequence of numbers.
    
        //-------------------------------------------------------------------------------------------------//
        // ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- //
        // ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- //
        // |||| 1 |||| | |||| 2 |||| | |||| 3 |||| | |||| 4 |||| | |||| 5 |||| | |||| 6 |||| | |||| 7 |||| //
        // ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- //
        // ----------- | ----------- | ----------- | ----------- | ----------- | ----------- | ----------- //
        //-------------------------------------------------------------------------------------------------//
    
    
        // Imagine then that the center value becomes the top of a tree. Those that are less than this value are placed to the left. Those values that
        // are more than this value are to the right.
    
                                                
                                                   //-------------//
                                                   // ----------- //
                                                   // ----------- //
                                                   // |||| 4 |||| //
                                                   // ----------- //
                                                   // ----------- //
                                                   //-------------//
    
                                                                
                                //-------------//                     //-------------//
                                // ----------- //                     // ----------- //
                                // ----------- //                     // ----------- //
                                // |||| 2 |||| //                     // |||| 6 |||| //
                                // ----------- //                     // ----------- //
                                // ----------- //                     // ----------- //
                                //-------------//                     //-------------//
                    
    
                //-------------//       //-------------//      //-------------//       //-------------//
                // ----------- //       // ----------- //      // ----------- //       // ----------- //
                // ----------- //       // ----------- //      // ----------- //       // ----------- //
                // |||| 1 |||| //       // |||| 3 |||| //      // |||| 5 |||| //       // |||| 7 |||| //
                // ----------- //       // ----------- //      // ----------- //       // ----------- //
                // ----------- //       // ----------- //      // ----------- //       // ----------- //
                //-------------//       //-------------//      //-------------//       //-------------//
    
    
    
    
    // Pointers can then be used to point to the correct location of each area of memory such that each of these nodes can be connected.
    
    

                                                        //-------------//
                                                        // ----------- //
                                                        // ----------- //
                                         //   ←←←←←←←←←←// |||| 4 |||| //→→→→→→→→→→↓
                                         //   ↓         // ----------- //          ↓
                                         //   ↓         // ----------- //          ↓
                                         //   ↓         //-------------//          ↓
                                         //   ↓                                    ↓
                                         //   ↓                                    ↓
                                    //-------------//                     //-------------//
                                    // ----------- //                     // ----------- //
                                    // ----------- //                     // ----------- //
                        //   ←←←←←←←// |||| 2 |||| //                     // |||| 6 |||| //→→→→→→→→↓
                        //   ↓      // ----------- //                     // ----------- //        ↓
                        //   ↓      // ----------- //                     // ----------- //        ↓
                        //   ↓      //-------------//                     //-------------//        ↓
                        //   ↓                                                                     ↓
                        //   ↓                                                                     ↓
                    //-------------//       //-------------//      //-------------//       //-------------//
                    // ----------- //       // ----------- //      // ----------- //       // ----------- //
                    // ----------- //       // ----------- //      // ----------- //       // ----------- //
                    // |||| 1 |||| //       // |||| 3 |||| //      // |||| 5 |||| //       // |||| 7 |||| //
                    // ----------- //       // ----------- //      // ----------- //       // ----------- //
                    // ----------- //       // ----------- //      // ----------- //       // ----------- //
                    //-------------//       //-------------//      //-------------//       //-------------//
    
    
    
    // In code, this can be implemented as follows.
    

    // Program 8
    
    printf("-------------------Program 8-------------------\n");
    
    // Tree of size 0
    nodeFour *tree = NULL;
    
    // Add number to list
    nodeFour *nFour = malloc(sizeof(nodeFour));
    
    if (nFour == NULL) {
        
        return 1;
    }
    
    nFour->numberFour = 2;
    nFour->left = NULL;
    nFour->right = NULL;
    
    tree = nFour;
    
    // Add number to list
    nFour = malloc(sizeof(nodeFour));
    
    if (nFour == NULL) {
        
        free_tree(tree);
        return 1;
    }
    
    nFour->numberFour = 1;
    nFour->left = NULL;
    nFour->right = NULL;
    
    tree->right = nFour;
    
    
    // Add number to list
    nFour = malloc(sizeof(nodeFour));
    
    if (nFour == NULL) {
        
        free_tree(tree);
        return 1;
    }
    
    nFour->numberFour = 3;
    nFour->left = NULL;
    nFour->right = NULL;
    
    tree->right = nFour;
    
    // Print tree
    print_tree(tree);
    
    // Free tree
    free_tree(tree);
 
    // Notice this search function begins by going to the location of tree. Then, it uses recursion to search for number. The free_tree function recursively
    // frees the tree. print_tree recursively prints the tree.
    
    // A tree like the above offers dynamism that an array does not offer. It can grow and shrink as we wish.
    // Further, this structure offers a search time of O(log n).
    
    // Dictionaries
    
        // Dictionaries are another data structure.
        // Dictionaries, like actual book-form dictionaries that have a word and a definition, have a key and a value.
        // The holy grail of algorithmic time complexity is O(1) or constant time. That is, the ultimate is for access to be instantaneous.
    
    
        //                          O(n)
        //          |
        //          |            .       .
        //          |
        //          |                    .
        //   Time   |           .
        //    to    |                    .
        //   Solve  |
        //          |          .        .
        //          |
        //          |                   .
        //          |
        //          |         .         .
        //          |
        //          |                 .                                                                 .            .        .         . O(log n)
        //          |       .                                                                 .
        //          |               .                                         .
        //          |      .                                        .
        //          |     .       .                    .
        //          |           .               .
        //          |         .        .
        //          |   .   .     .
        //          |   .
        //          |  . -------------------------------------------------------------------------------------------------------------O(n)
        //          |.
        //          |.−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
    
                                    //             ````````````````Size Of Algorithm````````````````
    
    
    // Dictionaries can offer this speed of access through hashing
    
    // Hashing and Hash Tables
    
    // Hashing is the idea of taking a value and being able to output a value that becomes a shortcut to it later.
    
    // For example, hashing apple may hash as a value of 1, and berry may be hashed as 2. Therefore, finding apple is as easy as asking the hash algorithm
    // where apple is stored. While not ideal in terms of design, ultimately, putting all a’s in one bucket and b’s in another, this concept of bucketizing
    // hashed values illustrates how you can use this concept: a hashed value can be used to shortcut finding such a value.
    
    // A hash function is an algorithm that reduces a larger value to something small and predictable. Generally, this function takes in an item you wish to
    // add to your hash table, and returns an integer representing the array index in which the item should be placed.
    
    // A hash table is a fantastic combination of both arrays and linked lists. When implemented in code, a hash table is an array of pointers to nodes.
    
    // A hash table could be imagined as follows:
    
        //---//
        // A //
        //---//
        // B //
        //---//
        // C //
        //---//
        // D //
        //---//
        // E //
        //---//
        // F //
        //---//
        // G //
        //---//
        // H //
        //---//
        // I //
        //---//
        // J //
        //---//
        // K //
        //---//
        // L //
        //---//
        // M //
        //---//
        // N //
        //---//
        // O //
        //---//
        // P //
        //---//
        // Q //
        //---//
        // R //
        //---//
        // S //
        //---//
        // T //
        //---//
        // U //
        //---//
        // V //
        //---//
        // W //
        //---//
        // X //
        //---//
        // Y //
        //---//
        // Z //
        //---//

    // Notice that this is an array that is assigned each value of the alphabet.
    // Then, at each location of the array, a linked list is used to track each value being stored there:
    
    
    //---//
    //   //
    //---//              //------------------//---//
    //  →//→→→→→→→→→→→→→ //      Birdo       //   //
    //---//              //------------------//---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Daisy      //   //
    //---//              //-----------------//---//
    //   //
    //---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Goomba     //   //
    //---//              //-----------------//---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //     Isabelle    //   //
    //---//              //-----------------//---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //     King Boo    //   //
    //---//              //-----------------//---//              //-----------------//---//         //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Luigi      //  →//→→→→→→→→→→→→→ //      Lakitu     //  →//→→→→→→→→ //       Link      //   //
    //---//              //-----------------//---//              //-----------------//---//         //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Mario      //   //
    //---//              //-----------------//---//
    //   //
    //---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Peach      //   //
    //---//              //-----------------//---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //     Rosalina    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //       Guy       //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //       Toad      //   //
    //---//              //-----------------//---//
    //   //
    //---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Wario      //   //
    //---//              //-----------------//---//
    //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Yoshi      //   //
    //---//              //-----------------//---//
    //  →//→→→→→→→→→→→→→ //      Zelda      //   //
    //---//              //-----------------//---//

    
    // Collisions are when you add values to the hash table, and something already exists at the hashed location. In the above, collisions are simply
    // appended to the end of the list.
    
    // Collisions can be reduced by better programming your hash table and hash algorithm. You can imagine an improvement upon the above as follows:
    

                    //---//
                    //   //
                    //---//
                    //   //
                    //---//
                    //   //
                    //---//
            // Laa  //   //
                    //---//
            // Lab  //   //
                    //---//
            // Lac  //   //
                    //---//
            // Lad  //   //
                    //---//
            // Lae  //   //
                    //---//
            // Laf  //   //
                    //---//
            // Lag  //   //
                    //---//
            // Lah  //   //
                    //---//
            // Lai  //   //
                    //---//
            // Laj  //   //
                    //---//            //------------------------//
            // Lak  //  →//→→→→→→→→→→→ //         Lakitu         //
                    //---//            //------------------------//
            // ...  //   //
                    //---//
            // Lim  //   //
                    //---//            //------------------------//
            // Lin  //  →//→→→→→→→→→→→ //           Link         //
                    //---//            //------------------------//
            // Leo  //   //
                    //---//
            // ...  //   //
                    //---//
            // Luh  //   //
                    //---//             //------------------------//
            // Lui  //  →//→→→→→→→→→→→  //          Luigi         //
                    //---//             //------------------------//
            // Luj  //   //
                    //---//
                    //   //
                    //---//
                    //   //
                    //---//
                    //   //
                    //---//
                    //   //
                    //---//
    
    
    
    
    
    // Consider the following example of a hash algorithm:
    
    
    
                                                //----------------------------------------------//
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
     // Luigi ------------------------------>   //                                              // -------------->  11
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //                                              //
                                                //----------------------------------------------//


    
    // This could be implemented in code as:
    
  
    // unsigned int hash(const char *word) {
    
          // return toupper(word[0] - 'A');
    // }
    
    
    // Notice how the hash function returns the value of toupper(word[0]) - 'A'.
    
    // You, as the programmer, have to make a decision about the advantages of using more memory to have a large hash table and potentially reducing
    // search time or using less memory and potentially increasing search time.
    
    
    // Tries
    
        //  Tries are another form of data structure.
        //  Tries are always searchable in constant time.
        //  One downside to Tries is that they tend to take up a large amount of memory. Notice that we need 26 x 4 = 104 nodes just to store Toad!
    
    
        // Toad would be stored as follows:
    
                                                                                                                // T
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //---//   //   //   //   //   //   //
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                                                                                                               // ↓
                                                                                 // O ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                                                                                 // ↓ →→→
                // A                                                                     ↓
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                // ↓
                //  →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→
                   // D                                       ↓
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    
    
    // Tom would then be stored as follows:

                                                                                                               // T
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                                                                                                               // ↓
                                                                                           // O ←←←←←←←←←←←←←←←←←←
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                                                                                           // ↓
                // A                                                         // M ←←←←←←←←←←←←
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
                //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                // →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→
                                                                // ↓
                                                                // ↓
                                                                // ↓
                   // D                                            ↓
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                   // ↓
                   //  →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→
                        // E                                       ↓
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                        // ↓
                        //  →→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→→
                                                                    //  ↓                           // T
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                                                                                                   // ↓
                                                                //       ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
                                                                //       ↓
                                                                //       ↓                          // T
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
                                                                                                   // ↓
                                                                // ←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←←
                                                                // ↓
                        // E                                       ↓
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //   //
    //---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//---//
    
    
    // The downside of this structure is how many resources are required to use it.
    
    
    // Summing Up
    
    
    // In this lesson, you learned about using pointers to build new data structures. Specifically, we delved into…
    
    
    // Data structures
    // Stacks and queues
    // Resizing arrays
    // Linked lists
    // Dictionaries
    // Tries
    
    // See you next time!
    
    
    
    
    
    
    return 0;
}

void free_tree(nodeFour *root) {
    
    if (root == NULL) {
        
        return;
    }
    
    free_tree(root->left);
    free_tree(root->right);
    free(root);
    
    
}

void print_tree(nodeFour *rootTwo) {
    
    if (rootTwo == NULL) {
        return;
    }
    
    print_tree(rootTwo->left);
    printf("%i\n", rootTwo->numberFour);
    print_tree(rootTwo->right);
    
}




