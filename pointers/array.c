/*
 * array.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main()
{
    int x[4];
    int *num;
    num = x;
    int i = 0;
    while (i++<4) {
        printf("%d\n", *num);
        num++;
    }
    return 0;

}
