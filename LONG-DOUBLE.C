#include <stdio.h>
 
int main() {
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
 
    //Nesse exemplo, a variável preciseNumber é declarada como double, enquanto veryPreciseNumber é 
    //declarada como long double. Ambos armazenam o valor de π (pi), mas veryPreciseNumber armazena 
    //com uma precisão maior.

    //Número preciso (double): 3.141592653589793
    // A saída mostra que preciseNumber armazena o valor de π com uma precisão de 15 casas decimais, 
    //enquanto veryPreciseNumber armazena com uma precisão de 21 casas decimais, ilustrando a maior precisão 
    //de long double.
    return 0;
}