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
// Professor, acho que nao tive certeza se entendi como finalizar o programa, e de primeira, eu pensei que eu teria que colocar
    // a leitura das duas cartas em um programa só, entendi errado, pesquisei algumas coisas como separar o nome da cidade
    // ou como deixar dois nomes nas variaveis. Achei como modificar isso mas depois me arrependi de ter ido procurar e fiz o 
    // programa todo do zero novamente da forma mais simples que aprendi. Testei no Visual e deu tudo certo. 
