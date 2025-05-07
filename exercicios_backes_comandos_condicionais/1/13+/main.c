#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    float prova_1, prova_2, prova_3, pesos, pre_nota, nota;
    int peso_p1 = 1;
    int peso_p2 = 1;
    int peso_p3 = 2;

    printf("Prova 01: ");
    scanf("%f", &prova_1);

    printf("Prova 02: ");
    scanf("%f", &prova_2);

    printf("Prova 03: ");
    scanf("%f", &prova_3);

    pesos = peso_p1 + peso_p2 + peso_p3;
    pre_nota = (prova_1 * peso_p1) + (prova_2 * peso_p2) + (prova_3 + peso_p3);
    nota = pre_nota / pesos;
    printf("Nota c/ media ponderada: %.2f \n", nota);
    if(nota >= 60)
        printf("Aprovado!");
    else
        printf("Reprovado!");


    float trabalho_1, trabalho_2, prova, pesos, pre_nota, nota;
    printf("Digite a nota do primeiro trabalho: ");
    scanf("%f", &trabalho_1);

    printf("Digite a nota do primeiro trabalho: ");
    scanf("%f", &trabalho_2);

    printf("Digite a nota do primeiro trabalho: ");
    scanf("%f", &prova);

    pesos = 2 + 3 + 5;
    pre_nota = (trabalho_1 * 2) + (trabalho_2 * 3) + (prova * 5);
    nota = pre_nota / pesos;

    printf("Nota c/ media ponderada: %.2f \n", nota);
    if(nota >= 0 && nota <= 2.9){
        printf("Reprovado!");
    }
    else if(nota >= 3 && nota <= 4.9){
        printf("Recuperacao!");
    }else
        printf("Aprovado!");



    int dia;
    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
        printf("Domingo");
        break;

        case 2:
        printf("Segunda");
        break;

        case 3:
        printf("Terca");
        break;

        case 4:
        printf("Quarta");
        break;

        case 5:
        printf("Quinta");
        break;

        case 6:
        printf("Sexta");
        break;

        case 7:
        printf("Sabado");
        break;

        default:
            printf("Dia invalido!");
            break;
    }



     int choice;
     float num_1, num_2;
     float result;

     do{
        printf("\n1 - SOMA\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - DIVISAO\n");
        printf("4 - MULTIPLICACAO\n");
        printf("5 - SAIR \n");
        printf("Escolha: ");
        scanf("%d", &choice);

        if(choice > 0 && choice < 5){

            printf("Digite o primeiro numero: ");
            scanf("%f", &num_1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num_2);

        }

            switch(choice){
                case 1:
                    result = num_1 + num_2;
                    printf("Resultado: %.2f", result);
                    break;

                case 2:
                    result = num_1 - num_2;
                    printf("Resultado: %.2f", result);
                    break;

                case 3:
                    result = num_1 / num_2;
                    printf("Resultado: %.2f", result);
                    break;

                case 4:
                    result = num_1 * num_2;
                    printf("Resultado: %.2f", result);
                    break;
                default:
                    printf("Num invalido!");
                    break;
            }

        }while(choice != 5);
        */

        int num;
        printf("Numero: ");
        scanf("%d", &num);

        if( num % 3 == 0 && num % 5 == 0){
            printf("E divisivel por 3 e 5");
        }
        else
            printf("Nao e divisivel por 3 e 5");

    return 0;
}
