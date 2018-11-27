#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc30-c"
//
// Created by Juan Manuel Lopez-Gabeiras on 11/09/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu();

void ejercicio_1(int a, int b);

void ejercicio_2(float lado);

void perimetro_Ej2(float lado);

void superficie_Ej2(float lado);

void ejercicio_3(char sex);

/*4. Es igual al 3 */

void ejercicio_5(int a, int b, int c);

void ejercicio_6(int n);

void ejercicio_7(char c);

//El 8 esta en el 2

void ejercicio_9();

void ejercicio_10(int a, int b, int c);

//El 11 esta en el 2

void ejercicio_12();

float superficie_Ej12(int l1, int l2);

void ejercicio_13();

int *loader_Ej13();

void printer_Ej13(int vectors[]);

void ejercicio_14();

int *loader_Ej14();

void printer_Ej14(int sueldos[]);

void total_Ej14(int sueldos[]);

void ejercicio_15();

int *loader_Ej15();

int *loade_3_Ej15(int vec1[], int vec2[]);

void printer_Ej15(int vectors[], int arrayN);

void ejercicio_16();

void loader_Ej16(char chars[]);

int counter_Ej16(char chars[]);

void ejercicio_17();

void loader_Ej17(float vec[]);

float averege_Ej17(float vec[]);

void count_N_print_Ej17(float vec[], float avg);

int main(void) {
    menu();
    return 0;
}

void menu() {
    int i;
    float a, b, c;
    char d;
    while (1) {
        printf("\nIntroduzca el numero de ejercicio a testear (0 para finalizar):\n");
        scanf("%d", &i);

        switch (i) {
            case 1:
                printf("Ingrese dos numeros juntos\n");
                scanf("%f, %f", &a, &b);
                ejercicio_1((int) a, (int) b);
                break;
            case 2:
                printf("Introduzca el kado de un cuadrado\n");
                scanf("%f", &a);
                ejercicio_2(a);
                break;
            case 3:
            case 4:
                printf("Introduzca el character de su sexo\n");
                scanf("%s", &d);
                ejercicio_3(d);
                break;
            case 5:
                printf("Introduzca tres numeros\n");
                scanf("%f, %f, %f", &a, &b, &c);
                ejercicio_5((int) a, (int) b, (int) c);
                break;
            case 6:
                printf("Introduzca un numero\n");
                scanf("%f", &a);
                ejercicio_6((int) a);
                break;
            case 7:
                printf("Introduzca un caracter\n");
                scanf("%s", &d);
                ejercicio_7(d);
                break;
            case 8:
                printf("Introduzca el lado de un cuadrado\n");
                scanf("%f", &a);
                superficie_Ej2(a);
                break;
            case 9:
                ejercicio_9();
                break;
            case 10:
                printf("Introduzca tres numeros\n");
                scanf("%f, %f, %f", &a, &b, &c);
                ejercicio_10((int) a, (int) b, (int) c);
                break;
            case 11:
                printf("Introduzca el lado de un cuadrado\n");
                scanf("%f", &a);
                perimetro_Ej2(a);
                break;
            case 12:
                ejercicio_12();
                break;
            case 13:
                ejercicio_13();
                break;
            case 14:
                ejercicio_14();
                break;
            case 15:
                ejercicio_15();
                break;
            case 16:
                ejercicio_16();
                break;
            case 17:
                ejercicio_17();
                break;

            default:
                return;
        }
    }
}


/* 1. Confeccionar una función que reciba dos enteros e imprima el mayor de ellos.
 * Llamar a la función desde la main cargando previamentedos valores por teclado. */
void ejercicio_1(int a, int b) {
    if (a > b) printf("%d es mayor\n", a);
    else if (a < b) printf("%d es mayor\n", b);
    else printf("%d y %d tienen el mismo valor\n", a, b);
}

/* 2. Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado.
 * La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro. */
void ejercicio_2(float lado) {
    perimetro_Ej2(lado);
    superficie_Ej2(lado);
}

void superficie_Ej2(float lado) {
    printf("Superficie = %f\n", lado * lado);
}

void perimetro_Ej2(float lado) {
    printf("Perimetro = %f\n", lado * 4);
}


/* 3. Desarrollar una función que reciba como parámetro un caracter.
 * Si llega una 'h' mostrar por pantalla el mensaje "hombre", si llega una 'm' mostrar el mensaje "mujer". */
void ejercicio_3(char sex) {
    if (sex == 'h' || sex == 'H') printf("Hombre\n");
    else if (sex == 'm' || sex == 'M') printf("Mujer\n");
    else printf("Sexo indefinido, gran crisis de identidad\n");
}


/* 5. Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos.
 * La carga de los valores hacerlo por teclado en la función main. */
void ejercicio_5(int a, int b, int c) {
    if (a == b) {
        if (b == c) printf("%d = %d = %d, todos iguales\n", a, b, c);// a = c
        else if (b > c) printf("a(%d) y b(%d) son mayores\n", a, b);//a > c
        else /*(b < c)*/ printf("c(%d) es el mayor\n", c);//a < c
    } else if (a > b) {
        if (a == c) printf("a(%d) y c(%d) son mayores\n", a, c);
        else if (a > c) printf("a(%d) es mayor\n", a);
        else /*(a < c)*/ printf("c(%d) es mayor\n", c);

    } else /*(a < b)*/ {
        if (b == c) printf("b(%d) y c(%d) son mayores\n", b, c);
        if (b < c) printf("c(%d) es mayor\n", c); // a < c
        else /*(b > c)*/ printf("b(%d) es mayor\n", b);
    }
}

/* 6. Elaborar una función que reciba un valor entero y nos muestre desde el 1 hasta dicho valor.
 * Si la función recibe un valor negativo mostrar un mensaje de error. */
void ejercicio_6(int n) {
    if (n < 1) printf("Error porfavor introduzca un numero positivo\n");
    else {
        for (int i = 1; i < n; ++i) {
            printf("%d\n", i);
        }
    }
}

/* 7. Desarrollar una función que reciba como parámetro un caracter.
 * La función debe mostrar un mensaje si es una vocal o no es una vocal.
 * Debe funcionar tanto con mayúsculas y minúsculas. */
void ejercicio_7(char c) {
    switch (c) {
        case 'a':
        case 'i':
        case 'u':
        case 'e':
        case 'o':
        case 'A':
        case 'I':
        case 'U':
        case 'E':
        case 'O':
            printf("%c es vocal", c);
            break;
        default:
            printf("%c no es vocal", c);
            break;
    }
}

/* 9. Confeccionar una función que defina dos parámetros enteros y nos retorne el mayor */
void ejercicio_9() {
    printf("Esta funcion genera sus numeros random\n");
    srand((unsigned) time(NULL));
    int a = rand(), b = rand();
    ejercicio_1(a, b);
}

/* 10. Elaborar una función que reciba tres enteros y nos retorne el valor promedio de los mismos. */
void ejercicio_10(int a, int b, int c) {
    printf("Promedio = %f", (float) (a + b + c) / 3);// checkear si los recorta a los valores
}

//El 11 esta en el 2

/* 12. Confeccionar una función que calcule la superficie de un rectángulo y la retorne,
 * la función recibe como parámetros los valoresde dos de sus lados:
 * int retornarSuperficie(int lado1,int lado2)
 * En la función main del programa cargar los lados de dos rectángulos
 * y luego mostrar cual de los dos tiene una superficie mayor. */
void ejercicio_12() {
    int l1, l2;
    printf("\nIntroduzca ambos lados juntos\n");
    scanf("%d, %d", &l1, &l2);
    printf("Superficie = %f\n", superficie_Ej12(l1, l2));
}

float superficie_Ej12(int l1, int l2) {// Lo hago retornar float en vez de int por si la divicion e da algo con coma
    return (float) (l1 * l2) / 2;
}


/* 13. Confeccionar un programa que defina dos funciones,
 * una que permita cargar un vector de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
 * En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones. */
void ejercicio_13() {
    printf("Esta funcion genera sus numeros random\n");
    int *vectors;
    vectors = loader_Ej13();
    printer_Ej13(vectors);
}

int *loader_Ej13() {
    static int vectors[5];

    srand((unsigned) time(NULL));

    for (int i = 0; i < 5; ++i) {
        vectors[i] = rand();
    }
    return vectors;
}

void printer_Ej13(int vectors[]) {
    for (int i = 0; i < 5; ++i) {
        printf("%d = %d", i + 1, vectors[i]);
    }
}


/* 14. Guardar los datos de 6 sueldos de empleados en un vector de tipo float. Confeccionar las siguientes funciones:
1-Carga de sueldos.
2-Impresión de los sueldos.
3-Gasto total de la empresa en sueldos */

void ejercicio_14() {
    printf("Esta funcion genera sus numeros random\n");
    int *sueldos;
    sueldos = loader_Ej14();
    printer_Ej14(sueldos);
    total_Ej14(sueldos);
}

int *loader_Ej14() {
    static int sueldos[6];

    srand((unsigned) time(NULL));

    for (int i = 0; i < 6; ++i) {
        sueldos[i] = rand();
    }
    return sueldos;
}

void printer_Ej14(int sueldos[]) {
    for (int i = 0; i < 6; ++i) {
        printf("Sueldo%d = %d", i + 1, sueldos[i]);
    }
}

void total_Ej14(int sueldos[]) {
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += sueldos[i];
    }
    printf("Gasto en sueldos = %d", sum);
}


/*15. Definir tres vectores de tipo entero. Realizar la carga de los dos primeros por teclado.
 * Definir una única función que realice la carga de un vector y llamar a dicha función dos veces pasando el primer
 * y segundo vector definido.
 * Plantear otra función que reciba tres vectores y proceda a sumar elemento a elemento los dos primeros vectores
 * y se carguen en el tercer vector.
 * Imprimir los tres vectores.
 * Trabajemos con vectores de 5 posiciones. */

void ejercicio_15() {
    int *vec1, *vec2, *vec3;
    vec1 = loader_Ej15();
    vec2 = loader_Ej15();
    vec3 = loade_3_Ej15(vec1, vec2);
    printer_Ej15(vec1, 1);
    printer_Ej15(vec2, 2);
    printer_Ej15(vec3, 3);
}

int *loader_Ej15() {
    static int vec[5];
    for (int i = 0; i < 5; ++i) {
        printf("Introduzca un numero para el vector 1\n");
        scanf("%d", &vec[i]);
    }
    return vec;
}

int *loade_3_Ej15(int vec1[], int vec2[]) {
    static int vec3[5];
    for (int i = 0; i < 5; ++i)
        vec3[i] = vec1[i] + vec2[i];
    return vec3;
}

void printer_Ej15(int vectors[], int arrayN) {
    printf("Array numero %d\n\n", arrayN);
    for (int i = 0; i < 5; ++i)
        printf("Posicion %d = %d", i, vectors[i]);
}


/* 16. Confeccionar dos funciones:
 * 1-Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
 * 2-Retornar la cantidad de vocales que tiene la palabra. */
void ejercicio_16() {
    char chars[50];
    loader_Ej16(chars);
    printf("La palabra ingresada tiene %d vocales\n", counter_Ej16(chars));
}

void loader_Ej16(char chars[]) {
    printf("Introduzca una palabra y le contare las vocales\n");
    scanf("%s", chars);
}

int counter_Ej16(char chars[]) {
    int vocals = 0;
    for (int i = 0; i < strlen(chars); ++i) {
        switch (chars[i]) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
            case 'A':
            case 'I':
            case 'U':
            case 'E':
            case 'O':
                vocals++;
                break;
            default:
                break;
        }
    }
    return vocals;
}

/* 17. Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas.
 * Desarrollar las siguientes funciones:
 * 1-Carga del vector.
 * 2-Retornar el promedio del vector.
 * 3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas. */
void ejercicio_17() {
    float vec[5];
    loader_Ej17(vec);
    count_N_print_Ej17(vec, averege_Ej17(vec));
}

void loader_Ej17(float vec[]) {
    for (int i = 0; i < 5; ++i) {
        printf("Ingrese una altura\n");
        scanf("%f", &vec[i]);
    }
}

float averege_Ej17(float vec[]) {
    float sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += vec[i];
    }
    return sum / 5;
}

void count_N_print_Ej17(float vec[], float avg) {
    int above = 0, below = 0;
    for (int i = 0; i < 5; ++i) {
        vec[i] > avg ? above++ : below++;
    }
    printf("Hay %d personas arriva del promedio y %d abajo del promedio %f\n", above, below, avg);
}