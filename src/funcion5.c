//
// Created by Juan Manuel Lopez-Gabeiras on 11/09/2018.
//
#include <stdio.h>p/

void mod(int *n);

int main() {
    int i = 1;
    printf("%d\n", i);
    mod(&i);
    printf("%d\n", i);
}

void mod(int *n) {
    printf("%d\n", *n);
    *n = 9;
    printf("%d\n", *n);
}