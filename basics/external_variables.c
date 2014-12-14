/*
 * external_variables.c
 * Copyright (C) 2014 jaidevd <jaidevd@Schrodinger.local>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>
#include <math.h>

float z; // external variable

void add(x)
    float x;
{
    static float y = 0.0;
    extern float z;
    y += 2;
    z = x + y;
}

int main()
{
    float x;
    extern float z;
    int i;
    x = 0.0;
    for (i=1;i<=3;i++)
    {
        add(x);
        printf("%f %f\n",x,z);
    }
    printf("Final Value: %f\n", z);
    return 0;
}
