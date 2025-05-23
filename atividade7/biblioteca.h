#include "biblioteca.h"

int maior2(int a, int b) {
    return (a > b) ? a : b;
}

int maior3(int a, int b, int c) {
    int maior = (a > b) ? a : b;
    return (maior > c) ? maior : c;
}

int menor2(int a, int b) {
    return (a < b) ? a : b;
}

int menor3(int a, int b, int c) {
    int menor = (a < b) ? a : b;
    return (menor < c) ? menor : c;
}