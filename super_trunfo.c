#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    /*Irei fazer uma pequena explicacao para o usuario,
    para que ele saiba usar o sistema.*/
    printf("Bem-vindo ao Super Trunfo em C Versao Cidades.\n");
    printf("Neste jogo, voce sera o criador das cartas. Para comecar, insira os dados de duas cidades \n");
    printf("conforme seja solicitado.\n");
    printf("Essas informacoes vao completar as cartas e permitir que você jogue comparando \n");
    printf("qual cidade vence em cada categoria.\n\n");
    printf("Prepare-se para descobrir qual delas sera a campea!\n");
    printf("\n"); //Coloquei somente para deixar a interface mais limpa para o usuario.
    
    // Agora irei definir as variaveis.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    /*Apos as variaveis estarem definidas, vou solicitar que o usuario
    de valores e nomes para a primeira carta.*/
    printf("**********************\n");
    printf("   DADOS - CARTA 1\n");
    printf("**********************\n");
    printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado1);
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigo1);
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", &cidade1);
    printf("Insira o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);
    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos1);

    //Uma breve mensagem mostrando ao usuario que o preenchimento da primeira carta foi concluido com sucesso.
    printf("\n"); //Para ficar mais separado, e mais limpa a tela para o usuario.
    printf("\n===============================================================\n");
    printf("            CARTA 1 REGISTRADA COM SUCESSO!\n");
    printf("         Agora vamos preencher os dados da CARTA 2.\n");
    printf("===============================================================\n\n");
    
    //Agora o usuario vai comecar a preencher os dados da segunda carta.
    printf("**********************\n");
    printf("   DADOS - CARTA 2\n");
    printf("**********************\n");
    printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", &cidade2);
    printf("Insira o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos2);

    /*Agora que os dados das duas cartas ja foram preenchidos,
    vou mostrar as cartas para o usuario.*/
    printf("\n");
    printf("Aqui estao os dados das cartas cadastradas.\n");
    printf("\n");
    printf("**********************\n");
    printf("      CARTA 1\n");
    printf("**********************\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n"); //Somente para separarar os dados da primeira carta com os dados da segunda carta, de uma forma que nao fique muito junto.
    printf("**********************\n");
    printf("      CARTA 2\n");
    printf("**********************\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
