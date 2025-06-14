/*
 *
 *  "incrementOper.c":
 *
 *  (made by https://github.com/constantnamechanger )
 *  (inspired by K.N King's book: "C Programming, A modern approach." )
 *
 *  <----------------------------------------------------------------------------------->
 *  |                                                                                   |
 *  |   Program that demonstrates "pre-incrementing" compared to "post-incrementing"    |
 *  |                                                                                   |
 *  <----------------------------------------------------------------------------------->
 *
 */


#include <stdio.h>


int main(void)
{

    printf(" \nThis small Program demonstrates \"pre-increment\" vs \"post-increment\":\n \n");

    int i = 0;
    printf("'i' = %d\n", i);
    printf("'i++' = %d\n", i++);
    printf("'i' line later = %d\n \n", i);

    int j = 0;
    printf("'j' = %d\n", j);
    printf("'++j' = %d\n", ++j);
    printf("'j' line later = %d\n \n", j);


    return 0;
}
