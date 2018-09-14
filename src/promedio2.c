//
// Created by Juan Manuel Lopez-Gabeiras on 27/08/2018.
//
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, promedio;
    printf("Ingrese sus tre notas");
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;
    printf("%f\n", promedio);
    printf(promedio >= 7 ? "Promocionado" : "Debe rendir final");
    return 0;
}
