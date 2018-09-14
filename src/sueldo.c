//
// Created by Juan Manuel Lopez-Gabeiras on 27/08/2018.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sueldo;
    printf("Ingrese su sueldo\n");
    scanf("%d", &sueldo);
    printf("%d\n",sueldo);
    printf(sueldo >= 3000 ? "Debe pagar impuestos" : "No nesecita pagar impuestos");
    return 0;
}
