#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, numeropontoturistico1, populacao2, numeropontoturistico2;
    float area1, pib1, area2, pib2;
    char codigocarta1[3], nomecidade1[20], estado1, codigocarta2[3], nomecidade2[20], estado2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Iniciando cadastro da primeira carta\nInsira o codigo da carta:\n");
    scanf("%s", &codigocarta1);       
    printf("Insira a letra do ESTADO da primeira carta:\n");
    scanf("%s", &estado1);
    printf("Insira o nome da cidade:\n");
    scanf("%s", &nomecidade1);
    printf("Insira a população:\n");
    scanf("%d", &populacao1);
    printf("Insira a área em km²:\n");
    scanf("%f", &area1);
    printf("Insira o valor do PIB:\n");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turisticos:\n");
    scanf("%d", &numeropontoturistico1);
    printf("\nIniciando cadastro da segunda carta\nInsira o código da carta:\n");
    scanf("%s", &codigocarta2);       
    printf("Insira a letra do ESTADO da primeira carta:\n");
    scanf("%s", &estado2);
    printf("Insira o nome da cidade:\n");
    scanf("%s", &nomecidade2);
    printf("Insira a população:\n");
    scanf("%d", &populacao2);
    printf("Insira a área em km²:\n");
    scanf("%f", &area2);
    printf("Insira o valor do PIB:\n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turisticos:\n");
    scanf("%d", &numeropontoturistico2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCartas cadastradas\nCarta 1\n");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %s", codigocarta1);
    printf("\nNome da Cidade: %s", nomecidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de pontos turisticos: %d", numeropontoturistico1);
    printf("\n\nCarta 2\n");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", codigocarta2);
    printf("\nNome da Cidade: %s", nomecidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de pontos turisticos: %d\n", numeropontoturistico2);
    return 0;
}
