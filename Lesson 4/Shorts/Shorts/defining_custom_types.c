//
//  defining_custom_types.c
//  Shorts
//
//  Created by Sheeraz on 10/10/24.
//

#include "defining_custom_types.h"

int mainFour(void) {
    
    // Program 6
    
    printf("------------------Program 6------------------\n");
    
    // Defing Custom Data Types
    
        // The C keyword typedef provides a way to create a shorthand
        // or rewritten name for data types.
    
        // The basic idea is to first define a type in the normal way,
        // then alias it to something else.
    
        // typedef <old name> <new name>
    
        // typedef unsigned char byte;
    
       
        // typedef unsigned char byte;
        // ------
       
        // typedef unsigned char byte;
        //         ------------
    
    
        // typedef unsigned char byte;
        //                       ----
    
        // typedef char* string;
    
    
    // Defing Custom Data Types
    
    
    
                // struct car {
    
    
                         // int year;
    
                         // car model[10];
    
                         // char plate[7];
    
                         // int odometer;
    
                         // double engine_size;
    
    
                // };
    
    
                // typedef struct car car_t;
    
    
    
                // struct car {


                         // int year;

                         // car model[10];

                         // char plate[7];

                         // int odometer;

                         // double engine_size;


                // };


                // typedef struct car car_t;
                // ------

    
    
                // struct car {


                         // int year;

                         // car model[10];

                         // char plate[7];

                         // int odometer;

                         // double engine_size;


                // };


                // typedef struct car car_t;
                               // ---------
    
    
                // typedef struct car {


                         // int year;

                         // car model[10];

                         // char plate[7];

                         // int odometer;

                         // double engine_size;


                // };


                // car_t;
                          
    
               // variable declaration
               // struct car mycar;
    
    
               // field accessing
               // mycar.year = 2011;
               // mycar.plate = "CS50";
               // mycar.odometer = 50505;
    
    
    
              // variable declaration
              // struct car mycar;
              //  ---------------
              //       X
    
    
              // field accessing
              // mycar.year = 2011;
              // mycar.plate = "CS50";
              // mycar.odometer = 50505;
    
    
    
              // variable declaration
              // struct car_t mycar;


              // field accessing
              // mycar.year = 2011;
              // mycar.plate = "CS50";
              // mycar.odometer = 50505;
    
    
    
    
    return 0;
}


