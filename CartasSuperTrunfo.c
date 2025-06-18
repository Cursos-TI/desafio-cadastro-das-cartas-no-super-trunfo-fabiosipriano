#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo

int main() {
    // Definição de variáveis
    int populacao1,populacao2; 
    int numeropontoturistico1, numeropontoturistico2, testedevalor;
    float area1, pib1, area2, pib2, densidade1, pibpercapta1, densidade2, pibpercapta2, superpoder1, superpoder2;
    char codigocarta1[3], nomecidade1[20], estado1[20], codigocarta2[3], nomecidade2[20], estado2[20];
    // Cadastro das Cartas:
    printf("Iniciando cadastro da primeira carta\nInsira o codigo da carta:\n");
    scanf("%s", codigocarta1);       
    printf("Insira o ESTADO da carta:\n");
    scanf("%s", estado1);
    printf("Insira o nome da cidade:\n");
    scanf("%s", nomecidade1);
    printf("Insira a população:\n");
    scanf("%d", &populacao1);
    printf("Insira a área em km²:\n");
    scanf("%f", &area1);
    printf("Insira o valor do PIB:\n");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turisticos:\n");
    scanf("%d", &numeropontoturistico1);
    printf("\nIniciando cadastro da segunda carta\nInsira o código da carta:\n");
    scanf("%s", codigocarta2);       
    printf("Insira o ESTADO da carta:\n");
    scanf("%s", estado2);
    printf("Insira o nome da cidade:\n");
    scanf("%s", nomecidade2);
    printf("Insira a população:\n");
    scanf("%d", &populacao2);
    printf("Insira a área em km²:\n");
    scanf("%f", &area2);
    printf("Insira o valor do PIB:\n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turisticos:\n");
    scanf("%d", &numeropontoturistico2);
    // Calculando valores adicionais derivados de operações matemáticas
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapta1 = (float) pib1 / populacao1;
    pibpercapta2 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao1 + area1 + pib1 + numeropontoturistico1 + pibpercapta1 + (1/densidade1);
    superpoder2 = (float) populacao2 + area2 + pib2 + numeropontoturistico2 + pibpercapta2 + (1/densidade2);
    // Questionamento do valor de comparação:
    printf("Selecione um dos valores para comparação:\nPressione 1 para comparar População\n2 para comparar área\n3 para comparar PIB\n4 para comparar Número de Pontos Turisticos\n5 para comparar Densidade Demográfica\n");
    scanf("%d", &testedevalor);
    //Comparação de valores das cartas
    switch (testedevalor){
    case 1:
        printf("\nVocê selecionou População: \n");
        printf("Cidade: %s possui População: %d\nCidade: %s possui População: %d\n", nomecidade1, populacao1, nomecidade2, populacao2);
        if (populacao1 > populacao2){
            printf("Cidade %s venceu!", nomecidade1);
        }else{ 
            if (populacao1 == populacao2){
            printf("Os valores são iguais, resultando em um empate!");
            }else {
            printf("Cidade %s venceu!", nomecidade2);
            }
        }
        break;
    case 2:
        printf("\nVocê selecionou Área: \n");
        printf("Cidade: %s possui área: %f\nCidade: %s possui área: %f\n", nomecidade1, area1, nomecidade2, area2);
        if (area1 > area2){
            printf("Cidade %s venceu!", nomecidade1);
        }else{
            if (area1 == area2){
            printf("Os valores são iguais, resultando em um empate!");
            }else {
            printf("Cidade %s venceu!", nomecidade2);
            }
        }
        break;
    case 3:
        printf("\nVocê selecionou PIB: \n");
        printf("Cidade: %s possui PIB: %f\nCidade: %s possui PIB: %f\n", nomecidade1, pib1, nomecidade2, pib2);
        if (pib1 > pib2){
            printf("Cidade %s venceu!", nomecidade1);
        }else{
            if (pib1 == pib2){
            printf("Os valores são iguais, resultando em um empate!");
            }else {
            printf("Cidade %s venceu!", nomecidade2);
            }
        }
        break;
    case 4:
        printf("\nVocê selecionou Número de Pontos Turísticos: \n");
        printf("Cidade: %s possui %d pontos turísticos\nCidade: %s possui %d pontos turísticos\n", nomecidade1, numeropontoturistico1, nomecidade2, numeropontoturistico2);
        if (numeropontoturistico1 > numeropontoturistico2){
            printf("Cidade %s venceu!", nomecidade1);
        }else{
            if (numeropontoturistico1 == numeropontoturistico2){
            printf("Os valores são iguais, resultando em um empate!");
            }else {
            printf("Cidade %s venceu!", nomecidade2);
            }
        }

        break;
    case 5:
        printf("\nVocê selecionou Densidade Demográfica: \n");
        printf("Cidade: %s possui densidade demográfica: %f\nCidade: %s possui densidade demográfica: %f\n", nomecidade1, densidade1, nomecidade2, densidade2);
        if (densidade1 < densidade2){
            printf("Cidade %s venceu!", nomecidade1);
        }else{
            if (densidade1 == densidade2){
            printf("Os valores são iguais, resultando em um empate!");
            }else {
            printf("Cidade %s venceu!", nomecidade2);
            }
        }
        break;
    default:
        printf("Nenhum valor válido para comparação foi digitado!");
        break;
    }
    
    return 0;
}
