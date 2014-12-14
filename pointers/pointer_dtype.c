/*
 * pointer_dtype.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

/*
 * For every variable there is a:
 *  	        Name	Address	   Content
 * ---------------------------------------
 *  int n	n	16254	   0
 *  int m	m	16255	   0
 *  int *num	*num	16258	   0
 *
 *  If:
 *  int n = 6;
 *  num = &n;
 *  then
 *  	        Name	Address	   Content
 * ---------------------------------------
 *  int n	n	16254	   6
 *  int m	m	16255	   0
 *  int *num	*num	16258	   16254
 *
 *  If:
 *  int m = *num;
 *  then
 *  	        Name	Address	   Content
 * ---------------------------------------
 *  int n	n	16254	   6
 *  int m	m	16255	   6
 *  int *num	*num	16258	   16254
 */

#include <stdio.h>

int main()
{
    float x, y;
    float *z;
    FILE *FP;
    FP = fopen("sample.dat","w");
    y = 10.0;
    z = &y; // 'points' to the variable, RETURNS the address of the operand
    x = *z; // returns the value to which z points, i.e. the value of y
    printf("%f %f\n", y, *(&y));

    // other side
    *z = 5.0;
    printf("New value: %f\n", y);

    return 0;
}
