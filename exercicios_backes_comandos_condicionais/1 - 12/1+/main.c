#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num1, num2;
    printf("Digite 2 numeros separados por espaço: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("Maior: %d", num1);
    else
        printf("Maior: %d", num2);



    float num, quadrado;
    float raiz;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 0){
        raiz = sqrt(num);
        printf("Raiz: %.2f", raiz);
    }
    else if(num < 0){
        quadrado = pow(num, 2);
        printf("Numero negativo invalido\n");
        printf("Mas vou te dar ele ao quadrado: %.2f", quadrado);
    }

    int num, num_2, num_3, dif;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Par! \n");
    } else
        printf("Impar! \n");


    printf("Digite dois numeros separados por espaco: ");
    scanf("%d %d", &num_2, &num_3);

    if(num_2 > num_3)
    {
       printf("Maior: %d \n", num_2);
       dif = num_2 - num_3;
    }
    else{
        printf("Maior: %d \n", num_3);
        dif = num_3 - num_2;
    }
    printf("Diferenca entre eles e de: %d \n", dif);



    float sal, prestacao, limite;
    printf("Salario: ");
    scanf("%f", &sal);
    printf("Prestacao: ");
    scanf("%f", &prestacao);

    limite = sal * (20.0 / 100.0);

    if(limite <= prestacao){
        printf("Emprestimo nao concedido! %.2f", limite);
    }else
        printf("Emprestimo Concedido! %.2f", limite);



    float altura, ideal;
    char sexo;
    printf("Digite a altura da pessoa:");
    scanf("%f", &altura);

    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    if(sexo == 'm'){
        ideal = (72.7 * altura) - 58;
        printf( "Peso ideal: %.2f", ideal);
    }else {
        ideal = (62.1 * altura) - 44.7;
        printf( "Peso ideal: %.2f", ideal);
    }


    int num, unidade, dezena, centena, soma;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0) {
        unidade = num / 100;
        printf("%d \n", unidade);
        dezena = (num / 10) % 10;
        printf("%d \n", dezena);
        centena = num % 10;
        printf("%d \n", centena);

        soma = unidade + dezena + centena;
        printf("Soma: %d \n", soma);
    }
    else{
        printf("Invalido: %d \n", num);
    }


    return 0;
}
