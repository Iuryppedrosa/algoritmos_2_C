#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor[50];

    for(int i = 0; i < 50; i++){
        printf("Digite um numero: \n");
        scanf("%f", &vetor[i]);

        if(vetor[i] >= 0){
            printf("O numero digitado %.2f é positivo! \n", vetor[i]);
        }
        else{
            printf("O numero digitado %.2f é negativo! \n", vetor[i]);
        }
    }
    return 0;
}
