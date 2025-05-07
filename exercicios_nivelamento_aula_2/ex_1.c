#include<stdio.h>
#include<stdlib.h>

int main(){

    int nota1, nota2, nota3, nota4;

    printf("Digite a nota 1:");
    scanf("%d", &nota1);
    printf("Digite a nota 2:");
    scanf("%d", &nota2);
    printf("Digite a nota 3:");
    scanf("%d", &nota3);
    printf("Digite a nota 4:");
    scanf("%d", &nota4);

    int media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A média das notas é: %d\n", media);


    system("pause");
    return 0;
}