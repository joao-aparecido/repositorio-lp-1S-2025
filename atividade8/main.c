#include <stdio.h>

#define MAX 225

//global
int y = 1;

void incrementaX(int x){
    //local
    int x = 1;
    while (*x < 5)   
    {
        y++;
        *x = 11
    }

}

int main(int argc, char* argv[]){

    int z = 1;

    incrementaX(&z);

    printf("y = %d\n", x);
    printf("z = %d", y);

    printf("*z = %d\n", *z);
    printf("w = %d", *w);
    
    return 0;
}