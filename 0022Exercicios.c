/*Leia um numero real. Se o número for positivo
imprima a raiz quadrada. Do contrário, imprima o
número ao quadrado.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double a, b;
    printf("Digite um número: ");
    scanf("%lf", &a);
    if(a >= 0){
        b = sqrt(a);
        printf("Resultado: %.2f", b);
    }else{
        b = a * a;
        printf("Resultado: %.2f", b);
    }
    return 0;
}