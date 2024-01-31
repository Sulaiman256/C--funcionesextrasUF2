#include <stdio.h>

int main(void){

    double n,result=1.0;
    int decimal;

    printf("Introduce your number: ");
    scanf("%lf",&n);

    printf("Enter the member of decimals for the square root: ");
    scanf("%i",&decimal);

    if(n<0 || decimal<0){
        printf("Please enter a non-negative number and valid number of decimal places.\n");
    }else{
        double factor = 1.0;

        for(int i=0;i<decimal;i++){
            factor /=10;
        }

        for(int i =0;i<20;i++){
            result = 0.5 *(result + n / result);
        }

        result*=(1.0 + factor);

        printf("The square root of %2.lf with %i decimals is: %.*lf\n",n,decimal,decimal,result);

    }
}
