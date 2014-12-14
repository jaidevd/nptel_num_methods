/*
 * cube.c
 * Calculate the cube of a number
 * Copyright (C) 2014 jaidevd <jaidevd@Schrodinger.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <math.h>

int cube(x)
float x;

    {
        float y;
        y = x*x*x;
        return y;
    }


int main()
{
    float y;
    float x;
    while (x++<3.0)
    {
        y = cube(x);
        printf("%f %f %f \n", x, pow(x,2), y);
    }
    return 0;

}


