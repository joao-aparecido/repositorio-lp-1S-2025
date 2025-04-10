#include <stdio.h>

int main(int argc, char* argv[]){
    
int opcao;

do{
    printf("Escolha qual tipo de filme deseja: \n");
    printf("1 - Leve \n");
    printf("2 - Intenso \n");  

    scanf("%u", &opcao);

    if(opcao == 1){
        printf("Escolher genero: \n");
        printf("1 - Comedia \n");
        printf("2 - Animacao \n");
        scanf("%u", &opcao);
    

        if(opcao == 1){
        printf("Aconselho assisir ao filme As Branquelas \n");
        }

        if(opcao == 2){
        printf("Aconselho assistir ao filme Toy store \n");
        }
    }

    else if(opcao == 2){
        printf("Escolher genero: \n");
        printf("1 - Terror \n");
        printf("2 - Acao \n");
        scanf("%u", &opcao);

        if(opcao == 1){
            printf("Escolha entre: \n");
            printf("1 - Terror Psicologico \n");
            printf("2 - Terror Sobrenatural \n");
            scanf("%u", &opcao);
            }
            if(opcao == 1){
            printf("Aconselho assistir ao filme corra!");
            }

            if(opcao == 2){
            printf("Aconselho assistir ao filme Invocacao do mal");
            }
    }
        if(opcao == 2){
            printf("Escolha entre: \n");
            printf("1 - super-herois \n");
            printf("2 - aventura realista \n");
            scanf("%u", &opcao);
            
            if(opcao == 1){
            printf("Aconselho assistir ao filme vingadores ultimato");
            }

            if(opcao == 2){
            printf("Aconselho assistir ao filme Mad max ");
            }
        }
    printf("Deseja escolher outro filme?\n ");
    printf("0 - Sim\n");
    printf("1 - Nao\n");
    scanf("%d, &opcao");
} while (opcao == 0);   
    return 0;

}