/*Escreva um programa que, dados dois números
inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a, b, c, d;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    if(a > b){
        c = a - b;
        printf("O maior número é: %d\nA diferença entre eles é: %d", a, c);
    }else{
        d = b - a;
        printf("O maior número é: %d\nA diferença entre eles é: %d", b, d);
    }
    return 0;
}