/*
 * memory.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include "stdlib.h"
#define l 4

int main()
{
    int *a, i, *p;
    float *b, *c;
    size_t size;

    a = (int*) malloc(l);
    for (i=0;i<l;i++){
        *(a+i) = i;
    }
    size = sizeof(a);
    for (i=0;i<l;i++){
        printf("a %d %d %p %zd\n", i, *(a+i), (a+i), size);
    }

    p = (int*) calloc(l,2);
    for (i=0;i<l;i++){
        *(p+i) = i*2;
    }
    size = sizeof(p);
    for (i=0;i<l;i++){
        printf("p %d %d %p %zd\n", i, *(p+i), (p+i), size);
    }

    b = malloc(l);
    for (i=0;i<l+2;i++){
        *(b+i) = i*4.0;
    }
    size = sizeof(b);
    for (i=0;i<l+2;i++){
        printf("b %d %f %p %zd\n", i, *(b+i), (b+i), size);
    }

    c = calloc(l, 8);
    for (i=0;i<l;i++){
        *(c+i) = i*4.0;
    }
    size = sizeof(c);
    for (i=0;i<l+1;i++){
        printf("c %d %f %p %zd\n", i, *(c+i), (c+i), size);
    }


    return 0;
}
