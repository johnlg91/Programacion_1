//
// Created by Juan Manuel Lopez-Gabeiras on 16/10/2018.
//

#include <stdio.h>

//Ejercicio 53
void ejercicio_53() ;

void increaseByOne(int* var) ;

int main() {
    int a = 4;
    /*int b = 10;
    int c = 20;
    int* p = &c;


    printf("a = %15d %15ld\n", a, &a);
    printf("b = %15d %15ld\n", b, &b);
    printf("c = %15d %15ld\n", c, &c);
    printf("p = %15ld %15ld\n", p, &p);
    *p = *p +1;
    printf("c = %15d %15ld\n", c, &c);
    p = &a;
    *p += 11;
    printf("a = %15d %15ld\n", a, &a);

    printf("=======\n");
    p = &c;
    printf("p = %15ld %15ld\n", p, &p);
    *p = 1;
    *++p = 2;
    *++p = 3;
    printf("a = %15d %15ld\n", a, &a);
    printf("b = %15d %15ld\n", b, &b);
    printf("c = %15d %15ld\n", c, &c);
    printf("p = %15ld %15ld\n", p, &p);*/
   increaseByOne(&a);
   printf("%d", a);

}

void addName_53(char player1[], char player2[]) ;

void tries_53(int intentos[], int nIntentos, char player2[]) ;

//Ejercicio 53
void ejercicio_53() {
    char player1[15], player2[15];
    addName_53(player1, player2);
    int n;
    printf("Por favor %s ingrese un numero\n", player1);
    scanf("%d", &n);
    printf("Ahora, %s por favor\n", player2);
    int intento, intentos[10];
    for (int i = 0; i < 10; ++i) {
        printf("Intente adivinar el numero, tiene %d intentos\n", 10 - i);
        scanf("%d", &intento);
        intentos[i] = intento;
        if (intento == n) {
            printf("Felicitaciones %s a ganado!", player2);
            tries_53(intentos, i, player2);
            return;
        }
        printf("Numero incorrecto, intente de nuevo\n");
    }
    printf("Felicitaciones %s a ganado!\n", player1);
    tries_53(intentos, 10, player2);
}

void addName_53(char player1[], char player2[]) {
    printf("Ingrese el nombre del primer jugador\n");
    scanf("%s", player1);
    printf("Ingrese el nombre del segundo jugador\n");
    scanf("%s", player2);
}

void tries_53(int intentos[], int nIntentos, char player2[]) {
    printf("%s, usted a intentado %d veces\nsus numeros fueron:\n", player2, nIntentos);
    for (int i = 0; i < nIntentos; ++i) {
        printf("%d\n", intentos[i]);
    }
}

void increaseByOne(int* var) {
    ++*var;
}

