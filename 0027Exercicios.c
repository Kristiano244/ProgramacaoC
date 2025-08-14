/*Faça um programa que leia 2 notas de um aluno, verifique se as notas são
válidas e exiba na tela a media destas notas. Uma nota válida deve ser,
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um
valor válido, este fato deve ser informado ao usuário e o programa termina.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, b, c;
    printf("Digite a nota do aluno 1: ");
    scanf("%f", &a);
    if(a < 0.0 || a > 10.0){
        printf("Nota do Aluno 1 Inválida.");
        return 1;
    }
    printf("Digite a nota do aluno 2: ");
    scanf("%f", &b);
    if(b < 0.0 || b > 10.0){
        printf("Nota do Aluno 2 Inválida.");
        return 1;
    }
    c = (a + b) / 2.0;
    printf("Média das notas dos alunos: %.2f", c);
    return 0;
}