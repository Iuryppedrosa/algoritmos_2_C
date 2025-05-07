#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorGasolina;
    float pagamento;
    float litros;

    printf("Qual o valor do litro da gasolina? \n");
    scanf("%f", &valorGasolina);


    printf("Valor de pagamento: \n");
    scanf("%f", &pagamento);

    litros = 0;
    litros = pagamento / valorGasolina;
    printf("Vc abastecerá apenas: %.2f \n", litros);


    return 0;
}
