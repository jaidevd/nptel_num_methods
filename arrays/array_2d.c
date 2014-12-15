/*
 * array_2d.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main()
{
    int arr[5][2] = {{11,12},{21,22},{31,32},{41,42},{51,52}};
    // arr[0] is equivalent to *(arr)
    // arr[i] = *(arr + i)
    // arr[i] + j points to the [i,j]th element
    int i,j;
    arr[5][0] = 61;
    arr[5][1] = 62;

    for (i=0;i<6;i++){
        for (j=0;j<2;j++){
            printf("%u %u %d %d %d\t", arr[i], arr[i]+j, arr[i][j], *(*(arr+i)+j),
                   *(arr[i]+j));
        }
        printf("\n");
    }

    return 0;
}
