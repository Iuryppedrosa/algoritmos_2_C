#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exemplo ponteiro pg 49 slide tiago ponteiro2.\n");

    int vet [5] = {1 ,2 ,3 ,4 ,5};
    int vet2 [5] = {6 ,7 ,8 ,9 ,10};
    int *pslide = vet;
    int *pslide2 = vet2;
    for (int i = 0; i < 5; i ++){
        printf ("%d \n", pslide[i]);
        printf ("%d\n" , *(pslide2 + i));
    }


     printf("EXERCICIO 1:\n");
    // 1.Explique a diferen¸ca entre: p++; (*p)++; *(p++);
    // p++ incrementa o valor de bytes do tipo em P, e entrega na proxima chamada, ou seja, P vai apontar para outro endereço tantos bytes depois.
    // (*p)++ incrementa mais 1 no valor da variavel para qual p aponta.
    // como ++ tem precedencia sobre *,
    // tanto (*p++) ou *(p++), incrementam o valor da variavel que P aponta, e depois incrementa o endereco do que P aponta
    int valor = 10, valor2 = 20;

    int *p = NULL;
    p = &valor;

    printf("Valor do endereco de P: %d \n", &p);
    printf("Valor de endereco do que P aponta (no caso, variavel VALOR): %d \n", p);
    printf("Valor de endereco de valor: %d \n", &valor);

    printf("Valor p++: %p e %d (mostrando o mesmo endereco, mas fazendo o incremeto depois)\n", p++, p++);
    printf("Valor p++: %p e %d \n", p, p);
    printf("Endereco de valor2: %d \n", &valor2);
    printf("\n\n\n");

    p = &valor;
    printf("Valor do que P aponta(valor): %d \n", *p);

    (*p)++;
    printf("Valor de (*p)++; ( Incrementa o valor do que P aponta E nao move o ponteiro):  %d // e endereco: %d \n", *p, &p);

    //*(p++);
    //printf("Valor de *(p++); (Acessa o valor do que P aponta E move o ponteiro, sem alterar o valor armazenado: %d // e endereco:  %d\n", *p, &p);


    printf("Valor para valor: %d \n", valor);
    printf("Valor para endereco que P aponta (valor): %d \n", p);

    //EX 2, 3, 4 FEITOS EM OUTRO ARQUIVO
    // EX 5 - 8 > FUNCOES


    // EX 9:
    // para arrayz, o ponteio ja pega o primeiro endereco
     printf("EXERCICIO 9:\n");
     float conteudo[10] = {3, 4, 6, 76.3, 44.5, 12.6, 45.6, 90.6, 23.4, 55.4};
     float *ponteiro = NULL;
     ponteiro = conteudo;

     printf("Provando que o *ponteiro vai apontar para o endereco de 3. \nEndereco de 3: %d \n", &conteudo[0]);
     printf("Provando que o *ponteiro vai apontar para o endereco de 3. \nEndereco de 3: %d \n", ponteiro);
     for(int i = 0; i < 10; i++){
        printf("Endereco: %d - Valor: %f \n", ponteiro, *ponteiro);
        *ponteiro *= 10;
        ponteiro++;
     }

     for(int i = 0; i < 10; i++){
        printf("%2.f ", conteudo[i]);
     }
    printf("\n\n\n");


    //EX 10:
     printf("EXERCICIO 10:\n");
     float matriz[3][3] = {{34.5, 56.7, 32.1},{34.6, 12.4, 33.2},{99.8, 66.9, 34.8}};
     float *ponteiro2 = NULL;
     float *ponteiroX = NULL;
     ponteiro2 = matriz;
     ponteiroX = matriz;

         for(int i = 0; i < 3; i++){
            for(int j = 0; j< 3; j++){
               printf("Endereco: %d - Valor: %.2f \n", ponteiro2, *ponteiro2);
               ponteiro2++;
            }
        }

    printf("\n\n\n");

    //EX 11:
     printf("EXERCICIO 11:\n");
     int vetor[5] = {4, 5, 6, 7, 8};
     int vetorW[5] = {2, 4, 6, 8, 10};
     int vetorTeclado[5];
     int *ponteiro3 = NULL;
     int *ponteiroW = NULL;
     int *ponteiroY = NULL;
     ponteiro3 = vetor;
     ponteiroW = vetorW;


     for(int i = 0; i < 5; i++){
        ponteiro3[i] *= 2;
        printf("Valor dobrado: %d \n", ponteiro3[i]);
     }

     for(int j = 0; j < 5; j++){
        *ponteiroW *= 2;
        printf("Valor dobrado: %d \n", *ponteiroW);
        ponteiroW++;
     }


     ponteiroY = vetorTeclado;
     for(int k = 0; k < 5; k++){
        printf("Digite um numero: ");
        scanf("%d", &vetorTeclado[k]);
        printf("Valor: %d \n", *ponteiroY);
        ponteiroY++;
     }

     printf("\n\n\n");

    //EX 12:
     printf("EXERCICIO 12:\n");
     int vetor2[5] = {4, 5, 6, 7, 8};
     int *ponteiro4 = NULL;
     ponteiro4 = vetor2;


     for(int i = 0; i < 5; i++){
        if((ponteiro4[i] % 2) == 0){ // *(ponteiro + i)
            printf("Endereco: %d - ", ponteiro4 + i);
            printf("Valor: %d \n", ponteiro4[i]);
           }
        //ponteiro4++;
     }

     int vetorTeclado2[5];
     int *ponteiroEx12 = NULL;
     ponteiroEx12 = vetorTeclado2;

     for(int j = 0; j < 5; j++){
        printf("Digite um numero: ");
        scanf("%d", &vetorTeclado2[j]);
        if((*(ponteiroEx12 + j) % 2) == 0){ // *ponteiro
            printf("Endereco do que ponteiroEx12 aponta: %d - valor: %d \n", ponteiroEx12, *ponteiroEx12);
            //ponteiroEx12++;
        }//else{
            //ponteiroEx12++;
        //}
     }

     printf("\n\n\n");
     //EX 13, LETRA A, OTURA FORMA
     printf("EXERCICIO 13 outra forma:\n");
     int vetorXX[10] = {12, 55, 6, 7, 8, 4, 3, -18, 866, 99};
     int *p_vetorXX = vetorXX;
     int menor = *p_vetorXX;

     for(int i = 0; i < 10; i++){
        if(*p_vetorXX < menor){
          menor = *p_vetorXX;
          p_vetorXX++;
        }else{
            p_vetorXX++;
        }
     }
     printf("Menor: %d\n", menor);


    //EX 13:
     printf("EXERCICIO 13:\n");
     int vetor3[10] = {4, 5, 6, 7, 8, 4, 3, -18, 45, 88};
     int *calculos = NULL;
     int *ponteiro5 = vetor3;
     int soma = 0;
     float media;
     int qdt_negativos = 0;
     int vetor_invertido[10];

     // calculos recebe (aponta para) o endereco da primeira posicao do vetor ponteiro5, que guarda o numero 4.
     calculos = ponteiro5;

     for(int i = 1; i < 10; i++){
        if(*calculos > ponteiro5[i]){
            calculos = &ponteiro5[i];
        }
        soma += ponteiro5[i];
     }
     media = soma / 10.0;
     printf("Menor valor: %d\n", *calculos);
     printf("Media: %.2f \n", media);

    *calculos = NULL;
    int aux = 9;
     for(int i = 0; i < 10; i++){

     calculos = &ponteiro5[aux];
        if(ponteiro5[i] < 0){
            qdt_negativos++;
        }

        vetor_invertido[aux] = ponteiro5[i];
        printf(" %d / ", *calculos);
        aux--;
     }
     printf("\nQtd negativos: %d\n", qdt_negativos);
     printf("Bitys alocados posicao i");

    for(int i = 0; i < 10; i++)
    {
        printf(" %d /",vetor_invertido[i]);
    }

    // Calcular o número de bytes alocados a cada posição
    for (int i = 0; i < 9; i++) {
        int *prox_posicao = &ponteiro5[i + 1];  // Endereço da próxima posição
        int tamanho = prox_posicao - &ponteiro5[i];  // Diferença entre os endereços
        printf("Tamanho de cada posição: %d bytes\n", tamanho * 4);
    }


    //EX 14.
    int vetor_reais[10] = {4, 5, 6, 7, 8, 4, 3, -18, 45, 88};
    int *ponteiro6 = NULL;
    int *ponteiro7 = NULL;

    ponteiro6 = vetor_reais;
    ponteiro7 = &vetor_reais[9];

    for(int i = 0; i < 5; i++){
        printf(" incio:%d - fim:%d", *ponteiro6, *ponteiro7);
        ponteiro6++;
        ponteiro7--;
    }

    printf("\nInicio exercicio 15 \n");
    //EX 15.
    int super_matriz[100][100];
    int *super_ponteiro = NULL;
    super_ponteiro = &super_matriz[0][0];

    for(int i = 0; i < 100; i++){
        for(int j =0; j< 100; j++){
            *super_ponteiro = 0;
            super_ponteiro++;
        }
    }

    super_ponteiro = &super_matriz[0][0];
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            *super_ponteiro = i * 100 + j; // Usa i e j para definir valores
            super_ponteiro++;
        }
    }

    super_ponteiro = &super_matriz[0][0];

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            printf("%d ", *super_ponteiro);
            super_ponteiro++;
        }
    }

    printf("\n\n\n");
    printf("\n\n\n");


    // EX 16
    char palavra_1[200] = "farsdfasdfaaunkdifjhtasdejfasdfrdfadro";
    char palavra_2[200] = "ruiter";

    char *ponteiro_char = palavra_2;

    for(int i = 0; i < sizeof(palavra_1); i++){
        while(*ponteiro_char == palavra_1[i] && palavra_1[i] != '\0'){
            printf("%c", *ponteiro_char);
            ponteiro_char++;
        }
    }

    // EX 17
    int vetor_17[6] = {1, 2, 3, 4, 5, 6};
    int *ponteiro_17 = vetor_17;

    for(int i = 1; i <= 6; i++){
        printf("Posicao original: %d \n", ponteiro_17);
        *ponteiro_17 += 1;
        ponteiro_17++;
        printf("Proxima posicao: %d \n", ponteiro_17);
    }

    ponteiro_17 = vetor_17;
    for(int i = 0; i < 6; i++){
        printf("%d ", ponteiro_17[i]);
    }


    return 0;
}
