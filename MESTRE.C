#include <stdio.h>

int main() {
    char estado[50], estado2[50];    
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    double divisao;
    double divisao2;
    int soma1;
    int soma2;


    // Carta 1
    printf("Digite o nome do estado: \n");
    scanf(" %49[^\n]", estado); // aceita espaços

    printf("Digite o codigo da carta: \n");
    scanf(" %49[^\n]", codigo); // aceita espaços

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade);

    printf("Digite o numero da populacao: \n");
    scanf("%lu", &populacao);

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
    printf("Populacao: %lu\n", populacao);
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
    scanf("%lu", &populacao2);

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
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    divisao2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", divisao2);

    divisao2 = pib2 / populacao2;
    printf("PIB per capita: %f\n", divisao2);

    soma1 = populacao + area + pib + divisao;
    soma2 = populacao2 + area2 + pib2 + divisao2;

    printf("O super poder da carta 1 é: %d\n", soma1);
    printf("O super poder da carta 2 é: %d\n", soma2);

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6;
    resultado1 = populacao > populacao2;
    resultado2 = area > area2;
    resultado3 = pib > pib2;
    resultado4 = pontos_turisticos > pontos_turisticos2;
    resultado5 = divisao > divisao2;
    resultado6 = soma1 > soma2;

    printf("Densidade populacional, carta 1 venceu: %d\n", resultado1);
    printf("Maior area, carta 1 venceu: %d\n", resultado2);
    printf("Maior pib, carta 1 venceu: %d\n", resultado3);
    printf("Maior quantidade de pontos turisticos, cartao 1 venceu: %d\n", resultado4);
    printf("Maior pib per capita, carta 1 venceu: %d\n", resultado5);
    printf("Super poder, carta 1 vence: %d\n", resultado6);
    

    return 0;
}
