#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

    int rowsA,colsA, rowsB,colsB;
    int matrizA[5][5],matrizB[5][5],resultado[5][5];
    int Matriz(int rows, int cols, int matriz[5][5], int opcionInicializacion);
    int sumarMatrices(int matrizA[5][5], int matrizB[5][5], int resultado[5][5], int rows,int cols);
    int RestarMatrices(int matrizA[5][5], int matrizB[5][5], int resultado[5][5], int rows, int cols);
    int multiplicarMatrices(int matrizA[5][5], int matrizB[5][5], int resultado[5][5], int rowsA, int colsA, int colsB);


    // Matriz A

    printf("Introduce el numero de filas de la matriz A (entre 1 y 5): ");
    scanf("%i", &rowsA);
    printf("Introduce el numero de columnas de la matriz A (entre 1 y 5): ");
    scanf("%i", &colsA);

    if(rowsA>= 1 && rowsA<=5 && colsA >=1 && colsA <=5){
        Matriz(rowsA,colsA, matrizA,1);
    }else{
        printf("Error: Numero de filas o columnas no valido para la matriz A.\n");
        return 1;
    }
     // Matriz B
    printf("Introduce el numero de filas de la matriz B (entre 1 y 5): ");
    scanf("%i", &rowsB);
    printf("Introduce el numero de columnas de la matriz B (entre 1 y 5): ");
    scanf("%i", &colsB);

    if (rowsB >= 1 && rowsB <= 5 && colsB >= 1 && colsB <= 5) {
        Matriz(rowsB, colsB, matrizB, 1);
    } else {
        printf("Error: Numero de filas o columnas no valido para la matriz B.\n");
        return 1;
    }

    int opcion;

        printf("Selecciona una operacion:\n");
        printf("1. Sumar las matrices\n");
        printf("2. Restar las matrices\n");
        printf("3. Multiplicar A por B\n");
        printf("4. Multiplicar B por A\n");
        scanf("%i", &opcion);

        switch(opcion){
        case 1:
            sumarMatrices(matrizA,matrizB,resultado,rowsA,colsA);
            break;

        case 2:
            RestarMatrices(matrizA,matrizB,resultado,rowsA,rowsB);
            break;
        case 3:
            if(colsA == rowsB){
                multiplicarMatrices(matrizA,matrizB,resultado,rowsA,colsA,colsB);
            }else{
                printf("Error: No se pueden multiplicar las matrices A y B con estas dimensiones.\n");
                return 1;
            }
            break;
        case 4:
            if(colsB == rowsA){
                multiplicarMatrices(matrizB,matrizA,resultado,rowsB,colsB,colsA);
            }else{
                 printf("Error: No se pueden multiplicar las matrices B y A con estas dimensiones.\n");
                return 1;
            }
            break;
        default:
            printf("Opcion no valida.\n");
            return 1;
    }
    printf("Resultado:\n");
    for(int i =0; i<rowsA;i++){
        for(int j =0;j<colsB;j++){
            printf("%i : ",resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int Matriz(int rows, int cols, int matriz[5][5], int opcionInicializacion){
    int i,j;

    if(opcionInicializacion == 1){
       printf("Introduce los valores para la matriz (%i filas x %i columnas):\n", rows, cols);

        for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                printf("Dame valor para la fila %i y la columna %i: ", i, j);
                scanf("%i", &matriz[i][j]);
            }
        }
    }else if (opcionInicializacion == 2){
        srand(time(NULL));

        for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                matriz[i][j] = rand() %19-9;
            }
        }
    }else{
        printf("Opcion de incializacion no valida.\n");
        return 1;
    }
    return 0;
}

int sumarMatrices(int matrizA[5][5], int matrizB[5][5], int resultado[5][5], int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int RestarMatrices(int matrizA[5][5], int matrizB[5][5], int resultado[5][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

int multiplicarMatrices(int matrizA[5][5], int matrizB[5][5], int resultado[5][5], int rowsA, int colsA, int colsB){
    for(int i =0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            resultado[i][j]=0;
            for(int k=0;k<colsA;k++){
                resultado[i][j] = resultado[i][j] + matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}
