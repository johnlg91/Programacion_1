//
// Created by Juan Manuel Lopez-Gabeiras on 27/08/2018.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b;
    scanf("%lf, %lf", &a, &b);
    if (a > b) {
        printf("%lf es mayor\n", a);
        printf("suma = %lf\n", a + b);
        printf("dif = %lf\n", a - b);
    } else if (a < b) {
        printf("%lf es mayor\n", b);
        printf("prod = %lf\n", a * b);
        printf("div = %lf\n", b / a);
    } else printf("Ambos tienen el mismo valor");
    return 0;
}