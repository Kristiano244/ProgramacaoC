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
    int pontos_turisticos1, pontos_turisticos2;
    unsigned long int populacao1, populacao2; //Populacao agora e armazenada em unsigned long int, para armazenar valores maiores.
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
    scanf(" %[^\n]", cidade1);//Ao revisar o codigo, vi que havia colocaco o "&" antes da cidade1, agora o erro foi corrigido.
    printf("Insira o numero de habitantes da cidade: ");
    scanf("%lu", &populacao1);
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
    scanf(" %[^\n]", cidade2);//Ao revisar o codigo, vi que havia colocaco o "&" antes da cidade2, agora o erro foi corrigido.
    printf("Insira o numero de habitantes da cidade: ");
    scanf("%lu", &populacao2);
    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos2);

    /*Agora para o segundo nivel, irei fazer o calculo da densidade populacional (Dividir o numero
    da população da cidade pela sua área) e do PIB per capita (Dividir o PIB da cidade pela sua população).*/
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;
    /*Tive que fazer uma conversao explicita da Populacao de int para float.*/

    pib_per_capita1 = (pib1 * 1000000000) / (float) populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / (float) populacao2;
    /*O PIB e calculado em bilhoes de reais, e o PIB per capita em reais, por isso tive que multiplicar
    por "1000000000", para dar o valor em Reais. E tambem tive que fazer uma conversao explicita
    da Populacao de int para float.*/

    //Adicionando o SUPER PODER de cada carta, que nada mais e que a soma de todos os atributos numericos.
    //Nao esquecendo de fazer as alteracoes das variaveis para o mesmo tipo.
    float super_poder_1, super_poder_2;
    super_poder_1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    super_poder_2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);
    
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
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); //Adicionei a Densidade Populacional da carta 1.
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); //Adicionei o PIB per Capita da carta 1.
    printf("Super Poder: %.2f\n", super_poder_1); //Adicionei o Super Poder, pra o usuario ver se a comparacao ocorreu de forma correta.

    printf("\n"); //Somente para separarar os dados da primeira carta com os dados da segunda carta, de uma forma que nao fique muito junto.
    printf("**********************\n");
    printf("      CARTA 2\n");
    printf("**********************\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); //Adicionei a Densidade Populacional da carta 2.
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); //Adicionei o PIB per Capita da carta 2.
    printf("Super Poder: %.2f\n", super_poder_2); //Adicionei o Super Poder, pra o usuario ver se a comparacao ocorreu de forma correta.

    /*Agora vamos fazer o comparativo das duas cartas, e mostrar qual a carta é a vencedora em cada
    aspecto. Tambem coloquei uma legenda para que o usuario saiba qual carta venceu em determinado
    aspecto.*/
    printf("\n\n"); //Para separar os dados das cartas com seu comparativo.
    printf("************************************\n");
    printf("      COMPARACAO DAS CARTAS\n");
    printf("************************************\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 2 venceu (%d)\n", pontos_turisticos2 > pontos_turisticos1);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional2 < densidade_populacional1);
    printf("PIB per Capita: Carta 2 venceu (%d)\n", pib_per_capita2 > pib_per_capita1);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_1 > super_poder_2);
    printf("\n"); //Somente para separar a legenda da comparacao, e ficar mais legivel para o usuario.
    printf("Legenda: 1 para Verdadeiro e 0 para Falso.");

    return 0;
}