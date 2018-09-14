//
// Created by Juan Manuel Lopez-Gabeiras on 04/09/2018.
//
#include <stdio.h>
#include <string.h>

/* 1. Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
 *    a. El valor acumulado de todos los elementos del vector
 *    b. El valor acumulado de los elementos del vector que sean mayores a 36
 *    c. Cantidad de valores mayores a 50 */
void ejercicio1() {
    int vectors[8];
    printf("Introduzca 8 valores\n");
    for (int j = 0; j < 8; ++j)
        scanf("%d", &vectors[j]);
    int sum = 0, sumOver36 = 0, over50 = 0;
    for (int i = 0; i < 8; ++i) {
        sum += vectors[i];
        if (vectors[i] > 36) sumOver36 += vectors[i];
        if (vectors[i] > 50) over50++;
    }
    printf("Sum         = %d\n", sum);
    printf("Sum Over 36 = %d\n", sumOver36);
    printf("Over 50     = %d\n", over50);
}

/* 2. Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos.
 *   Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño.
 *   Es decir sumar la posición 0 del primer vector, con la posición cero del segundo vector, y asi sucesivamente para cada una de las
 *   posiciones. */
void ejercicio2() {
    int vec1[4], vec2[4], vec3[4];
    printf("Introduzca 2 valores en total y le devolvera la suma\n");
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &vec1[i]);
        scanf("%d", &vec2[i]);
        vec3[i] = vec1[i] + vec2[i];
        printf("Suma = %d\n", vec3[i]);
    }
}

/* 3. Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con cinco alumnos.
 * Realizar un programa que muestre el curso que obtuvo el mayor promedio general. */
void ejercicio3() {
    int alumnosCA, alumnosCB, sumA = 0, sumB = 0;
    printf("Diga la cantidad de alumnos q hay en cada clase en una linea separado con una coma\n");
    scanf("%d, %d", &alumnosCA, &alumnosCB);
    int cursoA[alumnosCA], cursoB[alumnosCB];
    printf("Ingrese las notas de la clase A\n");
    for (int i = 0; i < alumnosCA; ++i) scanf("%d", &cursoA[i]);
    printf("Ingrese las notas de la clase B\n");
    for (int i = 0; i < alumnosCB; ++i) scanf("%d", &cursoB[i]);
    for (int i = 0; i < alumnosCA; ++i) sumA += cursoA[i];
    for (int i = 0; i < alumnosCB; ++i) sumB += cursoB[i];
    printf("Promedio Curso A = %d\n", sumA / alumnosCA);
    printf("Promedio Curso B = %d\n", sumB / alumnosCB);
}

/* 4. Confeccionar un programa que solicite la carga de dos valores enteros por teclado.
 * Luego solicitar que se cargue alguno de loscaracteres ‘+’,’-‘,’*’, o ‘/’.
 * Según el carácter ingresado proceder a mostrar la suma, resta, multiplicación o división de losvalores ingresados.
 * OJO CON LA DIVISIÓN POR CERO. */
void ejercicio4() {
    int a, b;
    char c[2];
    printf("Ingrese los dos numeros separados por una coma\n");
    scanf("%d, %d", &a, &b);
    for(;;) {
        printf("Introduzca que quiere hacer con los numeros\n");
        scanf("%s", c);
        switch (c[0]) {
            case '+':;
                printf("Suma = %d", a + b);
                return;
            case '-':;
                printf("Resta = %d", a - b);
                return;
            case '*':;
                printf("Producto = %d", a * b);
                return;
            case '/':
                if (b == 0) {
                    printf("No se puede dividir por cero ingrese otros numeros\n");
                    ejercicio4();
                } else {
                    printf("Division = %f", (float) a / b);
                }
                return;
            default:
                break;
        }
    }
}

/* 5. Confeccionar un programa que permita ingresar una palabra
 * y luego muestre un mensaje si la misma comienza con la vocal ‘A’ o ‘a’. */
void ejercicio5() {
    char word[10];
    printf("Ingrese una palabra\n");
    scanf("%s", word);
    if (word[0] == 'A' || word[0] == 'a') printf("La palabra empieza con la vocal'a' ");
    else printf("La palabra no empieza con 'a' \n");
}

/* 6. Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string.
 * Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123". */
void ejercicio6() {
    char name[20], psw[20];
    printf("Ingrese su nombre\n");
    scanf("%s", name);
    printf("Ingrese su conttraseña\n");
    scanf("%s", psw);
    printf(strcmp("abc123", psw) == 0 ? "Contraseña correcta" : "Contraseña incorrecta");
}

/* 7. Ingresar por teclado dos nombres de personas
 * y luego mostrarlas primero el que tiene más caracteres y luego el que tiene menos. */
void ejercicio7() {
    char name1[20], name2[20];
    printf("Ingrese un nombre\n");
    scanf("%s", name1);
    printf("Ingrese otro\n");
    scanf("%s", name2);
    if (strlen(name1) >= strlen(name2)) {
        printf("%s\n", name1);
        printf("%s\n", name2);
    } else {
        printf("%s\n", name2);
        printf("%s\n", name1);
    }
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
            default:
                return;
        }
    }
}

int main() {
    menu();
    return 0;
}
