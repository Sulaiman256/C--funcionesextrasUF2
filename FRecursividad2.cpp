#include <stdio.h>


int main(void) {
    int num;
    void Sec(int n);
    printf("Introduce un numero para comenzar la secuencia: ");
    scanf("%i", &num);

    Sec(num);

    return 0;
}

void Sec(int n) {
    printf("%i ", n);

    if (n == 1) {
        printf("\nEl programa ha acabado\n");
        return;  // Finaliza la función
    }

    if (n % 2 != 0) {
        n = 3 * n + 1;
    } else {
        n = n / 2;
    }
    Sec(n);
}
