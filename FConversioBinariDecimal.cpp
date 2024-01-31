#include <stdio.h>

int main(void){
    int num,opcion,binario;
    void ConversionBinario(int num);
    int ConversionBinarioADecimal(int binario);

    for(;;){
        printf("Menu:\n");
        printf("1. Convertir de decimal a binario\n");
        printf("2. Convertir de binario a decimal\n");
        printf("0. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%i", &opcion);

        if(opcion == 0){
            printf("Saliendo del programa\n");
            break;
        }

        switch(opcion){

    case 1:
        printf("Introduce un numero natural entre 0 y 255: ");
        scanf("%i",&num);
        if(num<0 || num > 255){
            printf("Numero no valido ya no esta en el rango permitido\n");
        }else{
            printf("La representacion binario de %i es: ",num);
            ConversionBinario(num);
        }
        break;
    case 2:
        printf("Introduce un numero binario: ");
        scanf("%i",&binario);

        printf("El numero decimal correspondiente es: %i\n",ConversionBinarioADecimal(binario));
        break;
    default:
        printf("Opcion no valida\n");
        break;
        }
    }
    return 0;


}

void ConversionBinario(int num){
    int binario[20];
    int i;
    for(i=0;num>0;i++){
        binario[i] = num % 2;
        num = num /2;

    }

    for(int j = i - 1;j>=0;j--){
        printf("%i",binario[j]);
    }
    printf("\n");
}

int ConversionBinarioADecimal(int binario){
    int decimal = 0, base = 1,resultadoBinario;

    while(binario>0){
        resultadoBinario = binario % 10;
        decimal = decimal + resultadoBinario * base;
        binario = binario / 10;
        base = base * 2;
    }

    return decimal;

}
