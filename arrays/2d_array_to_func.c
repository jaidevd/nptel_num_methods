/*
 * 2d_array_to_func.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>


void array_to_array(int b[][2], int m, int n){
    int i,j;
    printf("Array to array\n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
}

void array_to_pointer(int *b, int m, int n){
    int i, j;
    printf("Array to pointer\n");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t%d", *(b+i*2+j));
        }
        printf("\n");
    }
}

void array_to_1d_pointer(int (*b)[2], int m, int n){
    int i,j, *p;
    printf("Array to 1d pointer\n");
    for (i=0;i<m;i++){
        p = (int*)b;
        for (j=0;j<n;j++) {
            printf("\t%d", *(p+j));
        }
        printf("\n");
        b++;
    }
}

void array_to_2d_pointer(int(*b)[5][2], int m, int n){
    int i,j;
    printf("Array to 2D pointer\n");
    for(i=0;i<m;i++) {
        for (j = 0; j < n; j++) {
            printf("\t%d", (*b)[i][j]);
        }
        printf("\n");
    }
}



int main()
{

    // four possible ways of passing 2d arrays to a function;
    // 1. array to array
    //    a[m][n] -> b[m][n]
    // 2. array to pointer
    //    a[m][n] -> *p
    // 3. array to 1d pointer
    //    a[m][n] -> (*q)[n]
    // 4. array to 2d pointer
    //    a[m][n] -> (*q)[m][n]

    int arr[][2] = {
            {11, 12},
            {21, 22},
            {31, 32},
            {41, 42},
            {51, 52},
    };
    int m, n;
    m = 5;
    n = 2;

    array_to_array(arr, m, n);
    array_to_pointer(arr, m, n);
    array_to_1d_pointer(arr, m, n);
    array_to_2d_pointer(arr, m, n);
}
