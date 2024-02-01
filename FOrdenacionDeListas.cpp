#include <stdio.h>

int main(void) {
    int num[10];
    char opcion;
    int ordenarAscendente(int num[], int n);
    int ordenarDescendente(int num[], int n);

    for (int i = 0; i < 10; ++i) {
        printf("Introduce el numero %i: ", i + 1);
        scanf("%i", &num[i]);
    }

    printf("Quieres ordenar los numeros de manera ascendente (a) o descendente (b)? ");
    scanf(" %c",&opcion);

    switch(opcion){
    case 'a':
        ordenarAscendente(num,10);
        break;
    case 'b':
        ordenarDescendente(num,10);
        break;
    default:
        printf("Opcion no valida.\n");
        return 1;
    }

    printf("La lista de numero es: ");
    for (int i = 0; i < 10; ++i) {
        printf("%i ", num[i]);
    }
    printf("\n");

    return 0;
}

int ordenarAscendente(int num[], int n){

    for(int i=0;i<n -1;i++){
        for(int j=0;j<n -i -1; j++){
            if(num[j]> num[j +1]){
                int variableTemporal = num[j];
                num[j] = num[j+1];
                num[j+1]=variableTemporal;
            }
        }
    }
}

int ordenarDescendente(int num[], int n){
    for(int i=0;i<n -1; i++){
        for(int j=0;j<n -i -1;j++){
            if(num[j]<num[j+1]){
                int variableTemporal = num[j];
                num[j] = num[j+1];
                num[j+1] = variableTemporal;
            }
        }
    }
}

