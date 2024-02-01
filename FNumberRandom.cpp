#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand((unsigned int)time(NULL));

    int randomNumber = rand() %1000 + 1;

    int intento,intentoRealizados = 0;
    int limiteInferior =1, limiteSuperior = 1000;

    printf("Intenta adivinar el numero entre 1 y 1000.\n");

    for(;intentoRealizados<10;intentoRealizados++){
        printf("Introduce tu intento: ");
        scanf("%i", &intento);

        if(intento== randomNumber){
            printf("Felicidades has adivinado el numero %i en %i intentos.\n",randomNumber,intentoRealizados);
            break;
        }else if (intento< randomNumber){
            printf("El numero esta por encima. ");
            printf("Rango actual: [%i, %i]\n", intento + 1, limiteSuperior);
        }else{
            printf("El numero esta por debajo. ");
            printf("Rango actual: [%i, %i]\n", limiteInferior, intento - 1);
        }
    }
     if (intentoRealizados == 10) {
        printf("Lo siento, has agotado tus 10 intentos. El numero correcto era %i.\n", randomNumber);
    }
    return 0;
}
