#include <stdio.h>
 
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %lld\n", bigNumber);

    //sizeof: pra saber o tamanho da variavel
    //printf ("tamanho de int: % bytes\n", sizeof(int));
 
    //A saída mostra que tanto regularNumber quanto bigNumber podem armazenar o valor 2147483647. 
    //No entanto, quando bigNumber é atualizado para 2147483648, ele pode armazenar o valor corretamente, 
    //enquanto regularNumber não poderia armazenar esse valor por exceder o limite de um int.
    return 0;
}
