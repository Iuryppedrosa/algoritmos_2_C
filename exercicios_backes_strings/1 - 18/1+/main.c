#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STANDARD_LENGHT 100

/*
gets(str)
setbuf(stin, NULL);
strlen(str);
strcpy(dest, orign);
strcat(origin, fonte); > origin + fonte, fonte permanece igual
strcmp(str1, str1);
// strrev(str); // Inverte a string no próprio array


*/

int main()
{
    /*
    1)

    char palavra[10];
    // chat palavra[10] = "Iury";
    char palavra2[10] = {'i', 'u', 'r', 'y', '\n'};

    printf("Escreva uma palavra: ");
    scanf("%s", &palavra);


    printf("Palavra: %s\n", palavra);
    printf("Palvra2: %s\n", palavra2);
    printf("Letra da palavra 1: %c\n", palavra[3]);
    printf("Letra da palavra 2: %c", palavra2[0]);



    2)
    char palavra[30] = "Exercicios";
    int count = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        count += 1;
    }

    printf("Cumprimento: %d", count);


     3)

     char nome[20];
    int count = 1;
     do{
        printf("Digite um nome: ");
        scanf("%s", &nome);

        if(nome[0] == 'A' || nome[0] == 'a'){
            printf("Nome: %s \n", nome);
            count = 0;
        }

     }while(count != 0);


     /*
     for(int i = 0; nome[0] != 'A' || nome[0] != 'a'; i++){
        printf("Nome: %s \n", nome);
     }


        5)
     char nome[10];
     printf("Digite um nome ai: ");
     scanf("%s", &nome);

     for(int i = 0; i <= 4; i++){
        printf("%c", nome[i]);
     }

    6)
    char nome[10];
    printf("Digite um nome ai: ");
    scanf("%s", &nome);
    int tamanho = 0;
    tamanho = strlen(nome);
    printf("Tamanho: %d", tamanho);


    char nome[STANDARD_LENGHT];
    int idade;
    char sexo[1];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    setbuf(stdin, NULL);
    printf("Digite o seu sexo: ");
    scanf("%s", &sexo);

    if(sexo[0] == 'f' || sexo[0] == 'F' && idade < 25){
        printf("Aceita!");
    }else{
        printf("Nao aceita!");
    }

 */

 /*
    char nome1[15] = "fabiano"; //joao
    char nome2[15] = "fabiano"; // joao
    int final_count = 0, count = 0;

    do{
        if(nome1[count] != '\0')
        {
            final_count++;
            if(nome1[count] == nome2[count]){
                count++;
            }
        }
        if(final_count == count && nome1[count] == '\0'){
            count = 0;
            printf("Iguais!");
        }
        else if(final_count == 99){
            printf("nao sao iguais");
        }
    }while(count != 0 || final_count < 100);

    */

    /*
    outra solucao

    char nome1[15] = "fabiano"; // Troque por "joao" para testar
    char nome2[15] = "fabiano"; // Troque por "joao" para testar
    int i = 0;

    // Comparação caracter a caracter
    while (nome1[i] != '\0' || nome2[i] != '\0') {
        if (nome1[i] != nome2[i]) {
            printf("Nao sao iguais\n");
            return 0;
        }
        i++;
    }

    printf("Iguais\n");
    return 0;
    */
    /*

    char numero[100];
    printf("Digite uma seria de 0 e 1: ");
    scanf("%s", &numero);

    int count = 0;
    for(int i = 0; numero[i] != '\0'; i++){
        if(numero[i] == '1'){
            count++;
        }
    }
    printf("count: %d", count);


    char nome[10] = "Iury";
    char nome2[10];
    int tamanho = strlen(nome); // Comprimento da string (sem o '\0')
    int count = 0;


    for(int i = tamanho -1; i >= 0; i--){
        nome2[count] = nome[i];
        count++;
    }

    // Adiciona o caractere nulo ao final de nome2
    nome2[count] = '\0';
    printf("Nome2: %s", nome2);



       11)
    char vogais[10] = "aeiou";
    char palavra[10];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    //gets(palavra);
    for(int i =0; i < strlen(palavra); i++){
        for(int j = 0; j < strlen(vogais); j++){
            if(vogais[i] == palavra[j]){
                palavra[j] = 'X';
            }
        }
    }

    printf("%s", palavra);



     13)
     char frase[100];
     int count = 0;
     printf("Digite uma frase: ");
     //scanf("%s", frase);
     gets(frase);


     for(int i =0; i < strlen(frase); i++){
        if(frase[i] == ' '){
            count++;

        }
     }


     printf("Frase: %s\n", frase);
     printf("%d espacos em branco.", count);




        14)

    char palavra[50];
    printf("Digite uma palavra: ");
     //scanf("%s", palavra);
     gets(palavra);

    for(int i =0; i < strlen(palavra); i++){
        palavra[i] = palavra[i] + 1;
    }

     printf("Palavra: %s\n", palavra);


    15, 16
    char palavra[50];
    printf("Digite uma palavra: ");
     //scanf("%s", palavra);
     gets(palavra);

    for(int i =0; i < strlen(palavra); i++){
        palavra[i] = palavra[i] - 32;
    }

     printf("Palavra: %s\n", palavra);



      17)
    char frase[50];
    int j = 0;
    printf("Digite uma palavra: ");
     //scanf("%s", palavra);
     gets(frase);
    //fgets(frase, 100, stdin);
    for(int i =0; i < strlen(frase); i++){
        if(frase[i] !=  ' '){
            frase[j] = frase[i];
            j++;
        }

    }
    frase[j] = '\0';

     printf("Palavra: %s\n", frase);


     */


     char palavra[15];
     char L1;
     char L2;
     printf("Digite uma palavra: ");
     //scanf("%s", palavra);
     gets(palavra);


     printf("Digite uma LETRA:");
     scanf("%c", &L1);


     setbuf(stdin, NULL);
     printf("Digite OUTRA LETRA:");
     scanf("%c", &L2);

     for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] == L1){
            palavra[i] = L2;
        }
     }

     printf("Palavra: %s", palavra);









    return 0;
}
