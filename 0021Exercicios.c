/* Leia um número fornecido pelo usuário.
Se esse número for positivo, calcule a raiz quadrada
do numero. Se o número for negativo, mostre uma
mensagem dizendo que o número é inválido. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b;
    printf("Digite um número: ");
    scanf("%lf", &a);
    b = sqrt(a);
    if(a >= 0){
        printf("Resultado: %.3f", b);
    }else{
        printf("Número inválido. \nNão existe raiz quadrada de números negativos.");
    }
    return 0;
}