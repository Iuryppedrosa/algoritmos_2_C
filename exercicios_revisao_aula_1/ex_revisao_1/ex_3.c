#include<stdio.h>
#include<stdlib.h>

int main(){

    int numeros[5];
    int maior = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        if(numeros[i] > maior){
                maior = numeros[i];
        }
    }
    printf("O maior numero digitado é:%d", maior);


    return 0;
}
