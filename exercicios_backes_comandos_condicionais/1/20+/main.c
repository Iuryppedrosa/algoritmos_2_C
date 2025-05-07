#include <stdio.h>
#include <stdlib.h>

int main()
{

    float A, B, C;
    printf("Digite o valor para A:");
    scanf("%f", &A);

    printf("Digite o valor para B:");
    scanf("%f", &B);

    printf("Digite o valor para C:");
    scanf("%f", &C);

    if(A + B > C && A + C > B && B + C > A){
        printf("é um triangulo: %.2f, %.2f, %.2f", A, B, C);
        if(A == B && B == C){
            printf("Triangulo EQUILATERO!");
        } else if(A == B || A == C || B == C){
            printf("Triangulo ISÓSCELES!");
        }
        else
            printf("Triangulo ESCALENO!");
    }else
        printf("Nao e um triangulo!");
    */

    float produto;
    char destino[3];

    printf("Qual o valor do produto: ");
    scanf("%f", &produto);

    printf("Qual estado: ");
    scanf("%s", destino);
    printf("Destino: %s \n", destino);

    /*
    switch(destino){
    case 'SP':
        produto = (produto * 0.07) + produto;
        break;
    case 'MG':
        produto = (produto * 0.12) + produto;
        break;
    case 'RJ':
        produto = (produto * 0.15) + produto;
        break;
    case 'MS':
        produto = (produto * 0.08) + produto;
        break;
    default:
        break;
    }
    */


    if(strcmp(destino, "SP") == 0)
    {
        produto = (produto * 0.07) + produto;
    } else if (strcmp(destino, "MG") == 0)
    {
        produto = (produto * 0.12) + produto;
    } else if (strcmp(destino, "RJ") == 0)
    {
        produto = (produto * 0.15) + produto;
    } else if (strcmp(destino, "MS") == 0)
    {
        produto = (produto * 0.08) + produto;
    }


    printf("Valor do produto c/ imposto deduzido: %.2f", produto);



    float num1, num2, num3, maior = 0, meio = 0, menor = 0;
    printf("Digite 3 numeros separados por espaco: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        maior = num1;
        if(num2 > num3){
            meio = num2;
            menor = num3;
        }
    }else if (num2 > num3)
    {
        if(num3 > num1){
            maior = num2;
            meio = num3;
            menor = num1;
        }
    }

    return 0;
}
