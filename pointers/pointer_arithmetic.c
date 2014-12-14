/*
 * pointer_arithmetic.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main()
{
    float x, y;
    long int i, j, m[6], *k[6];
    char *letter, *course[3], name[]="I I T Madras";
    
    course[0]="Numerical Methods";
    course[1]="and programming";

    printf("%s %s\n", course[0], course[1]);

    for (i=0;i<5;i++){
        m[i] = 3*i;
    }
    k[0]=&m[1];
    k[3]=&m[4];
    j=k[3]-k[0]; // one points to the location of the third element of the
    		 // and the other one to the location of the first element.
                 // Obviously the difference is three.
    printf("%ld %ld %ld\n",j, *(k[0]+1),*k[3]);

    letter = course[0];
    for (i=0;i<5;i++){
        j = letter-course[0];
        printf("%ld %c\n",j,*letter);
        letter++;
    }
    return 0;
    
}
