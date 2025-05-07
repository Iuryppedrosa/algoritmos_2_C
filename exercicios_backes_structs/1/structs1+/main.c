#include <stdio.h>
#include <stdlib.h>


struct Horario  {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data data;
    struct Horario horario;
    char descricao[100];

};

struct Endereco {
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[20];
};


struct Pessoa {
    char nome[10];
    int idade;
    struct Endereco end;
};

/*struct Aluno {
    char nome[100];
    int matricula;
    char curso[100];
};
*/

struct Aluno2{
    int matricula;
    char nome[50];
    float nota[3];
};

struct Vetor {
    float x;
    float y;
    float z;
};

struct Aluno {
    char nome[20];
    char cod_disciplina[20];
    float nota[2];
};



int main()
{
/*
    struct Compromisso comp;


    printf("Digite o dia: ");
    scanf("%d", &comp.data.dia);

    printf("Digite o mes: ");
    scanf("%d", &comp.data.mes);

    printf("Digite o ano: ");
    scanf("%d", &comp.data.ano);


    // horario
    printf("Digite a hora: ");
    scanf("%d", &comp.horario.hora);

    printf("Digite os minutos: ");
    scanf("%d", &comp.horario.minutos);

    printf("Digite os segundos: ");
    scanf("%d", &comp.horario.segundos);

    // Limpando buffer do teclado antes de usar fgets
    getchar();

    printf("Digite um compromisso: ");
    fgets(comp.descricao, sizeof(comp.descricao), stdin);

    comp.descricao[strcspn(comp.descricao, "\n")] = 0;

    // Exibindo os dados coletados
    printf("\n--- Compromisso Agendado ---\n");
    printf("Data: %02d/%02d/%04d\n", comp.data.dia, comp.data.mes, comp.data.ano);
    printf("Horario: %02d:%02d:%02d\n", comp.horario.hora, comp.horario.minutos, comp.horario.segundos);
    printf("Descricao: %s\n", comp.descricao);



    struct Pessoa p;

    printf("Digite seu nome: ");
    fgets(&p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = 0;  // Remove o \n do final

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    getchar();
    printf("Digite a sua rua: ");
    fgets(p.end.rua, sizeof(p.end.rua), stdin);
    p.end.rua[strcspn(p.end.rua, "\n")] = 0;  // Remove o \n do final

    printf("Digite o seu bairro: ");
    fgets(p.end.bairro, sizeof(p.end.bairro), stdin);
    p.end.bairro[strcspn(p.end.bairro, "\n")] = 0;

    printf("Digite a sua cidade: ");
    fgets(p.end.cidade, sizeof(p.end.cidade), stdin);
    p.end.cidade[strcspn(p.end.cidade, "\n")] = 0;

    printf("Digite o numero da sua casa: ");
    scanf("%d", &p.end.numero);

    printf("------ DADOS PESSOA ----- \n");
    printf("Nome: %s, de idade %d.\nCom endereco na rua %s, bairro %s, em %s, com numero %d"
    ,p.nome, p.idade, p.end.rua, p.end.bairro, p.end.cidade, p.end.numero);


    struct Aluno aluno[5];


    for(int i = 0; i < 5; i++){
        printf("Digite seu nome: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;

        printf("Digite sua matricula: ");
        scanf("%d", &aluno[i].matricula);
        getchar();

        printf("Digite o seu curso: ");
        fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
        aluno[i].curso[strcspn(aluno[i].curso, "\n")] = 0;
    }

    for(int i = 0; i < 5; i++){
        printf("Nome aluno %d: %s\n", i, aluno[i].nome);
        printf("Matricula aluno %d: %d\n", i, aluno[i].matricula);
        printf("Curso aluno %d: %s\n\n\n", i, aluno[i].curso);
    }



    struct Aluno2 alunos[3];
    float maiorNotaPrimeiraProva = 0.0;
    int indiceMaiorNota = 0;
    float maiorMedia = 0.0, menorMedia = 10.0;
    int indiceMaiorMedia = 0, indiceMenorMedia = 0;


    for(int i = 0; i < 3; i++){
        printf("\n--- Cadastro do aluno %d ---\n", i + 1);

        printf("Digite o nome do aluno: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;

        printf("Digite sua matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        for (int j = 0; j < 3; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &alunos[i].nota[j]);
        }
        getchar();
    }

    for(int i = 0; i < 3; i++){
        float somaNotas = alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2];
        float media = somaNotas / 3.0;

        if (alunos[i].nota[0] > maiorNotaPrimeiraProva) {
            maiorNotaPrimeiraProva = alunos[i].nota[0];
            indiceMaiorNota = i;
        }

        // (c) Maior média geral
        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }

        // (d) Menor média geral
        if (media < menorMedia) {
            menorMedia = media;
            indiceMenorMedia = i;
        }
    }
     printf("\n======= RESULTADOS =======\n");

    // Exibir aluno com maior nota na primeira prova
    printf("\nAluno com maior nota na primeira prova: %s (%.2f)\n",
           alunos[indiceMaiorNota].nome, maiorNotaPrimeiraProva);

    // Exibir aluno com maior média
    printf("Aluno com maior média: %s (%.2f)\n",
           alunos[indiceMaiorMedia].nome, maiorMedia);

    // Exibir aluno com menor média
    printf("Aluno com menor média: %s (%.2f)\n",
           alunos[indiceMenorMedia].nome, menorMedia);

    // Exibir aprovação ou reprovação de cada aluno
    printf("\n===== STATUS DOS ALUNOS =====\n");
    for (int i = 0; i < 3; i++) {
        float media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2]) / 3.0;

        printf("\nAluno: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média: %.2f\n", media);
        if (media >= 6.0) {
            printf("Status: APROVADO \n");
        } else {
            printf("Status: REPROVADO \n");
        }
        }


    struct Vetor v[3] = {{2, 3, 4}, {5, 6, 7}, {0, 0, 0}};

    // Somando os dois primeiros vetores e armazenando em v[2]
    v[2].x = v[0].x + v[1].x;
    v[2].y = v[0].y + v[1].y;
    v[2].z = v[0].z + v[1].z;

    for(int i = 0; i < 2; i++){
        v[2].x += v[i].x;
        v[2].y += v[i].y;
        v[2].z += v[i].z;
    }

    // Exibindo o vetor resultante
    printf("Vetor Resultante:\n");
    printf("x = %.2f\n", v[2].x);
    printf("y = %.2f\n", v[2].y);
    printf("z = %.2f\n", v[2].z);

    */

    struct Aluno aluno[10];
    float media;
    float p1 = 1.0;
    float p2 = 2.0;

    for(int i = 0; i < 10; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        //getchar();
        scanf("%s", aluno[i].nome);
        //fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        //aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;

        printf("Digite o codigo do aluno %d: ", i + 1);
        scanf("%s", aluno[i].cod_disciplina);
        //fgets(aluno[i].cod_disciplina, sizeof(aluno[i].cod_disciplina), stdin);

        for(int j = 0; j < 2; j++){
            printf("Digite a nota %d para o aluno %d: ", j + 1, i + 1);
            scanf("%f", &aluno[i].nota[j]);
        }

    }
    printf("----MEDIAS PONDERADAS POR ALUNO-----");

    for(int i = 0; i< 10; i++){
        media = (aluno[i].nota[0] * p1 + aluno[i].nota[1] * p2) / p1 + p2;

        printf("\nAluno: %s\n", aluno[i].nome);
        printf("Código da disciplina: %s\n", aluno[i].cod_disciplina);
        printf("Média final: %.2f\n", media);
    }




    return 0;
}

