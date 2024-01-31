#include <stdio.h>

int main(void) {
    int numeroObjetivo;
    void encontrarConsecutivos(int objetivo);

    printf("Ingrese el numero objetivo: ");
    scanf("%i", &numeroObjetivo);

    encontrarConsecutivos(numeroObjetivo);
}


void encontrarConsecutivos(int objetivo) {
    int i = 1;

    while (true) {

        int sumaConsecutivos = i + (i + 1);


        if (sumaConsecutivos == objetivo) {

            printf("Los numeros consecutivos cuya suma es %d son: %d y %d  entonces si es numero curioso", objetivo, i, i + 1);
            return;
        }


        if (sumaConsecutivos > objetivo) {
            printf("No hay numeros consecutivos cuya suma sea igual a %d  entonces no es numero curioso", objetivo);
            return;
        }
        i++;
    }
}
