#include <stdio.h>

int main(int argc, char* argv[]){
    float altura;
    float peso;
    float imc;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);
    printf("Seu imc eh: %.2f", imc);
    return 0;
}
