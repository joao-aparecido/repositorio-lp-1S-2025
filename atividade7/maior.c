#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char *argv[]) {
    if (argc != 3 && argc != 4) {
        printf("Uso: %s num1 num2 [num3]\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (argc == 3) {
        printf("%d\n", maior2(a, b));
    } else {
        int c = atoi(argv[3]);
        printf("%d\n", maior3(a, b, c));
    }

    return 0;
}