/*
 *
 *  "upc.c":
 *
 *  (made by https://github.com/constantnamechanger )
 *  (inspired by K.N King's book: "C Programming, A modern approach." )
 *
 *  <--------------------------------------------------------------------------------------->
 *  |                                                                                       |
 *  |   Program that calculates a UPC barcode's Check Digit based on the first 11 Digits    |
 *  |                                                                                       |
 *  <--------------------------------------------------------------------------------------->
 *
 */


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#define UPC_LENGHT 11 // length without check digit


int main ( int argc, char* argv[] )
{

    // check if user didn't enter arguments
    if (argc < 2)
    {
        printf("ERROR: need at least 1 argument.\n"); // user didn't enter any arguments
        return -1; // exit and return -1
    }

    else {

        // check and warn user if they enter 2 or more arguments
        if (argc > 2)
        {
            printf("Warning!: The rest of the arguments past the first argument are ignored!\n");
        }

        // check if the first argument has invalid lenght
        if ( (int)strlen(argv[1]) == UPC_LENGHT )
        {

            int upcArray[UPC_LENGHT] = {0,0,0,0,0,0,0,0,0,0,0};
            char* inStr = argv[1];

            // put inStr's digits in upcArray
            for (int i = 0; i < UPC_LENGHT; i++){
                if ( isdigit( inStr[i] ) )
                {
                    upcArray[i] = inStr[i] - '0';
                }
                else
                {
                    printf("ERROR: the first argument must be all digits.\n");
                    return -1;
                }
            }

            // do the check digit calculation
            int sum1 = upcArray[0] + upcArray[2] + upcArray[4] + upcArray[6] + upcArray[8] + upcArray[10] * 3;
            int sum2 = upcArray[1] + upcArray[3] + upcArray[5] + upcArray[7] + upcArray[9];
            int result = (((sum1 + sum2) - 1) % 10) - 9;

            // print the UPC check digit with abs()
            printf("UPC Check Digit = %d\n", abs(result));

        }
        // if the first argument has invalid lenght
        else {
            printf("ERROR: First argument string lenght is not 11 (invalid)\n");
            return -1;
        }

    }


    return 0;

}
