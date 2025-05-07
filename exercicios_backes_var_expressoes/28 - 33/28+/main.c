#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero = 0;
    for(int i = 0; i <= 2; i++){
        float valor = 0;
        float quadrado = 0;
        printf("Digite o valor de um numero:\n");
        scanf("%f", &valor);

        quadrado = pow(valor, 2);
        numero += quadrado;
    }

    printf("O valor da soma dos quadrados dos 3 numero é: %.2f", numero);


    float resultado = 0;
    float soma = 0;
    int contador = 0;

    for(int i = 1; i <= 4; i++){
        float nota = 0;
        printf("Digite o valor de uma nota:\n");
        scanf("%f", &nota);
        soma += nota;
        contador += 1;
    }
    resultado = soma / contador;

    printf("A media das notas digitidas é %.2f", resultado);



    float cotacao = 6.09;
    float vdol = 0;
    float real;
    printf("Digite um valor em reais: ");
    scanf("%f", &real);

    vdol = real / cotacao;
    printf("Em dolar: %.2f", vdol);



    int sucessor = 0;
    int antecessor = 0;
    int vint;
    printf("Valor inteiro:");
    scanf("%d", &vint);

    sucessor = vint + 1;
    antecessor = vint - 1;

    printf("Antecessor %d\nSucessor %d\n", antecessor, sucessor);


    int sucessor_tripulo = 0;
    int antecessor_dobro = 0;
    int vint;
    int soma;
    printf("Valor inteiro:");
    scanf("%d", &vint);

    sucessor_tripulo = (vint * 3) + 1;
    antecessor_dobro = (vint * 2) - 1;

    soma = sucessor_tripulo + antecessor_dobro;

    printf("Sucessor triplo = %d\Antecessor dobro = %d\n SOMA = %d", sucessor_tripulo, antecessor_dobro, soma);

    float lado;
    float area = 0;
    printf("Digite o valor de UM lado de uma quadrado:\n");
    scanf("%f", &lado);

    area = pow(lado, 2);
    printf("A area é: %.2f", area);


    return 0;
}
