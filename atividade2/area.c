#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float base_maior;
    float base_menor;
    float altura; 
    float base;
    float lado;
    float area;
    float diagonal_maior;
    float diagonal_menor;
    float raio;
    char opcao;

    printf("area.c\n");
    printf("Escolha uma opcao\n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch (opcao){

        case 'c':
        printf("Circulo\n");
        printf("Digite o valor do raio: ");
        scanf("%f", &raio);
        area = (raio * raio) * M_PI;
        printf("area eh: %.2f", area);
        break;

        case 'l':
        printf("Losango\n");
        printf("Digite o valor da diagonal maior: ");
        scanf("%f", &diagonal_maior);
        printf("Digite o valor da diagonal menor: ");
        scanf("%f", &diagonal_menor); 
        area = (diagonal_maior * diagonal_menor) / 2;
        printf("area eh: %.2f", area);
        break;
    
        case 'q':
        printf("Quadrado\n");
        rintf("Digite o valor do lado do quadrado: ");
        scanf("%f", &lado);
        area = lado * lado;
        printf("a area eh: %.2f", area);
        break; 

        case 'r':
        printf("Retangulo\n");
        printf("Digite o valor da base do retangulo: ");
        scanf("%f", &base);
        printf("digite o valor da altura do retangulo: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("area eh: %.2f", area);
        break;

        case 't':
        printf("Triangulo\n");
        printf("Digite o valor da base do triangulo: ");
        scanf("%f", &base);
        printf("Digite o valor da altura do triangulo: ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("area eh: %.2f", area);
        break;

        case 'z':
        printf("Trapezio\n");
        printf("Digite o valor da base maior: ");
        scanf("%f", &base_maior);
        printf("Digite o valor da base menor: ");
        scanf("%f", &base_menor);
        printf("Digite o valor da altura: ");
        scanf("%f", &altura);
        area = ((base_maior + base_menor) * altura) / 2;
        printf("area eh: %.2f", area);
        break;
    default:
        printf("Opcao invalida");
        A = 0;

    
}

    return 0;

}