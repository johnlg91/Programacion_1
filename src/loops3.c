//
// Created by Juan Manuel Lopez-Gabeiras on 02/09/2018.
//

#include <stdio.h>

//Ejercicio 1
// Imprimir los número del 1 al 100. Utilizar ciclo While.
void ejercicio1() {
    int i = 1;
    while (i <= 100) {
        printf("%d,", i);
        i++;
    }
}

//Ejercicio 2
void ejercicio2() {
    int x;
    scanf("%d", &x);
    int i = 1;
    while (i <= x) {
        printf("%d,", i);
        ++i;
    }
}

// Ejercicio 3
// Desarrollar un programa que permita la carga de 10 valores por teclado
// y nos muestre posteriormente la suma de los valores ingresados y su promedio.
//
void ejercicio3() {
    int asked;
    float total = 0;
    int i = 0;
    while (i < 10) {
        scanf("%d, ", &asked);
        total += asked;
        ++i;
    }
    printf("sum = %f\n", total);
    printf("prom = %f\n", total / 10);
}


/* Ejercicio 4:
 Una planta que fabrica perfiles de hierro posee un lote de n piezas.
 Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar
 y luego ingrese la longitud de cada perfil;
 sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas.
 Imprimir por pantalla la cantidad de piezas aptas que hay en el lote. Utilizar While.
*/
void ejercicio4() {
    int n;
    scanf("%d", &n);
    int good = 0;
    int i = 0;
    while (i < n) {

        float length;
        scanf("%f", &length);
        if (length >= 1.20 && length <= 1.30) good++;
        ++i;
    }
    printf("Hay %d piezas buenas\n", good);
}

/* Ejercicio 5:
 * Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)
 */
void ejercicio5() {
    int i = 0, n = 0;
    while (i < 25) {
        n += 11;
        printf("%d, ", n);
        ++i;
    }
}

/*Ejercicio 6
 * Suma de los primeros n números enteros, el valor de n lo debe ingresar el usuario.
 * La suma final se debe informar por pantalla.
 */
void ejercicio6() {
    int asked;
    scanf("%d,", &asked);
    int total = 0;
    for (int i = 0; i < asked; ++i) {
        total++;
    }
    printf("sum = %d\n", total);
}


/*Ejercicio 7:
 * Realizar un programa que imprima en pantalla los números del 1 al 100. Utilizando FOR
 */
void ejercicio7() {
    for (int i = 1; i <= 100; ++i) {
        printf("%d,", i);
    }
    printf("\n");
}

/* Ejercicio 8
 * Desarrollar un programa que permita la carga de 10 valores por teclado y
 * nos muestre posteriormente la suma de los valores ingresados y su promedio. Utilizar FOR.
 */
void ejercicio8() {
    int asked;
    float total = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d,", &asked);
        total += asked;
    }

    printf("sum = %f\n", total);
    printf("prom = %f\n", total / 10);
}
/* Ejercicio 9
 *  Escribir un programa que lea 10 números enteros y
 *  luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5.
 *  Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez. Utilizar FOR.
 */
void ejercicio9() {
    int asked;
    int multiplo3 = 0;
    int multiplo5 = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d,", &asked);
        if (asked % 3 == 0) multiplo3++;
        if (asked % 5 == 0) multiplo5++;
    }
    printf("multiplos de 3 = %d\n", multiplo3);
    printf("multiplos de 5 = %d\n", multiplo5);
}

/* Ejercicio 10
 * Confeccionar un programa que lea n pares de datos,
 * cada par de datos corresponde a la medida de la base y la altura de un triángulo.
 * El programa deberá informar:
 *  a) De cada triángulo la medida de su base, su altura y su superficie.
 *  b) La cantidad de triángulos cuya superficie es mayor a 12.
 */
void ejercicio10() {
    int n, j = 0;
    scanf("%d", &n);
    float base, altura, superficie;
    for (int i = 1; i <= n; ++i) {
        scanf("%f, %f", &base, &altura);
        superficie = (base * altura) / 2;
        printf("Triangulo numero %d tiene:\n", i);
        printf("  Base       = %f\n", base);
        printf("  Altura     = %f\n", altura);
        printf("  Superficie = %f\n", superficie);
        if (superficie > 12) j++;
    }
    printf("Hay %d con superficie mayor a 12\n", j);
}

/* Ejercicio 11
 * Escribir un programa que solicite la carga de números por teclado, obtener su promedio.
 * Finalizar la carga de valores cuando se ingrese el valor 0. Usar DO-WHILE
 */
void ejercicio11() {
    int i;
    scanf("%d", &i);
    if (i == 0) return;
    int n = 0;
    float total = 0;
    do {
        total += i;
        n++;
        scanf("%d", &i);
    } while (i != 0);
    printf("Promedio = %f\n", total / n);
}

/* Ejercicio 12
 * Realizar un programa que permita ingresar el peso (en kilogramos) de piezas.
 * El proceso termina cuando ingresamos el valor 0.
 * Se debe informar:
 *    a) ¿Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?,
 *       ¿Cuántas con más de 10.2 Kg.? y
 *       ¿Cuántas con menos de 9.8 Kg.?
 *    b) La cantidad total de piezas procesadas.
 */
void ejercicio12() {
    float medida;
    scanf("%f", &medida);
    if (medida == 0) return;
    int mayores = 0, entre = 0, menores = 0;
    do {
        if (medida < 9.8) menores++;
        else if (medida > 10.2) mayores++;
        else entre++;
        scanf("%f", &medida);
    } while (medida != 0);
    printf("Hay %d piezas menores a 9,8kg\n", menores);
    printf("Hay %d piezas entre 9,8kg y 10,2kg\n", entre);
    printf("Hay %d piezas mayores 10,2kg\n", mayores);
    printf("Hay un total de %d piezas\n", menores + entre + mayores);
}

void menu() {
    int i;
    while (1) {
        printf("\nIntroduzca el numero de ejercicio a testear (0 para finalizar):\n");
        scanf("%d", &i);

        switch (i) {
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                ejercicio5();
                break;
            case 6:
                ejercicio6();
                break;
            case 7:
                ejercicio7();
                break;
            case 8:
                ejercicio8();
                break;
            case 9:
                ejercicio9();
                break;
            case 10:
                ejercicio10();
                break;
            case 11:
                ejercicio11();
                break;
            case 12:
                ejercicio12();
                break;
            default:
                return;
        }
    }
}

int main() {
    menu();
    return 0;
}

