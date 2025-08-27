#include <stdio.h>

int main() {
    char estado[50], estado2[50];    
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    double divisao;

    // Carta 1
    printf("Digite o nome do estado: \n");
    scanf(" %49[^\n]", estado); // aceita espaços

    printf("Digite o codigo da carta: \n");
    scanf(" %49[^\n]", codigo); // aceita espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao);

    printf("Adicione o tamanho da area: \n");
    scanf("%lf", &area);

    printf("Adicione o PIB: \n");
    scanf("%lf", &pib);

    printf("Adicione a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // Mostrando resultados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    divisao = populacao / area;
    printf("Densidade populacional: %.2f\n", divisao);

    divisao = pib / populacao;
    printf("PIB per capita: %f\n", divisao);

    // Carta 2
    printf("\nDigite o nome do estado 2: \n");
    scanf(" %49[^\n]", estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf(" %49[^\n]", codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Digite o numero da populacao 2: \n");
    scanf("%d", &populacao2);

    printf("Adicione o tamanho da area 2: \n");
    scanf("%lf", &area2);

    printf("Adicione o PIB 2: \n");
    scanf("%lf", &pib2);

    printf("Adicione a quantidade de pontos turisticos 2: \n");
    scanf("%d", &pontos_turisticos2);

    // Mostrando resultados
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    divisao = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", divisao);

    divisao = pib2 / populacao2;
    printf("PIB per capita: %f\n", divisao);

    return 0;
}

