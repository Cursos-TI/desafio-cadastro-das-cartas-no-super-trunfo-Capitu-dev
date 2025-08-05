#include <stdio.h>
int main(){
    char Estado;
    char Codigo[10];
    char Cidade[50];
    int População;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Digite seu estado: \n");
    scanf("%s", &Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite a sua cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a populção: \n");
    scanf("%d", &População);

    printf("Digite a área: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite quantidade pontos turisticos: \n");
    scanf("%d", &PontosTuristicos);

    return 0;
    }
