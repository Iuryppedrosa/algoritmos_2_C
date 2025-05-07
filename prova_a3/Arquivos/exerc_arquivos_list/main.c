#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[41];
    int habitantes;
} Cidade;

typedef struct{
    char nomes[41];
    char telefones[20];
} Cadastro;

int main()
{

    //INICIO EXERCICIO 1
    printf("Hello world!\n");
    FILE *fp;
    char c;
    fp = fopen("entrada.txt", "rb");

    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    //forma 1
    while((c = fgetc(fp)) != EOF){
      printf("%c", c);
    }


    while(feof(fp) == 0){
      c = fgetc(fp);
      printf("%c", c);
    }

    //forma 2
    for(int i = 0; i < 10; i++){
        c = fgetc(fp);
        printf("%c", c);
    }

    fclose(fp);


    //FIM EXERCICIO 1




    //INICIO EXERCICIO 2
    FILE *acessa_origem;
    char conteudo_arquivo_entrada;

    FILE *arquivo_destino;
    char conteudo_arquivo_saida;


    acessa_origem = fopen("entrada.txt", "r");
    arquivo_destino = fopen("saida.txt", "w");

    if(acessa_origem == NULL){
        printf("Erro ao acessar o arquivo!");
        exit(1);
    }

    while(feof(acessa_origem) == 0){
        conteudo_arquivo_entrada = fgetc(acessa_origem);
        fputc(conteudo_arquivo_entrada, arquivo_destino);
    }

    fclose(arquivo_destino);
    fclose(acessa_origem);

    arquivo_destino = fopen("saida.txt", "r");
    while(feof(arquivo_destino) == 0){
        conteudo_arquivo_saida = fgetc(arquivo_destino);
        printf("%c", conteudo_arquivo_saida);
    }
    fclose(arquivo_destino);
    //FIM EXERCICIO 2


    // INICIO EXERCICIO 3


    FILE *arquivo_entrada;
    int count = 0;
    arquivo_entrada = fopen("entrada.txt", "r");
    char conteudo_arq_entrada;

    while(feof(arquivo_entrada) == 0){
        conteudo_arq_entrada = fgetc(arquivo_entrada);
        if(conteudo_arq_entrada == 'a' || conteudo_arq_entrada == 'A'){
            count++;
        }
    }
    printf("Contagem: %d", count);
    fclose(arquivo_entrada);
    //FIM EXERCICIO 3

    // INICIO EXERCICIO 4.


    FILE *arquivo_entrada;
    char conteudo_arquivo;

    arquivo_entrada = fopen("entrada.txt", "r");
    if(arquivo_entrada == NULL){
        printf("Erro ao abrir arquivo");
        exit(1);
    }
    // ou
    // while(conteudo_arquivo != EOF)
    while(feof(arquivo_entrada) == 0){
        conteudo_arquivo = fgetc(arquivo_entrada);
        printf("%c", conteudo_arquivo);
    }

    fclose(arquivo_entrada);
    //FIM EXERCICIO 4



    // INICIO EXERCICIO 5

    FILE *arquivo_destino;
    char conteudo_ar_destino;
    char palavra;
    arquivo_destino = fopen("entrada.txt", "a");
    if(arquivo_destino == NULL){
        printf("problema ao abrir arquivo.");
        exit(1);
    }
    printf("Digite uma frase ai: ");
    scanf("%s", palavra);
    fputs(palavra, arquivo_destino);

    fclose(arquivo_destino);

    arquivo_destino = fopen("entrada.txt", "r");
    while(feof(arquivo_destino) == 0){
        conteudo_ar_destino = fgetc(arquivo_destino);
        printf("%c", conteudo_ar_destino);
    }

    fclose(arquivo_destino);

    //FIM EXERCICIO 5


    // INICIO EXERCICIO 6

    FILE *ler_arquivo;
    char linha[5000];
    char conteudo_arquivo;
    int count = 0;

    ler_arquivo = fopen("entrada.txt", "r");

    if(ler_arquivo == NULL){
        printf("Erro ao ler arquivo!");
        exit(1);
    }

    while(feof(ler_arquivo) == 0){
        fgets(linha, sizeof(linha),ler_arquivo);
        count++;
        printf("linha: %d: %s\n", count, linha);
    }
    printf("%d", count);

    fclose(ler_arquivo);
    //FIM EXERCICIO 6

    // INICIO EXERCICIO 7
    FILE *ler_arquivo;
    FILE *arquivo_destino;
    FILE *arquivo_modificado;
    char caracteres;
    char caracteres_modificados;
    ler_arquivo = fopen("entrada.txt", "r");
    if(ler_arquivo == NULL){
       printf("Erro ao abrir o arquivo.");
    }
    arquivo_destino = fopen("saida.txt", "w");
    if(ler_arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
    }

    while(feof(ler_arquivo) == 0){
        caracteres = fgetc(ler_arquivo);
        if(caracteres == 'e'){
            caracteres = '3';
        }
        fputc(caracteres, arquivo_destino);
    }

    fclose(ler_arquivo);
    fclose(arquivo_destino);

    arquivo_modificado = fopen("saida.txt", "r");
    if(arquivo_modificado == NULL){
        printf("Erro ao abrir o arquivo.");
    }
    while((caracteres_modificados = fgetc(arquivo_modificado)) != EOF){
        printf("%c", caracteres_modificados);
    }
    fclose(arquivo_modificado);

    // FIM EXERCICIO 7

    // INICIO EXERCICIO 8
    // FIM EXERCICIO 8


    // INICIO EXERCICIO 9

    FILE *leitura_arquivo;
    char palavra[50];
    int count_maior_5 = 0;
    int count_3_5 = 0;
    int total = 0;

    leitura_arquivo = fopen("palavras_computacao.txt", "r");
    if(leitura_arquivo == NULL){
        printf("Erro de leitura");
        exit(1);
    }

    while((fgets(palavra, 50, leitura_arquivo)) != NULL){

            if (palavra[strlen(palavra) - 1] == '\n') {
                palavra[strlen(palavra) - 1] = '\0'; // Remove o '\n'
            }


          if(strlen(palavra) > 5){
            count_maior_5++;
            printf("Maior que 5: %s\n", palavra);
          }

          if(strlen(palavra) <= 5 && strlen(palavra) >= 3){
            count_3_5++;
              printf("Menor que 5 e maior que 3:%s\n", palavra);
          }

          total++;

    }
    fclose(leitura_arquivo);

    printf("Maior que 5: %d\n", count_maior_5);
    printf("Entre 3 e 5: %d\n", count_3_5);
    printf("Total: %d", total);

    // FIM EXERCICIO 9

    // INICIO EXERCICIO 10
    FILE *arquivo_entrada;
    arquivo_entrada = fopen("entrada.txt", "r");
    char palavras;
    int count = 0;

    while(feof(arquivo_entrada) == 0){
        palavras = fgetc(arquivo_entrada);
        if(palavras == 'r'){
            count++;
        }
    }
    printf("Quantidade letras r: %d", count);

    //FIM EXERCICIO 10;

    // INICIO EXERCICIO 11
    FILE *arquivo_entrada;
    FILE *arquivo_entrada_2;
    FILE *arquivo_copia_entrada;
    FILE *arquivo_copia_entrada_2;

    char linha[100];
    char linha2[100];
    arquivo_entrada = fopen("entrada.txt", "r");
    arquivo_entrada_2 = fopen("palavras_computacao.txt", "r");

    arquivo_copia_entrada = fopen("entrada_copy.txt", "w");
    arquivo_copia_entrada_2 = fopen("palavras_computacao_copy.txt", "w");

    if(arquivo_entrada == NULL){
        printf("Erro ao abrir arquivo 1");
    }

    if(arquivo_copia_entrada == NULL){
        printf("Erro ao abrir arquivo 2");
    }

    while(feof(arquivo_entrada) == 0){
        fgets(linha, 50, arquivo_entrada);
        fputs(linha, arquivo_copia_entrada);
    }


    while(feof(arquivo_entrada_2) == 0){
        fgets(linha2, 50, arquivo_entrada_2);
        fputs(linha2, arquivo_copia_entrada_2);
    }

    printf("Fim!");

    fclose(arquivo_entrada);
    fclose(arquivo_copia_entrada);
    fclose(arquivo_entrada_2);
    fclose(arquivo_copia_entrada_2);

    // FIM EXERCICIO 11

    // INICIO LISTA ARQUIVOS 2
    // INICIO EXERCICIO 1


    FILE *arquivo_escrita;
    FILE *arquivo_leitura;
    arquivo_escrita = fopen("saida_ex_1.txt", "w");
    char caracteres_usuario[500];

    char saida_apos_salvo;
    if(arquivo_escrita == NULL){
        printf("Erro de escrita");
        exit(1);
    }

    int user_response = 1;
    printf("Digite o que quiser: ");
    fgets(caracteres_usuario, sizeof(caracteres_usuario), stdin);

    fputs(caracteres_usuario, arquivo_escrita);

    fclose(arquivo_escrita);
    arquivo_leitura = fopen("saida_ex_1.txt", "a");

    if(arquivo_leitura == NULL){
        printf("Erro de leitura");
        exit(1);
    }
    do{

        printf("Deseja sair? 0 -> sim: ");

        scanf("%d", &user_response);
        getchar();
        printf("Digite o que quiser: ");
        fgets(caracteres_usuario, sizeof(caracteres_usuario), stdin);
        fputs(caracteres_usuario, arquivo_leitura);

    }while(user_response != 0);

    fclose(arquivo_leitura);
    arquivo_leitura = fopen("saida_ex_1.txt", "r");


    printf("\nConteúdo salvo:\n");

    while((saida_apos_salvo = fgetc(arquivo_leitura)) != EOF){
        printf("%c", saida_apos_salvo);
    }

    fclose(arquivo_leitura);

    // FIM EXERCICIO 1

    // INICIO EXERCICIOS 2, 3, 4, 5, 6

    FILE *ler_arquivo;
    char char_atual;
    char caractere_usuario;
    int linhas = 0;
    int vogais = 0;
    char consoantes[] = "bcdfghjklmnpqrstvxz";
    int consoantes_count = 0;
    int caractere_usuario_count = 0;

    ler_arquivo = fopen("texto_ex_2_3_4_5_6.txt", "r");
    if(ler_arquivo == NULL){
        printf("Erro ao ler arquivo");
        exit(1);
    }
    printf("Qual caractere vc quer verificar no programa? ");
    scanf("%c", &caractere_usuario);

    while((char_atual = fgetc(ler_arquivo)) != EOF){
        if(char_atual == '\n'){
            linhas++;
        }
        if(char_atual == 'a' || char_atual == 'e' || char_atual == 'i' || char_atual == 'o' || char_atual == 'u'){
            vogais++;
        }
        for(int i = 0; i < strlen(consoantes); i++){
            if(consoantes[i] == char_atual){
                consoantes_count++;
            }
        }
        if(caractere_usuario == char_atual){
            caractere_usuario_count++;
        }
    }
    fclose(ler_arquivo);

    printf("linhas: %d\n", linhas);
    printf("vogais: %d\n", vogais);
    printf("consoantes_count: %d\n", consoantes_count);
    printf("caractere_usuario_count: %d\n", caractere_usuario_count);



    // FIM EXERCICIOS 2, 3, 4, 5, 6

    //INICIO EXERCICIO 7
    FILE *arquivo_leitura;
    FILE *arquivo_escrita;
    char nome_arquivo[50];
    char char_leitura;
    char vogais[] = "aeiou";
    printf("Qual o nome do arquivo que deseja ler? ");
    scanf("%s", nome_arquivo);

    printf("%s", nome_arquivo);
    arquivo_leitura = fopen(nome_arquivo, "r");
    if(arquivo_leitura == NULL){
        printf("Erro de leitura");
        exit(1);
    }
    arquivo_escrita = fopen("saida_ex_7_lista_2.txt", "w");
    if(arquivo_escrita == NULL){
        printf("Erro de escrita");
        exit(1);
    }

    while((char_leitura = fgetc(arquivo_leitura)) != EOF){
        int is_vogal = 0;
        for(int i = 0; i < strlen(vogais); i++){
            if(vogais[i] == char_leitura){
                fputc('*', arquivo_escrita);
                is_vogal = 1;
            }
        }
        if(is_vogal == 0)
        {
            fputc(char_leitura, arquivo_escrita);
        }

    }
    fclose(arquivo_leitura);
    fclose(arquivo_escrita);
    //FIM INICIO EXERCICIO 7

    // INICIO EXERCICIO 8
    FILE *arquivo_leitura;
    FILE *arquivo_escrita;
    char caracteres_arquivos;
    char upper_caracteres;
    arquivo_leitura = fopen("exercicio7.txt", "r");
    arquivo_escrita = fopen("saida_exercicio_8.txt", "w");

    if(arquivo_leitura == NULL || arquivo_escrita == NULL){
        printf("Erro de leitura ou escrita de arquivo");
    }

    while((caracteres_arquivos = fgetc(arquivo_leitura)) != EOF){
        upper_caracteres = toupper(caracteres_arquivos);
        fputc(upper_caracteres, arquivo_escrita);
    }

    fclose(arquivo_leitura);
    fclose(arquivo_escrita);
    // FIM EXERCICIO 8

    // INICIO EXERCICIO 9:
    FILE *arquivo_entrada_1;
    FILE *arquivo_entrada_2;
    FILE *arquivo_saida;

    char caracteres_arquivos;

    arquivo_entrada_1 = fopen("entrada.txt", "r");
    arquivo_entrada_2 = fopen("exercicio7.txt", "r");

    if(arquivo_entrada_1 == NULL){
        printf("Erro primeira leitura!");
    }

    if(arquivo_entrada_2 == NULL){
        printf("Erro segunda leitura");
    }

    arquivo_saida = fopen("saida_ex_9", "w");

    while((caracteres_arquivos = fgetc(arquivo_entrada_1)) != EOF){
          fputc(caracteres_arquivos, arquivo_saida);
    }

    while((caracteres_arquivos = fgetc(arquivo_entrada_2)) != EOF){
          fputc(caracteres_arquivos,arquivo_saida);
    }
    // FIM EXERCICIO 09

    //INICIO EXERCICIO 10:
    FILE *arquivo_entrada;
    arquivo_entrada = fopen("arquivo_entrada_struct.txt", "r");
    FILE *arquivo_saida;
    arquivo_saida = fopen("arquivo_saida_struct.txt", "w");

    FILE *saida_struct_binaria;
    saida_struct_binaria = fopen("saida_struct_binaria", "wb");

    Cidade cidade[5];
    int total_cidades = 0;
    int maior_cidade = 0;

    if(arquivo_saida == NULL){
        printf("Erro ao escrever arquivo!");
    }


    if(arquivo_entrada == NULL){
        printf("Erro ao ler arquivo!");
    }

    while((fscanf(arquivo_entrada, "%40[^\n] %d", cidade[total_cidades].nome, cidade[total_cidades].habitantes)) == 2){
            total_cidades++;
    }
    fclose(arquivo_entrada);

    for(int i = 1; i < total_cidades; i ++){
        if(cidade[i].habitantes > cidade[maior_cidade].habitantes){
            maior_cidade = i;
        }
    }

    fprintf(arquivo_saida, "%s %d\n", cidade[maior_cidade].nome, cidade[maior_cidade].habitantes);
    fclose(arquivo_saida);

    if(saida_struct_binaria == NULL){
        printf("Erro ao escrever em arquivo binario.");
    }

    fwrite(&cidade[maior_cidade], sizeof(Cidade), 1, saida_struct_binaria);
    printf("Processo concluído. Arquivos gerados!\n");

    // INICIO EXERCICIO 13
    FILE *escrever_cadastro;
    Cadastro *cadastro;
    int escolha_usuario = 0;
    escrever_cadastro = fopen("arquivo_ex_13", "w");

    cadastro = (Cadastro *) malloc(1 * sizeof(Cadastro));

    while(1){
        printf("Digite o nome: ");
        fgets(cadastro->nomes, 50, stdin);
        printf("Digite o telefone: ");
        fgets(cadastro->telefones, 50, stdin);

        fputs

        printf("Deseja cadastrar mais? (1 - para sair)");
        scanf("%d", &escolha_usuario);
        if(escolha_usuario == 1){
            break;
        }
    }


    return 0;
}
