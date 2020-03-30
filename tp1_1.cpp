#include <stdio.h>

int main() {

    int variable1 = 666;
    int * p_variable1 = &variable1;

    printf("Contenido del puntero: %d \n", *p_variable1);

    printf("Dirección almacenada en el puntero: %p \n", p_variable1);

    printf("Dirección de la variable: %p \n", &variable1);

    printf("Dirección de memoria del puntero: %p \n", &p_variable1);

    printf("Tamaño de la variable: %d Bytes\n",sizeof(variable1));

    getchar();

    return 0;

}

