#include <stdio.h>

int cuadrado(int);
void variante_void_cuadrado(int,int*);
void detalles_variable(int);
void invertir(int*,int*);
void ordenar(int*,int*);
void leerPares();


int main() {

    /*Prueba del apartado a)*/
    printf("Resultado a): %d\n",cuadrado(5));

    /*Prueba del apartado b)*/
    int res;
    variante_void_cuadrado(5,&res);
    printf("\nResultado b): %d\n",res);

    /*Prueba del apartado c)*/
    printf("\nDirección real: %p\n",&res);
    detalles_variable(res);
    
    /*Prueba del apartado d)*/
    int a=1,b=2;
    invertir(&a,&b);
    printf("\nValor de a: %d\n",a);
    printf("Valor de b: %d\n",b);

    /*Prueba del apartado e)*/
    // a=1,b=2; //Probar cuando están ordenados
    ordenar(&a,&b);
    printf("\nValor de a: %d\n",a);
    printf("Valor de b: %d\n",b);

    /*Prueba del apartado f)*/
    leerPares();
}

int cuadrado(int numero){
    return (numero * numero);
}

void variante_void_cuadrado(int numero,int * retorno ){
    *retorno=numero*numero;
}

void detalles_variable(int variable){
    printf("Dirección en función: %p\n",&variable);
    printf("Contenido: %d\n",variable);
}

void invertir(int* a,int *b){
    int aux=*b;
    *b=*a;
    *a=aux;
}

void ordenar(int* a ,int* b){
    if (*a>*b)
        invertir(a,b);    
}

void leerPares(){

    int cant;
    printf("\nCuantos pares ingresará?: ");
    scanf("%d",&cant);
    printf("Okey, a continuación ingrese los valores separados por un espacio.\n");
    for (int i = 0; i < cant; i++)
    {
        int p1,p2;
        printf("Par nº %d: ",(i+1));
        scanf("%d %d",&p1,&p2);
        ordenar(&p1,&p2);
        printf("\t\t----->\tordenado: %d, %d\n",p1,p2);
    }
    printf("Fin\n");
}