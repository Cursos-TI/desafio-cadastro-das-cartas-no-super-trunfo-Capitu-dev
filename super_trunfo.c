#include <stdio.h>
int main(){
    char Estado; // char: armazena caracteres, letras. OU strings, palavras.
    char Codigo[10];
    char Cidade[50];
    int População; // int: valor inteiro 
    float Area; // ponto flutuante, trabalhar com casas decimais, podemos adicionar virgulas.
    float PIB;
    int PontosTuristicos;

    printf("Digite seu estado: \n");
    scanf("%s", &Estado); // %s: para uma sequencia de letras/caracteres.

    printf("Digite o codigo da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite a sua cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a populção: \n");
    scanf("%d", &População); // %d para formato decimal 

    printf("Digite a área: \n");
    scanf("%f", &Area); // %f para numero com ponto

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite quantidade pontos turisticos: \n");
    scanf("%d", &PontosTuristicos);

    return 0;
    }
