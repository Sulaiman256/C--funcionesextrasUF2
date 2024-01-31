#include <stdio.h>
#include <math.h>

int main (){

    int numero;
    int contarDigitos(int numero);
    int esNarcisista(int numero);

    printf("Ingrese un numero: ");

    scanf("%i",&numero);

    printf("Numero nacisistas menores que %i:\n",numero);



    for (int i = 1; i < numero; i++) {
        if (esNarcisista(i)) {
            printf("%d\n", i);
        }
    }
}

int contarDigitos(int numero) {
    int cont = 0;
    while (numero != 0) {
        numero /= 10;
        cont++;
    }
    return cont;
}

int esNarcisista(int numero) {
    int numOriginal = numero;
    int numDigitos = contarDigitos(numero);
    int suma = 0;

    while (numero != 0) {
        int digito = numero % 10;
        suma += (int)pow(digito, numDigitos);
        numero /= 10;
    }

    return suma == numOriginal;
}
