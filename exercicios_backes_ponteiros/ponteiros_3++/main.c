#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat_i[2][3];
    int (*ptr_mat)[3] = NULL;

    ptr_mat = mat_i;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            ptr_mat[i][j] = i + j;
        }
    }

    for(int k = 0; k < 2; k++){
        for(int l = 0; l < 3; l++){
            printf("%d ", ptr_mat[k][l]);
            printf("\n");
        }
    }


    int valor1;
    int valor2;

    int *p_valor1 = NULL;
    int *p_valor2 = NULL;



    printf("Digite o valor para variavel 1: ");
    scanf("%d", &valor1);

    p_valor1 = &valor1;

    printf("Digite o valor para variavel 2: ");
    scanf("%d", &valor2);

    p_valor2 = &valor2;

    if(*p_valor1 > *p_valor2){
        printf("Maior: %d \n", *p_valor1);
    }else{
        printf("Maior: %d \n", *p_valor2);
    }

    return 0;
}
