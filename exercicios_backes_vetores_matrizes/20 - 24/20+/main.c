#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    int vetor1[10] = {7, 13, 22, 31, 4, 19, 27, 35, 11, 44};
    int tamanho1 = sizeof(vetor1);
    int tamanho2 = sizeof(vetor1[0]);
    int tamanhoTotal = tamanho1 / tamanho2;
    int vetor2[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int vetor3[10][2] =
    {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0}
    };


    printf("%d \n", tamanho1);
    printf("%d \n\n", tamanho2);
    printf("%d \n\n\n", tamanhoTotal);


    for(int i =0; i < tamanhoTotal; i++)
    {
        if(vetor1[i] % 2 != 0)
        {
            vetor2[i] = vetor1[i];
        }
    }

    for(int i = 0; i < tamanhoTotal; i++)
    {
        for(int j = 0; j < tamanhoTotal; j++)
        {
            printf("%d ", vetor1[i]);
            printf("%d\n", vetor2[i]);
        }
    }


    // Copiar elementos do vetor1 para a primeira linha do vetor_bidimensional
    for (int i = 0; i < tamanhoTotal; i++)
    {
        vetor3[i][0] = vetor1[i];
    }

    // Copiar elementos do vetor2 para a segunda linha do vetor_bidimensional
    for (int i = 0; i < tamanhoTotal; i++)
    {
        vetor3[i][1] = vetor2[i];
    }

    int tamanhoVetor3 = sizeof(vetor3) / sizeof(vetor3[0][0]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", vetor3[i][j]);
        }
        printf("\n");



    }

    int vetor1[10];
    int vetor2[10];
    int vetor3[10];


    for(int i = 0; i < 10; i++){
        printf("Digite dois numeros separados por espaco: ");
        scanf("%d %d", &vetor1[i], &vetor2[i]);
        vetor3[i] = vetor1[i] - vetor2[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%d \n", vetor3[i]);
    }



     int vetor1[10] = {12, 35, 7, 19, 23, 48, 32, 9, 41, 15};
     int vetor2[10] = {26, 8, 50, 14, 3, 29, 18, 37, 6, 44};
     int vetor3[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
     int vetor4[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

     for(int i = 0; i < 10; i+=2){
        vetor3[i] = vetor1[i];
     }

     for(int i = 9; i >= 1; i-=2){
        vetor3[i] = vetor2[i];
     }

     for(int i = 0; i < 10; i++){
        vetor4[i] = (i % 2 == 0) ? vetor1[i] : vetor2[i];
     }




    float matriz1[3][2];
    float maior = 0.0;
    int id_maior = 0;

    float menor = 3.0;
    int id_menor = 0;

    for(int i = 0; i < 3; i++){
        printf("Digite o ID do aluno e sua altura, separado por espaco: ");
        scanf("%f %f", &matriz1[i][0], &matriz1[i][1]);

        if(matriz1[i][1] > maior){
            maior = matriz1[i][1];
            id_maior = matriz1[i][0];
        }

        if(matriz1[i][1] < menor){
            menor = matriz1[i][1];
            id_menor = matriz1[i][0];
        }
    }

    printf("Maior: %.2f - Id: %d\n", maior, id_maior);
    printf("Menor: %.2f - Id: %d\n", menor, id_menor);
    */
    int m_vetor_100[100];
    int m_ultimo_dig = 0;

    for(int i = 0; i < 100; i++){
        m_ultimo_dig = i % 10;
        if((i % 7) != 0 && m_ultimo_dig != 7)
        {
            m_vetor_100[i] = i;
        }else{
            m_vetor_100[i] = 0;
        }
    }

    for(int i =0; i < 100; i++){
        printf("Vetor: %d \n", m_vetor_100[i]);
    }

    printf("---------------------------------------------------------");

    int vetor_100[100];
    int numero = 0; // Variável para encontrar os números naturais
    int count = 0;  // Contador para preencher o vetor com 100 números

    while(count < 100){
        int ultimo_dig = numero % 10;
        if((numero % 7 != 0) && (ultimo_dig != 7)){
            vetor_100[count] = numero;
            count++;
        }
        numero++;
    }
    for (int i = 0; i < 100; i++) {
        printf("\nVetor[%d]: %d \n", i, vetor_100[i]);
    }



      return 0;
}
