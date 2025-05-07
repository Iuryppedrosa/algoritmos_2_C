#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


////////////////// EXERCICIO 1

void crescente(int *p){
    int aux;

    if(p[0] > p[1]){
        aux = p[0];
        p[0] = p[1];
        p[1] = aux;
    }
    if (p[0] > p[1]) {
        aux = p[0];
        p[0] = p[1];
        p[2] = aux;
    }
    if (p[0] > p[1]) {
        aux = p[1];
        p[1] = p[2];
        p[2] = aux;
    }
    printf("Crescente %d %d %d", p[0], p[1], p[2]);

}

int main(){
    int *p = (int *) malloc(3 * sizeof(int));
    printf("Digite 3 numeros separados por espaco: ");
    scanf("%d %d %d", &p[0], &p[1], &p[2]);
    crescente(&p[0]);
    free(p);
    return 0;
}
////////////////// FIM EXERCICIO 1



////////////////// EXERCICIO 2

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void decrement(int *a, int *b){
    (*a)--;
    (*b)++;
}

void raiz(int a, int b, int c, int *raizx1, int *raizx2){
    float delta1 = (b * b) - (4 * a * c);
    *raizx1 = -b + sqrt(delta1) / 2 * a;
    *raizx2 = -b - sqrt(delta1) / 2 * a;
}
int main(){
    int a;
    int b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("A:%d \nB:%d \n", a, b);


    troca(&a, &b);
    printf("A:%d \nB:%d \n\n", a, b);


    decrement(&a, &b);
    printf("A:%d \nB:%d \n\n", a, b);

    int aa, bb, cc, raizx1, raizx2;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &aa, &bb, &cc);

    raiz(aa, bb, cc, &raizx1, &raizx2);
    printf("Raiz x1: %d\n", raizx1);
    printf("Raiz x2: %d\n", raizx2);
}
////////////////// FIM EXERCICIO 2

////////////////// EXERCICIO 3

void pontuacaoTimes(int *pontosA, *int pontosB, int golsA, int golsB){
    if (golsA > golsB) {
        *pontosA += 3; // Time A vence, ganha 3 pontos
    } else if (golsB > golsA) {
        *pontosB += 3; // Time B vence, ganha 3 pontos
    } else {
        *pontosA += 1; // Empate, ambos ganham 1 ponto
        *pontosB += 1;
    }
}
int main(){
    int timeA, timeB, goalsA, goalsB, pontosPosPartidaA, pontosPosPartidaB;


    printf("Digite a pontuacao ANTES DO JOGO do time A:");
    scanf("%d", &timeA);
    printf("Digite a pontuacao ANTES DO JOGO do time B:");
    scanf("%d", &timeB);

    printf("Digite a qtd de gols time A:");
    scanf("%d", &goalsA);
    printf("Digite a qtd de gols time B:");
    scanf("%d", &goalsB);

    // Atualizando pontuação com base no resultado
    pontuacaoTimes(&timeA, &timeB, golsA, golsB);

    // Exibindo a pontuação final
    printf("Pontuacao FINAL do time A: %d\n", timeA);
    printf("Pontuacao FINAL do time B: %d\n", timeB);



}

////////////////// EXERCICIO 4

void funcExercicio(int *numInt, char *palavras, int *vetor_inteiro){


}

int main(){

    int vetor_inteiros[10];
    int count;

    char **palavras = NULL;
    int qtd_palavras;
    char palavra[50];
    printf("Quantas palavras deseja digitar? ");
    scanf("%d", &qtd_palavras);

    palavras = (char **) malloc(qtd_palavras * sizeof(char *));
    for(int i = 0; i < qtd_palavras; i++){
        printf("Digite a palavra %d: ", i);
        scanf("%s", palavra);
        palavras[i] = (char *) malloc((strlen(palavra) + 1) * sizeof(char));

        for(int j = 0; j <= strlen(palavra); j++){
            palavras[i][j] = palavra[j];
        }
    }

    funcExercicio(&count, palavras, vetor_inteiros, qtd_palavras);

    for(int i = 0; i < qtd_palavras; i++){
        printf("%s\n", palavras[i]);
    }

    for (int i = 0; i < qtd_palavras; i++) {
        free(palavras[i]); // Libera cada palavra
    }
    free(palavras);

    return 0;
}

////////////////// FIM 4

////////////////// EXERCICIO 5
int isValid(int dia, int mes, int ano){
    if(dia > 1 && dia <= 31 && mes > 1 && mes < 12 && ano > 1 900){
        return 1;
    }else{
        return 0;
    }
}

void formatDate(int dia, int mes, int ano){
    char mesFormatado[20];
    switch(mes){
        case 1 :
            strcpy(mesFormatado, "Janeiro");
            break;
        case 2 :
            strcpy(mesFormatado, "Fevereiro");
            break;
        case 3 :
            strcpy(mesFormatado, "Marco");
            break;
    }
    printf("%d de %s de %d", dia, mesFormatado, ano);
    //return mesFormatado;
}


int main()
{
    int dia;
    int mes;
    int ano;
    char mesFormatado[20];
    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(isValid(dia, mes, ano) == 1){
        formatDate(dia, mes, ano);
    }


    return 0;
}
////////////////// FIM EXERCICIO 5




////////////////// EXERCICIO 6
void convertSecconds(int qtd_segundos){
    int minutos;
    int minutos_totais;
    int horas;
    int segundos;


    minutos = qtd_segundos / 60;
    minutos_totais = minutos % 60;

    segundos = qtd_segundos % 60;
    horas = minutos / 60;

    printf("%d:%d:%d", horas, minutos_totais, segundos);
};

int main(){
    int qtd_segundos = 0;
    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &qtd_segundos);

    convertSecconds(qtd_segundos);

    return 0;
}
////////////////// FIM EXERCICIO 6

////////////////// EXERCICIO 7
// Gera vetor com valores aleatórios no intervalo [min, max]


int *gerarVetor(int tamanho, int min, int max) {
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação!\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }

    return vetor;
}

// Encontra o maior e o menor valor do vetor usando 1 laço
void encontrarMaiorMenor(int *vetor, int tamanho, int *menor, int *maior) {
    *menor = vetor[0];
    *maior = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        } else if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
    }
}

int main() {
    int tamanho, min, max;
    int *vetor;
    int menor, maior;

    srand(time(NULL)); // Seed para números aleatórios

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite o valor mínimo: ");
    scanf("%d", &min);

    printf("Digite o valor máximo: ");
    scanf("%d", &max);

    vetor = gerarVetor(tamanho, min, max);

    printf("\nVetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    encontrarMaiorMenor(vetor, tamanho, &menor, &maior);

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    free(vetor); // Libera memória

    return 0;
    ////////////////// FIM 7
}

////////////// INICIO EX 8

int **gerarMatrizAleatoria(int min, int max){
    int linhas = 5;
    int colunas = 5;
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    if(matriz == NULL){
        printf("Erro ao alocar memoria");
    }
    for(int i = 0; i < linhas; i ++){
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if(matriz[i] == NULL){
            printf("Erro ao alocar memoria 2");
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j< colunas; j++){
            matriz[i][j] = min + rand() % (max - min + 1);
        }
    }

    return matriz;
}

void analisarMatriz(int **matriz, int *menor, int *maior){
    *maior = 0;
    *menor = INT_MAX;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matriz[i][j] > *maior){
                *maior = matriz[i][j];
            }if(matriz[i][j] < *menor){
                *menor = matriz[i][j];
            }
        }
    }
}

int main(){
    int maior;
    int menor;

    int **matriz;
    matriz = gerarMatrizAleatoria(20, 50);
    analisarMatriz(matriz, &menor, &maior);

    printf("Menor: %d", menor);
    printf("Maior: %d", maior);



}
////////////// FIM INICIO EX 8



return 0;



