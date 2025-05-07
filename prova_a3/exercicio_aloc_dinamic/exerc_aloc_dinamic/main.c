#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nome[20];
    char data_nascimento[20];
    char endereco[100];
    double salario;
}Funcionario;

int main()
{


    //EX 1. ALOC DINAMIC.
    printf("Hello world!\n");

    int N = 5;
    int *p = malloc(N * sizeof(int));

    int from_user;
    int count = 0;

    if (p == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }


    while(1){
        printf("Digite numero (0 para sair): ");
        scanf("%d", &from_user);


        if (from_user == 0) {
            break;
        }

        p[count] = from_user;
        count++;


        if(count == N)
        {
            N += 5;
            p = realloc(p, N * sizeof(int));
        }

    }

    for(int i = 0; i < count; i++){
        printf("%d ", p[i]);
    }
    free(p);


    //EX 2

    int linhas_mat_1;
    int colunas_mat_1;

    int linhas_mat_2;
    int colunas_mat_2;


    printf("Quantas linhas para a matriz 1? ");
    scanf("%d", &linhas_mat_1);

    printf("Quantas colunas para a matriz 1? ");
    scanf("%d", &colunas_mat_1);

    printf("Quantas linhas para a matriz 2? ");
    scanf("%d", &linhas_mat_2);

    printf("Quantas colunas para a matriz 2? ");
    scanf("%d", &colunas_mat_2);

    if (linhas_mat_1 != linhas_mat_2 || colunas_mat_1 != colunas_mat_2) {
        printf("Erro: As matrizes precisam ter o mesmo tamanho para serem somadas.\n");
        return 1;
    }


    double **ptr_mat_1 = NULL;
    double **ptr_mat_2 = NULL;
    double **ptr_soma_mat = NULL;

    ptr_mat_1 = malloc(linhas_mat_1 * sizeof(double *));
    for(int i = 0; i < linhas_mat_1; i ++){
        ptr_mat_1[i] = malloc(colunas_mat_1 * sizeof(double));
    }

    for(int i = 0; i < linhas_mat_1; i++){
        for(int j = 0; j < colunas_mat_1; j++){
            ptr_mat_1[i][j] = i + j;
        }
    }

    ptr_mat_2 = malloc(linhas_mat_2 * sizeof(double *));
    for(int i = 0; i < linhas_mat_2; i ++){
        ptr_mat_2[i] = malloc(colunas_mat_2 * sizeof(double));
    }

     for(int i = 0; i < linhas_mat_2; i++){
        for(int j = 0; j < colunas_mat_2; j++){
            ptr_mat_2[i][j] = i + j;
        }
    }


    ptr_soma_mat = malloc(linhas_mat_2 * sizeof(double *));
    for(int i = 0; i < linhas_mat_2; i ++){
        ptr_soma_mat[i] = malloc(colunas_mat_2 * sizeof(double));
    }

    for(int i = 0; i < linhas_mat_2; i++){
        for(int j = 0; j < colunas_mat_2; j++){
            ptr_soma_mat[i][j] = ptr_mat_1[i][j] + ptr_mat_2[i][j];
        }
    }

    for(int j = 0; j < linhas_mat_2; j++){
            for(int k = 0; k < colunas_mat_2; k++){
                printf("%.2f ", ptr_soma_mat[j][k]);

            }
             printf("\n");
    }

    for(int i = 0; i < linhas_mat_1; i ++){
        free(ptr_mat_1[i]);
    }
    free(ptr_mat_1);

    for(int i = 0; i < linhas_mat_2; i ++){
        free(ptr_mat_2[i]);
    }
    free(ptr_mat_2);

    for(int i = 0; i < linhas_mat_2; i ++){
        free(ptr_soma_mat[i]);
    }
    free(ptr_soma_mat);




    // EX 3.

    Funcionario func;
    Funcionario *pfunc;

    int qtd;

    printf("Quantos funcionarios vc quer cadastrar: ");
    scanf("%d", &qtd);
    getchar(); // Consumir o \n deixado pelo scanf
    pfunc = malloc(qtd * sizeof(func));


    for(int i =0; i < qtd; i++){
            getchar();
            printf("Digite o nome do func%d: ", i + 1);
            fgets((pfunc + i)->nome, 50, stdin);

            printf("Digite o a data de nascimento para o func%d: ", i + 1);
            fgets(pfunc[i].data_nascimento, 15, stdin);

            printf("Digite o endereco para o func%d: ", i + 1);
            fgets((pfunc + i)->endereco, 50, stdin);

            printf("Digite o valor para o salario do func%d: ", i + 1);
            scanf("%d", &(pfunc[i].salario));
            getchar();
    }

    for(int i = 0; i < qtd; i++){
        printf("Nome: %s\n", pfunc[i].nome);
        printf("Nascimento: %s\n", (pfunc + i)->data_nascimento);
        printf("Valor: %.2f\n", pfunc[i].salario);
        printf("Endereco: %s\n", (pfunc + i)->endereco);
    }

    free(pfunc);

    int tamanho = 0;
    int count = 0;
    char resp_usuario[3];
    int aumentar = 0;
    printf("Quantos valores vc quer digitar: ");
    scanf("%d", &tamanho);

    int *p_tamanho = malloc(tamanho * sizeof(int));
    while(1){
        printf("Digite um numero: ");
        scanf("%d", &p_tamanho[count]);
        count++;

        if(count == tamanho){
            printf("Deseja parar? (sim ou nao) \n>");
            scanf("%s", resp_usuario);
            if(resp_usuario[0] == 's'){
                break;
            }else{
                printf("Deseja digitar mais quantos valores? \n>");
                scanf("%d", &aumentar);
                tamanho += aumentar;
                p_tamanho = realloc(p_tamanho, tamanho * sizeof(int));
            }
        }



    }
    for(int i =0; i < count; i++){
        printf("%d ", p_tamanho[i]);
    }
    printf("\n");

    // Remover valores consecutivos repetidos
    int novo_tamanho = 1; // O primeiro elemento sempre permanece

    for (int i = 1; i < count; i++) {
        if (p_tamanho[i] != p_tamanho[novo_tamanho - 1]) {
            p_tamanho[novo_tamanho] = p_tamanho[i];
            novo_tamanho++;
        }
    }

    // Redimensionar o vetor para o tamanho exato
    p_tamanho = realloc(p_tamanho, novo_tamanho * sizeof(int));

    if (p_tamanho == NULL) {
        printf("Erro ao realocar memória.\n");
        return 1;
    }
    // Exibir o vetor atualizado
    printf("\nVetor sem valores consecutivos repetidos:\n");

    for(int i =0; i < count; i++){
        printf("%d ", p_tamanho[i]);
    }

    printf("\n Tamanho final de %d", novo_tamanho);

       */

    //EX 5:
    int linhas = 0;
    int colunas = 0;

    int *vetor_aux;
    printf("Digite qual a dimensao para sua matriz, separado por espacos: ");
    scanf("%d %d", &linhas, &colunas);

    int **p_matriz_5 = malloc(linhas * sizeof(int *));
    vetor_aux = malloc(linhas * colunas * sizeof(int));

    for(int i = 0; i < linhas; i++){
        p_matriz_5[i] = malloc(colunas * sizeof(int));
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &p_matriz_5[i][j]);
        }
    }

    // Convertendo a matriz para um vetor
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            vetor_aux[i * colunas + j] = p_matriz_5[i][j];
        }
    }

    // Exibindo o vetor convertido corretamente
    printf("\nVetor convertido:\n");
    for (int i = 0; i < (linhas * colunas); i++) {
        printf("%d ", vetor_aux[i]);
    }
    printf("\n");

    // Liberando memória
    for (int i = 0; i < linhas; i++) {
        free(p_matriz_5[i]);
    }
    free(p_matriz_5);
    free(vetor_aux);

    return 0;
}
