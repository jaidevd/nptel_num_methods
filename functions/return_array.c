/*
 * return_array.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int *matrix1() // returns a pointer
{
    static int arr[][2] = {
            {11, 12},
            {21, 22},
            {31, 32},
            {41, 42},
            {51, 52}
    };
    return *arr;
}

int (*matrix2())[2]{ // returns a 1D pointer
    static int arr[][2] = {
            {11, 12},
            {21, 22},
            {31, 32},
            {41, 42},
            {51, 52}
    };
    return arr;
}

int (*matrix3())[5][2]{ // returns a 2D pointer
    static int arr[][2] = {
            {11, 12},
            {21, 22},
            {31, 32},
            {41, 42},
            {51, 52}
    };
    return (int(*)[5][2])arr;
}

int main()
{
    /* Three ways to return arrays from a function
        1. Array to a pointer
        2. Array to a 1D pointer
        3. Array to a 2D array
     */
    int *a, i;
    int *matrix1();

    int (*b)[2];
    int *r;
    int (*matrix2())[2];

    int (*c)[5][2];
    int (*matrix3())[5][2];

    a = matrix1();
    printf("matrix1\n");
    for (i=0;i<5;i++){
        printf("%d %d\n", *(a + i*2), *(a + i*2 +1));
    }

    b = matrix2();
    printf("matrix2\n");
    r = (int*)b;
    for (i=0;i<5;i++){
        printf("%d %d\n", *r, *(r+1));
        b++;
    }

    c = matrix3();
    printf("matrix3\n");
    for (i=0;i<5;i++){
        printf("%d %d\n",(*c)[i][0], (*c)[i][1]);
    }

    return 0;
}
