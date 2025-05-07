#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("Escreva um string: ");
    char palavra[100];
    scanf("%s", palavra);
    int palavradigitada = strlen(palavra);
    printf("Você escreveu: %s\n", palavra);
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    char palavraSemVogais[100];

    for(int i = 0; i < palavradigitada; i++){
        int isVogal = 0;
        for(int j = 0; j < 5; j++){
            if(palavra[i] == vogais[j]){
                isVogal = 1;
                break;
            }
        }
        if(isVogal == 0){
            palavraSemVogais[strlen(palavraSemVogais)] = palavra[i];
        }
        
    }
    printf("A palavra sem vogais é: %s\n", palavraSemVogais);

    system("pause");
    return 0 ;
}