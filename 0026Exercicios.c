/*Faça um programa que receba dois números e mostre o maior.
Se por acaso, os dois números forem iguais, imprima a mensagem
"Números iguais".*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    if(a > b){
        printf("Maior número: %.2f", a);
        }else if(a == b){
            printf("Números iguais.");
        }else{
        printf("Maior número: %.2f", b);
    }
    return 0;
}