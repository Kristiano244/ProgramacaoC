/*Faça um programa que receba um número inteiro
e verifique se este número é par ou ímpar.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("Número Par");
    }else{
        printf("Número ìmpar");
    }
    return 0;
}