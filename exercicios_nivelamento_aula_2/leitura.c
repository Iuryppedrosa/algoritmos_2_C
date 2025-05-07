#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome;
    int idade;
    int *prt = &idade;

    printf("%d\n", *prt);

    printf("Digite seu nome e idade: ");
    scanf("%c %d", &nome, &idade);
    printf("Seu nome é %c e idade de %d", nome, idade);

    system("pause");
    return 0;

}