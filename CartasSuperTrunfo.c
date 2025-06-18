#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo

int main() {
    // Definição de variáveis
    int populacao1,populacao2; 
    int numeropontoturistico1, numeropontoturistico2, escolha1, escolha2;
    float area1, pib1, area2, pib2, densidade1, pibpercapta1, densidade2, pibpercapta2, superpoder1, superpoder2, p_valor1, p_valor2, s_valor1, s_valor2, comparacao1, comparacao2;
    char codigocarta1[3], nomecidade1[20], estado1[20], codigocarta2[3], nomecidade2[20], estado2[20], descricao1[30], descricao2[30];
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
    scanf("%d", &escolha1);
    if (escolha1 >=1 && escolha1 <=5){
        switch (escolha1)
        {
        case 1:
            printf("Selecione mais um dos valores para comparação:\nPressione 1 para comparar área\n2 para comparar PIB\n3 para comparar Número de Pontos Turisticos\n4 para comparar Densidade Demográfica\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                escolha2 = 2;
                s_valor1 = area1;
                s_valor2 = area2;
            } else if (escolha2 == 2){
                escolha2 = 3;
                s_valor1 = pib1;
                s_valor2 = pib2;
            } else if (escolha2 == 3){
                escolha2 = 4;
                s_valor1 = numeropontoturistico1;
                s_valor2 = numeropontoturistico2;
            } else if (escolha2 == 4){
                escolha2 = 5;
                s_valor1 = densidade1;
                s_valor2 = densidade2;
            } else {
                printf("Não foi escolhida opção válida!");
            }
            p_valor1 = populacao1;
            p_valor2 = populacao2;
            break;
        case 2:
            printf("Selecione mais um dos valores para comparação:\nPressione 1 para comparar População\n2 para comparar PIB\n3 para comparar Número de Pontos Turisticos\n4 para comparar Densidade Demográfica\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                escolha2 = 1;
                s_valor1 = populacao1;
                s_valor2 = populacao2;
            } else if (escolha2 == 2){
                escolha2 = 3;
                s_valor1 = pib1;
                s_valor2 = pib2;
            } else if (escolha2 == 3){
                escolha2 = 4;
                s_valor1 = numeropontoturistico1;
                s_valor2 = numeropontoturistico2;
            } else if (escolha2 == 4){
                escolha2 = 5;
                s_valor1 = densidade1;
                s_valor2 = densidade2;
            } else {
                printf("Não foi escolhida opção válida!");
            }
            p_valor1 = area1;
            p_valor2 = area2;
            break;
        case 3:
            printf("Selecione um dos valores para comparação:\nPressione 1 para comparar População\n2 para comparar área\n3 para comparar Número de Pontos Turisticos\n4 para comparar Densidade Demográfica\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                escolha2 = 1;
                s_valor1 = populacao1;
                s_valor2 = populacao2;
            } else if (escolha2 == 2){
                escolha2 = 2;
                s_valor1 = area1;
                s_valor2 = area2;
            } else if (escolha2 == 3){
                escolha2 = 4;
                s_valor1 = numeropontoturistico1;
                s_valor2 = numeropontoturistico2;
            } else if (escolha2 == 4){
                escolha2 = 5;
                s_valor1 = densidade1;
                s_valor2 = densidade2;
            } else {
                printf("Não foi escolhida opção válida!");
            }
            p_valor1 = pib1;
            p_valor2 = pib2;
            break;
        case 4:
            printf("Selecione um dos valores para comparação:\nPressione 1 para comparar População\n2 para comparar área\n3 para comparar PIB\n4 para comparar Densidade Demográfica\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                escolha2 = 1;
                s_valor1 = populacao1;
                s_valor2 = populacao2;
            } else if (escolha2 == 2){
                escolha2 = 2;
                s_valor1 = area1;
                s_valor2 = area2;
            } else if (escolha2 == 3){
                escolha2 = 3;
                s_valor1 = pib1;
                s_valor2 = pib2;
            } else if (escolha2 == 4){
                escolha2 = 5;
                s_valor1 = densidade1;
                s_valor2 = densidade2;
            } else {
                printf("Não foi escolhida opção válida!");
            }
            p_valor1 = numeropontoturistico1;
            p_valor2 = numeropontoturistico2;
            break;
        case 5:
            printf("Selecione um dos valores para comparação:\nPressione 1 para comparar População\n2 para comparar área\n3 para comparar PIB\n4 para comparar Número de Pontos Turisticos\n");
            scanf("%d", &escolha2);
            if (escolha2 == 1){
                escolha2 = 1;
                s_valor1 = populacao1;
                s_valor2 = populacao2;
            } else if (escolha2 == 2){
                escolha2 = 2;
                s_valor1 = area1;
                s_valor2 = area2;
            } else if (escolha2 == 3){
                escolha2 = 3;
                s_valor1 = pib1;
                s_valor2 = pib2;
            } else if (escolha2 == 4){
                escolha2 = 4;
                s_valor1 = numeropontoturistico1;
                s_valor2 = numeropontoturistico2;
            } else {
                printf("Não foi escolhida opção válida!");
            }
            p_valor1 = densidade1;
            p_valor2 = densidade2;
            break;
        default:
            printf("Não foi escolhida opção válida!\n");
            break;
        }
        
    } else {
        printf("Não foi escolhida opção válida!");

    }
    //Comparação de valores das cartas
    if ((escolha1>=1 && escolha1 <=5) && (escolha2>=1 && escolha2 <=5)){
        switch (escolha1)        {
        case 1:
            strcpy(descricao1, "População");
            break;
        case 2:
            strcpy(descricao1, "Área");
            break;
        case 3:
            strcpy(descricao1, "PIB");
            break;
        case 4:
            strcpy(descricao1, "NumeroDePontosTuristicos");
            break;
        case 5:
            strcpy(descricao1, "DensidadeDemografica");
            break;
        
        default:
            break;
        }
        switch (escolha2)        {
        case 1:
            strcpy(descricao2, "População");
            break;
        case 2:
            strcpy(descricao2, "Área");
            break;
        case 3:
            strcpy(descricao2, "PIB");
            break;
        case 4:
            strcpy(descricao2, "NumeroDePontosTuristicos");
            break;
        case 5:
            strcpy(descricao2, "DensidadeDemografica");
            break;
        
        default:
            break;
        }
    } else{
        printf("Não foram realizadas comparações porque os valores selecionados foram incorretos!");
    }
    comparacao1 = p_valor1 + s_valor1;
    comparacao2 = p_valor2 + s_valor2;

    if (comparacao1 > comparacao2){
        printf("\n\nVocê selecionou as opções %s e %s\n", descricao1, descricao2);
        printf("A carta %s possui %f valor para %s e %f valor para %s\n", codigocarta1, p_valor1, descricao1, s_valor1, descricao2);
        printf("A carta %s possui %f valor para %s e %f valor para %s\n", codigocarta2, p_valor2, descricao1, s_valor2, descricao2);
        printf("A primeira carta venceu porque o valor das somas é maior!");
    } else if (comparacao1 == comparacao2){
        printf("\n\nVocê selecionou as opções %s e %s\n", descricao1, descricao2);
        printf("A carta %s possui %f valor para %s e %f valor para %s\n", codigocarta1, p_valor1, descricao1, s_valor1, descricao2);
        printf("A carta %s possui %f valor para %s e %f valor para %s\n", codigocarta2, p_valor2, descricao1, s_valor2, descricao2);
        printf("Empatou! A soma dos atributos deu empate");
    } else {
        printf("\n\nVocê selecionou as opções %s e %s\n", descricao1, descricao2);
        printf("A carta %s possui %f valor para %s e %f valor para %s\n", codigocarta1, p_valor1, descricao1, s_valor1, descricao2);
        printf("A carta %s possui %f valor para %s e %f valor para %s\n", codigocarta2, p_valor2, descricao1, s_valor2, descricao2);
        printf("A segunda carta venceu porque o valor das somas é maior!");

    }
    
    return 0;
}
