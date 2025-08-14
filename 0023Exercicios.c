/*Faça um programa que leia um número e, caso ele
seja positivo, calcule e mostre:
* O número digitado ao quadrado
* A raiz quadrada do número digitado*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a;
    printf("Digite um número: ");
    scanf("%lf", &a);
    if(a >= 0){
        double b = a * a;
        double c = sqrt(a);
        printf("O quadrado de %.2f é: %.2f\n", a, b);
        printf("A raiz quadrada de %.2f é: %.2f", a, c);
    }else{
        printf("Número Inválido.\nNúmero Negativo.");
    }
    return 0;
}