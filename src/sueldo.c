//
// Created by Juan Manuel Lopez-Gabeiras on 27/08/2018.
//
#include <stdio.h>
#include <stdlib.h>

int length(char *chain);

int lengths(char *chain) ;

void modifie(int *pi, double *pd) {
    *pi = 30;
    *pd = 3.33333;
}

int main() {
    /*int i = 10;
    int* pi = &i;
    double d = 40.5;
    double * pd = &d;
    printf("i  = %15d, %15p\n", i, &i);
    printf("pi = %15p, %15d, %15p\n", pi, *pi, &pi);
    printf("d  = %15f, %15p\n", d, &d);
    printf("pd = %15p, %15f, %15p\n", pd, *pd, &pd);
    modifie(pi, pd);
    printf("i  = %15d, %15p\n", i, &i);
    printf("pi = %15p, %15d, %15p\n", pi, *pi, &pi);
    printf("d  = %15f, %15p\n", d, &d);
    printf("pd = %15p, %15f, %15p\n", pd, *pd, &pd);*/

    char s[]= "hello worlkkddddddddddddddddddddddddddd ora roa ora ora ora ora oraora ororoiiiroarooaoaoroaooaroaor";
    printf("lenght = %d\n", length(&s[0]));
    printf("lenght = %d", lengths(&s[0]));
    return 0;
}

void rlist(int *list) {
    while (printf("%d", *list++));
}

int length(char *chain) {
    int i = 0;
    while (*chain++) i++;
    return i;
}

int lengths(char *chain) {
    if (*chain) return 1 + lengths(chain + 1);
    return 0;
}
