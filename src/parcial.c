//
// Created by Juan Manuel Lopez-Gabeiras on 23/10/2018.
//

#include <stdio.h>

void ejercicio_2();

void ejercicio_3();

void ejercicio_5();

void ejercicio_6();

void loader_Ej2(int alumnos, int notas[]);

void maxMinAvg_Ej2(int alumnos, int *notas);

void printTrys_Ej5(int intentos[]);

void change_Ej6(int *pInt, double *pDouble);

void checker_Ej3(double *point);

void menu() ;

/* 1. a) Falso. C no tiene varieble bool, pero se puede utilizar 0 como falso y cualquier otro numero como verdadero.
 *    b) Falso. El % puede usarse con cualquier tipo de variable, sea decimal, i(int), f(float), c(caracter), etc.
 *    c) Verdadero. Dentro de main se puede declarar en cualquier lugar del main, mietras sea antes del 'return 0;'.
 *    d) Falso. Esto imprimiria tres lineas de texto prinf("he \n llo \n world");. */

int main() {
    menu();
    return 0;
}


void ejercicio_2() {
    int alumnos;
    printf("Introduzca la cantidad de alumnos\n");
    scanf("%d", &alumnos);
    int notas[alumnos];
    loader_Ej2(alumnos, notas);
    maxMinAvg_Ej2(alumnos, notas);
}

void loader_Ej2(int alumnos, int notas[]) {
    int nota;
    for (int i = 0; i < alumnos; ++i) {
        printf("Introduzca la una nota\n");
        scanf("%d", &nota);
        if (nota >= 0 && nota <= 10) notas[i] = nota;
        else {
            printf("Nota no valida, por favor introduzca otra");
            i--;
        }
    }
}

void maxMinAvg_Ej2(int alumnos, int *notas) {
    int max = 0, min = 10;
    float sumTotal = 0;
    for (int i = 0; i < alumnos; ++i) {
        sumTotal += notas[i];
        if (notas[i] >= max) max = notas[i];
        if (notas[i] <= min) min = notas[i];
    }
    printf("Nota maxima   = %d", max);
    printf("Nota minima   = %d", min);
    printf("Nota promedio = %f", sumTotal / alumnos);
}

void ejercicio_3() {
    double sumaVendida;
    double *point = &sumaVendida;
    printf("Introduzca la suma vendida\n");
    scanf("%lf", &sumaVendida);
    checker_Ej3(point);// <---sino anda es culpa de este
    double bono = 0;
    if (sumaVendida <= 1000);
    else if (1000 < sumaVendida && sumaVendida <= 2000) bono = sumaVendida * 0.05;
    else if (2000 < sumaVendida && sumaVendida <= 4000) bono = sumaVendida * 0.07;
    else if (4000 < sumaVendida) bono = sumaVendida * 0.09;
    printf("Debe pagarle al vendedor $%lf", 300 + bono);
}

//Honestamente no se q hice, estoy seguro de q hay maneras mas simples
void checker_Ej3(double *point) {
    double sumaVendida = *point;
    printf("Su suma es de $%lf", sumaVendida);
    printf("Esta seguro de que esta es su suma?\n Diga 's'(si) o 'n'(no)\n");
    char c;
    scanf("%s", &c);
    if (c == 's') {
        if (sumaVendida < 0) {
            printf("ERROR, numero no valido, por favor intente de nuevo\n");
            scanf("%lf", &sumaVendida);
            checker_Ej3(&sumaVendida);
        }
        *point = sumaVendida;
    } else if (c == 'n') {
        scanf("%lf", &sumaVendida);
        checker_Ej3(&sumaVendida);
    }
}

void ejercicio_5() {
    char player1[20], player2[20];
    int n, intento = 0, nItentos = 1;
    int intentos[9];
    printf("Ingrese su nombre jugador 1\n");
    scanf("%s", player1);
    printf("Ingrese su nombre jugador 2\n");
    scanf("%s", player2);
    printf("Muy bien, ahora %s introduzca un numeo por favor", player1);
    scanf("%d", &n);
    printf("Ahora %s, por favor intente adivinar el numero de %s, tiene 10 intentos", player2, player1);
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &intento);
        intentos[i] = intento;
        if (intento == n) {
            printf("Felizitaciones %s a adivinado, y en el intento numero %d", player2, nItentos);
            printTrys_Ej5(intentos);
            return;
        }
        nItentos++;
    }
    printf("Se acabaron sus intentos %s, felicitaciones %s, usted a ganado\n", player2, player1);
    printTrys_Ej5(intentos);
}

void printTrys_Ej5(int intentos[]) {
    printf("Los numeros introducidos fueron:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d", intentos[i]);
    }
}

void ejercicio_6() {
    int i;
    int *pInt;
    double d;
    double *pDouble;
    pInt = &i;
    pDouble = &d;
    *pInt = 0;
    *pDouble = 0.5;
    printf("i = %d  &i = %p    pInt = %p    *pInt = %d \n", i, &i, pInt, *pInt);
    printf("d = %lf &d = %p pDouble = %p *pDouble = %lf\n", d, &d, pDouble, *pDouble);
    change_Ej6(pInt, pDouble);
    printf("i = %d  &i = %p    pInt = %p    *pInt = %d \n", i, &i, pInt, *pInt);
    printf("d = %lf &d = %p pDouble = %p *pDouble = %lf\n", d, &d, pDouble, *pDouble);

}

void change_Ej6(int *pInt, double *pDouble) {
    *pInt = 2;
    *pDouble = 0.9;
}

void menu() {
    int i;
    while (1) {
        printf("\nIntroduzca el numero de ejercicio a testear (0 para finalizar):\n");
        scanf("%d", &i);

        switch (i) {
            case 2:
                ejercicio_2();
                break;
            case 3:
                ejercicio_3();
                break;
            case 5:
                ejercicio_5();
                break;
            case 6:
                ejercicio_6();
                break;
            default:
                return;
        }
    }
}