#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nome[50];
    float nota1;
    float nota2;
} Aluno;

int menu(){
    int escolha;
    printf("\nEscolha uma opcao: \n\n");

    printf("1 - Cadastrar.\n");
    printf("2 - Atualizar Notas.\n");
    printf("3 - Mostrar dados.\n");
    printf("4 - Sair.\n");
    printf("ESCOLHA: ");
    setbuf(stdin,NULL);
    scanf("%d", &escolha);

    return escolha;
}

void cadastrar(Aluno *p_a1){
    printf("Digite o nome do aluno (sem espaços): ");
    scanf("%49s", p_a1->nome); // Lê apenas uma palavra (sem espaços)

    printf("Digite a nota1 do aluno: ");
    scanf("%f", &p_a1->nota1); //poderia ser &p_a1

    printf("Digite a nota2 do aluno: ");
    scanf("%f", &p_a1->nota2); //so pra mostrar outra forma
}

void atualizar_notas(Aluno *p_a1, int count){
    if(count == 0){
        printf("Nenhum aluno cadastrado! \n");
    }

    int index;
    printf("Digite o numero do aluno que deseja atualiza a nota ( 0 a %d ):", count);
    scanf("%d", &index);

    if(index < 0 || index >= count){
        printf("Indice invalido!\n");
        getchar();
        return;
    }

    printf("Nota1 atual: %.2f\n", p_a1[index].nota1);
    printf("Nota2 atual: %.2f\n", p_a1[index].nota2);


    printf("Digite a NOVA nota1 do aluno:");
    scanf("%f", &p_a1[index].nota1);

    printf("Digite a NOVA nota2 do aluno:");
    scanf("%f", &p_a1[index].nota2);
}

void mostrar_dados(Aluno *p_a1, int count){

    for(int i = 0; i < count; i++){
        printf("Nome: %s\n", p_a1[i].nome);
        printf("Nota 1: %.2f\n", p_a1[i].nota1);
        printf("Nota 2: %.2f\n", p_a1[i].nota2);
        printf("Media: %.2f\n", calcular_media(p_a1[i]));
        printf("\n\n\n");
    }
}

float calcular_media(Aluno aluno){
    return (aluno.nota1 + aluno.nota2) / 2;
}






int main()
{
    Aluno *p_a1;
    p_a1 = (Aluno *) malloc(sizeof(Aluno));

    int escolha;
    int count = 0;
    do{
        escolha = menu();

        switch(escolha){
            case 1:
                p_a1 = realloc(p_a1, (count + 1) * sizeof(Aluno));
                cadastrar(&p_a1[count]);
                count++;
                break;
            case 2:
                atualizar_notas(p_a1, count);
                break;
            case 3:
                mostrar_dados(p_a1, count);
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida!");

        }

    }while(escolha != 4);

    free(p_a1);
    return 0;
}
