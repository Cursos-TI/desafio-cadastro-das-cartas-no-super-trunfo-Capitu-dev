#include <stdio.h>
#include <string.h>

void ler_carta();  // declara função
void ler_carta2();

int main() { //professor, tive que pesquisar isso pq nao tava conseguindo colocar as duas cartao em um programa só. 
    printf("==== CARTA 1 ====\n");
    ler_carta();

    printf("\n==== CARTA 2 ====\n");
    ler_carta2();

    return 0;
}

void ler_carta() {
    char estado;
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    int populacao;
    float area_em_KM;
    float PIB;
    int pontos_turisticos;

    printf("Digite seu estado: \n");
    scanf(" %c", &estado);  

    printf("Codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    getchar();  // tive que pesquisar isso tbm pra entender pq eu nao tava conseguindo colocar nome composto das cidades

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = 0;  

    printf("Digite quantidade de populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area em KM: \n");
    scanf("%f", &area_em_KM);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIB);

    printf("Digite pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
}

void ler_carta2() { //pesquisei sobre void tbm pra poder separar as 2 cartas
    char estado;
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    int populacao;
    float area_em_KM;
    float PIB;
    int pontos_turisticos;

    printf("Digite seu estado: \n");
    scanf(" %c", &estado);  

    printf("Codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    getchar();  

    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = 0;  

    printf("Digite quantidade de populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area em KM: \n");
    scanf("%f", &area_em_KM);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIB);

    printf("Digite pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    return 0; 
}