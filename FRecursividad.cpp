#include <stdio.h>

int main (void){
    int indice,resultado;
    int recursividad(int n);

    printf("Introduce tu numero para la serie fibonacci: ");
    scanf("%i",&indice);

    if(indice<0){
        printf("Introduce un indice valido");
    }else{
    resultado = recursividad(indice);

    printf("El numero fibonnaci en el indice %i es: %i\n",indice,resultado);
    }
}


int recursividad(int n){
    if(n==0 || n==1){
        return 1;
    }else{

    return recursividad(n-1) + recursividad(n-2);
    }


}
