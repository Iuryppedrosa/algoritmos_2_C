#include<stdio.h>
#include<stdlib.h>

int main (){
    int vetor1[9] = {23, 43, 54, 76, 4, 65, 97, 23, 99};
    int vetor2[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vetor3[9];

    for(int i = 0; i < 9; i++){
        if(vetor1[i] % 2 == 0){
            vetor3[i] = vetor1[i];
        }else{
            vetor3[i] = vetor2[i];
        }
    }


    for(int i = 0; i < 9; i++){
        printf("%d ", vetor3[i]);
    }

    system("pause");
    return 0;
}