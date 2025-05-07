#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Informe a nota 1: ");
    float nota1;
    scanf("%f", &nota1);

    printf("Informe a nota 2: ");
    float nota2;
    scanf("%f", &nota2);

    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
        float media = (nota1 + nota2) / 2;
        printf("Media: %.2f\n", media);
    }else{
        printf("Nota invalida\n");
    }

    system("pause");
    return 0;
}