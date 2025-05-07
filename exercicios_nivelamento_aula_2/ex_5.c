#include<stdio.h>
#include<stdlib.h>

int main(){

    struct Carro {
        char marca[20];
        char modelo[20];
        int ano;
        float preco;
    };

    struct Carro carros[2];

    carros[0].ano = 2010;
    carros[0].preco = 20000;
    // destino, origem
    strcpy(carros[0].marca, "Fiat");
    strcpy(carros[0].modelo, "Uno");

    carros[1].ano = 2015;
    carros[1].preco = 30000;
    strcpy(carros[1].marca, "Ford");

    carros[2].ano = 2018;
    carros[2].preco = 40000;
    strcpy(carros[2].marca, "Chevrolet");

    printf("Digite o valor para um carro: ");
    float valor;
    scanf("%f", &valor);
    int lengthCarros = strlength(carros);

    for(int i = 0; i <= lengthCarros; i++){
        if(carros[i].preco <= valor){
            printf("Marca: %s\n", carros[i].marca);
            printf("Modelo: %s\n", carros[i].modelo);
            printf("Ano: %d\n", carros[i].ano);
            printf("Preco: %.2f\n", carros[i].preco);
            printf("\n");
        }
    }



    system("pause");
    return 0;
}