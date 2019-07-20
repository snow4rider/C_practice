/**
 * Author: Matthew Mckenney
 * my version of the fizzbuzz problem
 *  Print 1-100 any number that is divisable by 3 print fizz.
 *  Any number diviasable by 5 print buzz. Any number divisable
 *  by both print fizz buzz.
 */

#include <stdio.h>
#define MAX_NUM 100

int main()
{
    int i = 0;

    for (i = 1; i < MAX_NUM; i++) {
        if ((i % 3) == 0) 
            printf(" fizz");
        if ((i % 5) == 0) 
            printf(" buzz");
        if (i % 3 != 0 && i % 5 != 0)
            printf("%d", i);
        printf("\n");
    }

    return 0;
}