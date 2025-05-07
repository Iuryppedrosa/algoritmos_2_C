#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    >> vetor[] = {33, 11, 34, 5, 41, 33, 3};
    >> int length = sizeof(vetor) / sizeof(vetor[0])

    int vetor[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    for(int i = 0; i <= 5; i++){
        if(vetor[i] == 0 || vetor[i] == 1 || vetor[i] == 7){
            soma += vetor[i];
        }
        if(i == 4){
            vetor[4] = 100;
        }
        printf("%d \n", vetor[i]);

    }
         printf("%d \n", soma);



    float vetor1[10];
    float vetor2[10];

    for(int i = 0; i <= 10; i++){
        vetor1[i] = 0;
        vetor2[i] = 0;
    }

    for(int i = 0; i <= 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor1[i]);

        printf("Valor v1: %.2f \n", vetor1[i]);

        vetor2[i] = pow(vetor1[i], 2);
        printf("Valor v2 (v1 ao quadrado): %.2f\n", vetor2[i]);



    }


      int vetor[] = {4, 45, 12, 4, 67, 98, 67, 23, 59, 23};
      int choice_one, choice_two, soma;

      printf("Digite um valor de 0 a 9: ");
      scanf("%d", &choice_one);

      printf("Digite um valor de 0 a 9: ");
      scanf("%d", &choice_two);

      for(int i = 0; i <= 9; i++){
        if(vetor[choice_one] || vetor[choice_two])
            soma = vetor[choice_one] + vetor[choice_two];
      }
      printf("Soma: %d", soma);


    int vetor[10];
    int maior = 0;
    for(int i = 0; i <= 9; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i <= 9; i++){
        printf("%d \n", vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("Maior: %d", maior);
    return 0;



    int vetor[6];
    for(int i = 0; i <= 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }


    for(int i = 7; i >= 0; i--){
        printf("%d \n", vetor[i]);
    }
      */

    printf("conceito de q o vetor serve para armazenar a historia de uma variavel\n");

    float nota[] = {43, 43, 54, 65, 12, 45, 65, 76, 12, 4};
    float soma, media;

    for(int i= 0; i <= 9; i++){
        soma += nota[i];
    }
     media = soma / 10;
    printf("Media: %.2f", media);
}
