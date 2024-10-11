//
//  call_stacks.c
//  Shorts
//
//  Created by Sheeraz on 10/11/24.
//

#include "call_stacks.h"

int fact(int n);

int mainSix(void) {
    
    // Program 10
    
    printf("------------------Program 10------------------\n");
    
    // Call Stack
    
        // When you call a function, the system sets aside space in
        // memory for that function to do it's necessary work.
        
            // We frequently call such chunks of memory stack frames
            // or function frames.
        
    
        // More then one functions's stack frame may exist in memory at
        // a given time. if main() calls move(), which then calls
        // direction(), all three functions have open frames.
    
    
        // These frames are arranged in a stack. The frame for the most-
        // recently called function is always on the top of the stack.
    
    
        // When a new function is called, a new frame is pushed onto the
        // top of the stack and becomes the active frame.
    
        // When a function finishes its work, its frame is popped off of
        // the stack, and the frame immediately below it becomes the new,
        // active, function on the top of the stack. This function picks
        // up immediately where it left off.
    
    
    
    // Call Stack
    
    
    // int fact(int n) {
        
        // if (n == 1)
          // return 1;
        // else
           // return n * fact(n - 1);

   // }
    
   // int main(void) {
     
       // printf("%i\n", fact(5));
                                            //----------------------//
   // }                                     //         main()       //
                                            //----------------------//

    
    // int factTwo(int nTwo) {
        
        // if (nTwo == 1)
          // return 1;
        // else
           // return nTwo * factTwo(nTwo - 1);

   // }
    
   // int mainTwo(void) {
     
       // printf("%i\n", factTwo(5));       //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainTwo()      //
                                            //----------------------//
    
    
    
    // int factThree(int nThree) {
        
        // if (nThree == 1)
          // return 1;
        // else
           // return nThree * factThree(nThree - 1);

   // }
    
   // int mainThree(void) {
     
       // printf("%i\n", factThree(5));
                                            //----------------------//
                                            //      factThree(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainThree()    //
                                            //----------------------//
    
    
    // int factFour(int nFour) {
        
        // if (nFour == 1)
          // return 1;
        // else
           // return nFour * factFour(nFour - 1);

   // }
    
   // int mainFour(void) {
     
    
    // -------->   // printf("%i\n", factFour(5));
                
    
    
                                            //----------------------//
                                            //      factFour(5)     //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainFour()     //
                                            //----------------------//
    

    // int factFive(int nFive) {
        
    // ---------->    // if (nFive == 1)
                          // return 1;
                        // else
                           // return nFive * factFive(nFive - 1);

   // }
    
   // int mainFive(void) {
     
    
    // -------->   // printf("%i\n", factFive(5));
                
    
    
                                            //----------------------//
                                            //      factFive(5)     //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainFive()     //
                                            //----------------------//
    
    
    
    // int factSix(int nSix) {
        
                        // if (nSix == 1)
                          // return 1;
                        // else
    // ---------->     // return nSix * factSix(nSix - 1);

   // }
    
   // int mainSix(void) {
     
    
    // -------->   // printf("%i\n", factSix(5));
                
    
    
                                            //----------------------//
                                            //       factSix(5)     //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainSix()      //
                                            //----------------------//
    
    
    
    // int factSeven(int nSeven) {
        
                        // if (nSeven == 1)
                          // return 1;
                        // else
      
      // ---------->
      // ---------->     // return nSeven * factSeven(nSeven - 1);

   // }
    
   // int mainSeven(void) {
     
    
    // -------->   // printf("%i\n", factSeven(5));
                
                                                
                                             
                                            //----------------------//
                                            //       factSeven(4)   //
                                            //----------------------//
                                            //      factSeven(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainSeven()    //
                                            //----------------------//
    
    
    // int factEight(int nEight) {
        
    // ---------->      // if (nEight == 1)
                          // return 1;
                        // else
      
      
      
      // ---------->     // return nEight * factEight(nEight - 1);
      // ---------->
    
   // }
    
   // int mainEight(void) {
     
    
    // -------->   // printf("%i\n", factEight(5));
                
                                                
    
                                            //----------------------//
                                            //       factEight(3)   //
                                            //----------------------//
                                            //       factEight(4)   //
                                            //----------------------//
                                            //      factEight(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainEight()    //
                                            //----------------------//
    
    // int factNine(int nNine) {
        
                        // if (nNine == 1)
                          // return 1;
                        // else
      
      
      // ---------->
      // ---------->     // return nNine * factEight(nNine - 1);
      // ---------->
    
   // }
    
   // int mainNine(void) {
     
    
    // -------->   // printf("%i\n", factNine(5));
                
                                                
    
                                            //----------------------//
                                            //       factNine(3)    //
                                            //----------------------//
                                            //       factNine(4)    //
                                            //----------------------//
                                            //      factNine(5)     //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //       mainNine()     //
                                            //----------------------//

    
    
    
    // int factTen(int nTen) {
        
    // ---------->      // if (nTen == 1)
                          // return 1;
                        // else
      
      
      // ---------->
      // ---------->     // return nTen * factTen(nTen - 1);
      // ---------->
    
   // }
    
   // int mainTen(void) {
     
    
    // -------->   // printf("%i\n", factTen(5));
                
                                                
    
                                            //----------------------//
                                            //       factTen(2)     //
                                            //----------------------//
                                            //       factTen(3)     //
                                            //----------------------//
                                            //       factTen(4)     //
                                            //----------------------//
                                            //       factTen(5)     //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //        mainTen()     //
                                            //----------------------//


    
    
    // int factEleven(int nEleven) {
        
          // if (nEleven == 1)
               // return 1;
          // else
      
      // ---------->
      // ---------->
      // ---------->     // return nEleven * factEleven(nEleven - 1);
      // ---------->
    
   // }
    
   // int mainEleven(void) {
     
    
    // -------->   // printf("%i\n", factEleven(5));
                
                                                
    
                                            //----------------------//
                                            //     factEleven(2)    //
                                            //----------------------//
                                            //     factEleven(3)    //
                                            //----------------------//
                                            //     factEleven(4)    //
                                            //----------------------//
                                            //     factEleven(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //      mainEleven()    //
                                            //----------------------//
    
    
    
    // int factTwelve(int nTwelve) {
        
          // if (nTwelve == 1)
               // return 1;
          // else
      
    
      // ---------->
      // ---------->
      // ---------->     // return nTwelve * factTwelve(nTwelve - 1);
      // ---------->
        
    
   // }
    
   // int mainTwelve(void) {
     
    
    // -------->   // printf("%i\n", factTwelve(5));
                
                                                

                                            //----------------------//
                                            //     factTwelve(1)    //
                                            //----------------------//
                                            //     factTwelve(2)    //
                                            //----------------------//
                                            //     factTwelve(3)    //
                                            //----------------------//
                                            //     factTwelve(4)    //
                                            //----------------------//
                                            //     factTwelve(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //      mainTwelve()    //
                                            //----------------------//


    // int factThirteen(int nThirteen) {
        
    // ---------->   // if (nThirteen == 1)
                         // return 1;
                      // else
      
    
      // ---------->
      // ---------->
      // ---------->     // return nThirteen * factThirteen(nThirteen - 1);
      // ---------->
        
    
   // }
    
    
    
   // int mainThirteen(void) {
     
    
    // -------->   // printf("%i\n", factThirteen(5));
                
                                                

                                            //----------------------//
                                            //    factThirteen(1)   //
                                            //----------------------//
                                            //    factThirteen(2)   //
                                            //----------------------//
                                            //    factThirteen(3)   //
                                            //----------------------//
                                            //    factThirteen(4)   //
                                            //----------------------//
                                            //    factThirteen(5)   //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainThirteen()   //
                                            //----------------------//
    
    
    
    
    // int factFourteen(int nFourteen) {
        
                      // if (nFourteen == 1)
    // ---------->        // return 1;
                      // else
      
    
      // ---------->
      // ---------->
      // ---------->     // return nFourteen * factFourteen(nFourteen - 1);
      // ---------->
        
    
   // }
    
    
    
   // int mainFourteen(void) {
     
    
    // -------->   // printf("%i\n", factFourteen(5));
                
                                                

                                            //----------------------//
                                            //    factFourteen(1)   //
                                            //----------------------//
                                            //    factFourteen(2)   //
                                            //----------------------//
                                            //    factFourteen(3)   //
                                            //----------------------//
                                            //    factFourteen(4)   //
                                            //----------------------//
                                            //    factFourteen(5)   //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainFourteen()   //
                                            //----------------------//
    

    
    
    
    // int factFifteen(int nFifteen) {
        
    // if (nFifteen == 1)
         // return 1;
    // else
      
    
      // ---------->
      // ---------->
      // ---------->     // return nFifteen * factFourteen(nFifteen - 1);
      // ---------->
        
    
   // }
    
    
    
   // int mainFifteen(void) {
     
    
    // -------->   // printf("%i\n", factFifteen(5));
                
                                                

                                            //----------------------//
                                            //    factFifteen(2)    //
                                            //----------------------//
                                            //    factFifteen(3)    //
                                            //----------------------//
                                            //    factFifteen(4)    //
                                            //----------------------//
                                            //    factFifteen(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainFifteen()    //
                                            //----------------------//

    
    // int factSixteen(int nSixteen) {
        
    // if (nSixteen == 1)
         // return 1;
    // else
      
    
      // ---------->
      // ---------->     // return nSixteen * factSixteen(nSixteen - 1);
      // ---------->
        
    
   // }
    
    
    
   // int mainSixteen(void) {
     
    
    // -------->   // printf("%i\n", factSixteen(5));
                
                                                


                                            //----------------------//
                                            //    factSixteen(3)    //
                                            //----------------------//
                                            //    factSixteen(4)    //
                                            //----------------------//
                                            //    factSixteen(5)    //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainSixteen()    //
                                            //----------------------//
    
    
    // int factSeventeen(int nSeventeen) {
        
    // if (nSeventeen == 1)
         // return 1;
    // else
      
    

      // ---------->     // return nSeventeen * factSeventeen(nSeventeen - 1);
      // ---------->
        
    
   // }
    
    
    
   // int mainSeventeen(void) {
     
    
    // -------->   // printf("%i\n", factSeventeen(5));
                
                                                



                                            //----------------------//
                                            //    factSeventeen(4)  //
                                            //----------------------//
                                            //    factSeventeen(5)  //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainSeventeen()  //
                                            //----------------------//
    
    
    // int factEighteen(int nEighteen) {
        
    // if (nEighteen == 1)
         // return 1;
    // else
      
    

      // ---------->     // return nEighteen * factSeventeen(nEighteen - 1);

        
    
   // }
    
    
    
   // int mainEighteen(void) {
     
    
    // -------->   // printf("%i\n", factEighteen(5));
                
                                                



                                            //----------------------//
                                            //    factEighteen(5)   //
                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainEighteen()   //
                                            //----------------------//
    
    
    
    // int factNineteen(int nNineteen) {
        
    // if (nNineteen == 1)
         // return 1;
    // else
      // return nNineteen * factNineteen(nNineteen - 1);
     
        
    
   // }
    
    
    
   // int mainNineteen(void) {
     
    
    // -------->   // printf("%i\n", factNineteen(5));
                
                                                




                                            //----------------------//
                                            //        printf()      //
                                            //----------------------//
   // }                                     //     mainNineteen()   //
                                            //----------------------//
    
    
    
    
    // int factTwenty(int nTwenty) {
        
    // if (nTwenty == 1)
         // return 1;                                   // 120
    // else
      // return nTwenty * factTwenty(nTwenty - 1);
     
        
    
   // }
    
    
    
   // int mainTwenty(void) {
     
    
    // -------->   // printf("%i\n", factTwenty(5));
                
                                                




                                                    //----------------------//
                                                    //        printf()      //
                                                    //----------------------//
   // }                                             //      mainTwenty()    //
                                                    //----------------------//
   
    
    
    // int factTwentyOne(int nTwentyOne) {
        
    // if (nTwentyOne == 1)
         // return 1;
    // else
      // return nTwentyOne * factTwentyOne(nTwentyOne - 1);
     
        
    
   // }
    
    
    
   // int mainTwentyOne(void) {
     
    
  // printf("%i\n", factTwentyOne(5));
                
                                                




    
                                                    //----------------------//
   // }                                             //     mainTwentyOne()  //
                                                    //----------------------//
   
    
    
    printf("%i\n", fact(5));
    
    return 0;
}

int fact(int n) {
    
    if (n == 1)
       return 1;
    else
       return n * fact(n - 1);

}



