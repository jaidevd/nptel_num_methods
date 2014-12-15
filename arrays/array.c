/*
 * array.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <stdio.h>

int main()
{
    int num[] = {10, 20, 30, 40, 50};
    int i, *j;
    j = num;
    for (i=0;i<5;i++){
        printf("%p %p %d %d\n", &j, &j[i], *j, num[i]);
        j++;
    }
}
