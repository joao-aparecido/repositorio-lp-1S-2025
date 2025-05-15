#include<stdio.h>

int main( int argc, char* argv[]){

    int numero;
    int i, contador=0;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    for(i=1;i<=numero;i++)
    {
        if(numero%i == 0)
        {
            contador++;
        }

        if( contador > 2)
        {
            break;
        }

    }

    if(contador > 2)
    {
        printf("%d nao eh primo \n", numero);

    }
    else
    {
        printf("%d eh primo \n", numero);
    }

    return 0;
}