/*
 * pointer_to_array.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

void main()
{
    int arr[5][3] = {
            {11, 12, 13},
            {21, 22, 23},
            {31, 32, 33},
            {41, 42, 43},
            {51, 52, 53},
    };

    int (*q)[3];
    q = arr; // q points to the base address of arr, i.e. the first row of arr
    int i,j;
    for (i=0;i<5;i++){
        for (j=0;j<3;j++){
            printf("%d\t", *(q[i]+j));
        }
        printf("\n");
    }
}
