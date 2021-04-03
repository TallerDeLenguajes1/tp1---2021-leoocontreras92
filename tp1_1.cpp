#include<stdio.h>
#include<stdlib.h>

int main(){


    int variable1 = 15;
    int *pVariable1 = &variable1;

    printf("Contenido de la variable indicado por el puntero: %d\n", *pVariable1);
    printf("\n");
    printf("Contenido del puntero: %u\n",pVariable1);
    printf("\n");
    printf("Direccion de memoria de la variable: %u\n",&variable1);
    printf("\n");
    printf("Direccion de memoria del puntero: %u\n",&pVariable1);
    printf("\n");
    printf("Tamaño de memoria utilizado por la variable1: %d",sizeof(variable1));




    getchar();
    return 0;

}