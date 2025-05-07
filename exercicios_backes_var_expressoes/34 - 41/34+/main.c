#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main()
{
    float raio;
    float area;
    printf("Digite o valor do raio de um circulo: \n");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);
    printf("A area é: %.3f", area);

    float catA;
    float catB;
    float hipotenusa;
    printf("Digite o valor para o CATETO A: ");
    scanf("%f", &catA);

    printf("Digite o valor para o CATETO B: ");
    scanf("%f", &catB);


    hipotenusa = sqrt(pow(catA, 2) + pow(catB, 2));

    printf("O valor da hipotenusa é: %.2f", hipotenusa);


    float altura;
    float raio;
    float volume;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = PI * (pow(raio, 2) * altura);
    printf("Volume: %.2f", volume);


    float produto;
    float desconto;
    float novoValor;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);


    // se desconto fosse base 10, basta dividir por 100
    desconto = produto * 0.12;
    novoValor = produto - desconto;

    printf("Valor de 12 porcento de desconto: %.2f\n", desconto);
    printf("Novo valor do produto: %.2f", novoValor);


    float salarioAtual;
    float aumento = 25;
    float novoSalario;
    printf("Salario do funcionario: ");
    scanf("%f", &salarioAtual);

    novoSalario = (salarioAtual * (aumento / 100)) + salarioAtual;

    printf("Salario com aumento de %.2f porcento é %.2f", aumento, novoSalario);



    float valor = 780000.00;
    float valorJogador1 = 0;
    float valorJogador2 = 0;
    float valorJogador3 = 0;

    valorJogador1 = valor * (46.0 / 100.0);
    valor -= valorJogador1;

    valorJogador2 = valor * 0.32;
    valor -= valorJogador2;

    valorJogador3 = valor;
    valor -= valorJogador3;



    printf("Valor jogador 1: %.2f \n", valorJogador1);
    printf("Valor jogador 2: %.2f \n", valorJogador2);
    printf("Valor jogador 3: %.2f \n", valorJogador3);
    printf("Resto: %.2f \n", valor);
    valor = valorJogador1 + valorJogador2 + valorJogador3;
    printf("Prova: %.2f", valor);


    int diasTrabalhados;
    float valorDiaDeTrabalho = 30;
    float pagamento = 0;
    float desconto;
    printf("Digite o numero de dias trabalhados pelo empregado: ");
    scanf("%d", &diasTrabalhados);

    pagamento = diasTrabalhados * valorDiaDeTrabalho;
    desconto = pagamento * (8.0 / 100.0);

    printf("Desconto: %.2f \n", desconto);
    pagamento -= desconto;

    printf("Sera pago apos deducao do imposto: %.2f \n", pagamento);



    int horasTrabalhadas;
    float valorHoraDeTrabalho = 0;
    float acrescimo;
    float total = 0;


    printf("Digite o valor das horas trabalhadas: ");
    scanf("%f", &valorHoraDeTrabalho);

    printf("Quantas horas foram trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    total = valorHoraDeTrabalho * horasTrabalhadas;
    acrescimo = total * (10.0 / 100.0);

    printf("Acrescimo: %.2f \n", acrescimo);
    total += acrescimo;

    printf("Sera pago apos acrescimo de 10 porcento: %.2f \n", total);




    return 0;

}
