#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(int argc, char* argv[]){

    int x, y, z;

    if(argc != 3 && argc != 4){
        printf("informe 2 ou 3 argumentos.");
        return 1,
    }

    if (argc == 3){
    int x = atoi (argv[1]);
    int y = atoi (argv[2]);
    printf("maior(%d, %d): %d", x, y, maior_2n(x, y));
    //printf("maior (%d, %d): %d", x, y, maior_2n)
    }

    else{
        x = atroi(argv[1]);
        y = atroi(argv[2]);
        z = atroi(argv[3]);
        printf("%d", maior_3n(x, y, z));
    }
    return 0;
}