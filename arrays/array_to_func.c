/*
 * array_to_func.c
 * Copyright (C) 2014 jaidevd <deshpande.jaidev@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include "stdio.h"

void print_by_reference(n, b, l)
int n, b[5], *l;
{
    int i;
    b[4] = 60;
    *l = 15;
    for (i=0;i<n;i++){
        printf("%p %d %d\n", &b[i], b[i], *l);
    }
}

void print_by_value(int k, int n){
    k = 80;
    n = 20;
    printf("%d %d\n", k, n);
}

int main()
{
    int num[] = {10, 20, 30, 40, 50};
    int m, *j;
    m = 5;
    j = &m;

    // Pass by reference
    print_by_reference(5, num, j);
    printf("%d %d\n", num[4], m);

    // Pass by value
    print_by_value(num[3], m);
    printf("%d %d\n", num[3], m);

    return 0;
}


