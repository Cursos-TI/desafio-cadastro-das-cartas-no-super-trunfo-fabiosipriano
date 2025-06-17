#include <stdio.h>

// Desafio Super Trunfo

int main() {
    // Definição de variáveis
    unsigned long int populacao1,populacao2; 
    int numeropontoturistico1, numeropontoturistico2;
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
    // Exibição dos Dados das Cartas:
    printf("\nCartas cadastradas\nCarta 1\n");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo: %s", codigocarta1);
    printf("\nNome da Cidade: %s", nomecidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de pontos turisticos: %d", numeropontoturistico1);
    printf("\nDensidade Populacional: %.2f", densidade1);
    printf("\nPIB per capta: %.2f", pibpercapta1);
    printf("\n\nCarta 2\n");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", codigocarta2);
    printf("\nNome da Cidade: %s", nomecidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de pontos turisticos: %d", numeropontoturistico2);
    printf("\nDensidade Populacional: %.2f", densidade2);
    printf("\nPIB per capta: %.2f\n", pibpercapta2);
    printf("\nExibição do resultado das comparações:\n");
    printf("\nPopulação: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", numeropontoturistico1 > numeropontoturistico2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per capta: %d\n", pibpercapta1 > pibpercapta2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
