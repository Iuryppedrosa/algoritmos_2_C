#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sal_base;
    float recebimento;
    float gratificacao;
    float pg_final;
    float imposto;

    printf("Qual o salario-base do funcionario?");
    scanf("%f", &sal_base);

    imposto = sal_base * (7.0 / 100.0);
    printf("O imposto sobre o salario-base do funcionario é: %.2f\n", imposto);
    sal_base -= imposto;

    printf("O sal-base agora, deduzido impostos é: %.2f\n", sal_base);

    gratificacao = sal_base * (5.0 / 100.0);
    sal_base += gratificacao;
    printf("A gratificacao do funcionário somada a seu salario é: %.2f\n", sal_base);


    float valor_lido;
    float total_10;
    float total_3x;
    float comissao;
    float comissao_2;


    printf("Digite um valor: ");
    scanf("%f", &valor_lido);


    total_10 = valor_lido * (10.0 / 100.0) + valor_lido;
    printf("Valor c/ 10 porcento: %.2f\n", total_10);

    total_3x = valor_lido / 3;
    printf("Valor da parcela se divido por 3x: %.2f\n", total_3x);

    comissao = total_10 * (5.0 / 100.0) + total_10;
    printf("Comissao do vendedor (venda a vista): %.2f\n", comissao);

    comissao_2 = valor_lido * (5.0 / 100.0) + valor_lido;
    printf("Comissao do vendedor (venda parcelada): %.2f\n", comissao_2);



    char letra_maiuscula;
    char letra_minuscula;
    printf("Digite uma letra MAIUSCULA: ");
    scanf("%c", &letra_maiuscula);


    letra_minuscula = letra_maiuscula + 32;
    printf("Letra MINUSCULA convertida: %c", letra_minuscula);


    int num;
    int unidade;
    int dezena;
    int centena;
    int invertido;

    printf("Digite um numero entre 100 a 999: ");
    scanf("%d", &num);

    unidade = num / 100;
    printf("Unidade: %d\n", unidade);

    dezena = (num / 10) % 10;
    printf("Dezena: %d\n", dezena);

    centena = num % 10;
    printf("Centenza: %d\n", centena);

    invertido = (centena * 100) + (dezena * 10) + unidade;
    printf("Invetido: %d", invertido);


    float premio = 1000;
    float apostador_1;
    float apostador_2;
    float apostador_3;

    float fracao_apostador_1;
    float fracao_apostador_2;
    float fracao_apostador_3;


    printf("Valor apostador 1: \n");
    scanf("%f", &apostador_1);

    printf("Valor apostador 2: \n");
    scanf("%f", &apostador_2);

    printf("Valor apostador 3: \n");
    scanf("%f", &apostador_3);

    fracao_apostador_1 = apostador_1 / premio * 100;
    fracao_apostador_2 = apostador_2 / premio * 100;
    fracao_apostador_3 = apostador_3 / premio * 100;

    printf("Fracao apostador 1: %.1f porcento\n", fracao_apostador_1);
    printf("Fracao apostador 2: %.1f porcento\n", fracao_apostador_2);
    printf("Fracao apostador 3: %.1f porcento\n", fracao_apostador_3);



    return 0;
}
