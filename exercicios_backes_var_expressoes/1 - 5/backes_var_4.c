#include <stdio.h>
#include <stdlib.h>

int main(){
    float n;
    float result = 0;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    result = pow(n, 2);
    printf("Resultado ao quadrado: %.2f", result);

    return 0;

}
