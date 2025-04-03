#include <stdio.h>
#include <math.h> 

int main(int argc, char* argv[]){
    float altura; 
    float base_maior;
    float base_menor;
    float area;

    printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);

     printf("Digite o valor da base menor: ");
    scanf("%f", &base_menor);

     printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;
    printf("area eh: %.2f", area);

}
