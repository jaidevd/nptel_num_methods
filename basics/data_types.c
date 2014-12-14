/*
 * data_types.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    long int i, j, k;
    char letter, chain[] = "a quick fox\n";

    letter = 'B';
    y = 1.01;
    i = 2;

    printf("\n");
    printf("%lf %ld %c %s\n", y, i, letter, chain);
    j = 0;

    while (j++<31) {
        x = y * y;
        k = 2 * i;
        printf("%ld %lf %ld\n", j, x, i);
        y = x;
        i = k;
    }
    
    

}
