#include <stdio.h>
#define MAX_TXT 256
int main(int argc, char* argv[]){

    char texto[MAX_TXT];
    FILE *arq = fopen("sexta.txt", "r");

    if(arq == NULL){
        printf("erro ao abrir o arquivo");
        return 1;
    }
   
    fprintf(arq, argv[2]);

    fclose(arq);
    
    return 0;
}