#include <stdio.h>

int main(void){
    int n, res;
    int factorialR(int x);
    printf("Dime un numero: ");
    scanf("%i",&n);
    res = factorialR (n);
    printf("Factorial de %i es %i\n",
           n,res);
}

int factorialR(int x){
    int f;
    if (x==1){ ///Éste es el final
        f=1;
    }else{
        f = x * factorialR (x-1);
    }
    printf ("He devuelto: %i\n",f);
    return(f);

}
