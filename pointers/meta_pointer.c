/*
 * meta_pointer.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main()
{
    float x, y;
    long int i,j;
    char *letter, *course[3], **marker;
    
    course[0] = "Numerical Methods";
    course[1] = "and programming";
    
    marker = &course[1];
    printf("%s %s\n", course[0], *marker);

    marker--;
    printf("%s %s\n", course[0], *marker);
    
    marker++;
    for (i=0;i<13;i++){

        printf("%ld %c\n",i,*(*marker)++);
    }
}
