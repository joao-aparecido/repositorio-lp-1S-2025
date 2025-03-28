#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float n1, n2;
    float soma, subtracao, multiplicacao, divisao, potenciacao, radiciacao, quociente, incremento, decremento;
    int resto_divisao;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);

    printf("Digite o valor de n2: ");
    scanf("%f", &n2);

    // Adição
    soma = n1 + n2;
    printf("O resultado da soma eh: %.2f\n", soma);
    // Subtração 
    subtracao = n1 - n2;
    printf("O resultado da subtracao eh: %.2f\n", subtracao);
    // Multiplicação 
    multiplicacao = n1 * n2;
    printf("O resultado da multiplicacao eh: %.2f\n", multiplicacao);
    // Divisão 
    divisao = n1 / n2;
    printf("O resultado da divisao eh: %.2f\n", divisao);
    // Potenciação 
    potenciacao = pow(n1, n2);
    printf("%.2f^%.2f = %.2f\n", n1, n2, potenciacao);
    // Radiciação 
    radiciacao = sqrtf(n1);
    printf("O resultado do resto da radiciacao eh: %.2f\n", n1, radiciacao);
    // Resto da divisão 
    resto_divisao = (int) n1 % (int) n2;
    printf("O resultado do resto da divisao eh: %.2f\n", resto_divisao);
    // quociente de divisão
    quociente = n1 / (int) n2;
    printf("O resultado do quociente de divisao eh: %.2f\n", quociente);
    // Incremento 
    n1++;
    printf("O resultado do resto da incremento eh: %.2f\n", incremento);
    // Decremento
    n1--; 
    printf("O resultado do decremento eh: %.2f\n", decremento);

}