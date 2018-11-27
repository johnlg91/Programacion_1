//
// Created by Juan Manuel Lopez-Gabeiras on 21/08/2018.
//

#include <stdio.h>

void sinBlank();

void charCount();

int main() {
    charCount();
    return 0;
}

void sinBlank() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            while ((c = getchar()) == ' ');
        }
        putchar(c);
    }
}

void charCount() {
    int c;
    int chars[127];

    for (int k = 0; k < 126; ++k) {
        chars[k] = 0;
    }

    while ((c = getchar()) != EOF) ++chars[c];

    for (int i = 0; i < 126; ++i) {
        if (chars[i] > 0) {
            printf("%c -> ", i);
            for (int j = 0; j < chars[i]; ++j) {
                putchar('=');
            }
            putchar('\n');
        }
    }

}