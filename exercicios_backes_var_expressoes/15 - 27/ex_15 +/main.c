#include <stdio.h>
#include <stdlib.h>

int main()
{

    float graus;
    float PI = 3.14;
    float radianos = 0;

    printf("Digite um angulo em graus: \n");
    scanf("%f", &graus);
    radianos = graus * (PI / 180);
    printf("Angulo convertido em Radianos: %.4f \n", radianos);


    printf("Digite um angulo em Radianos: \n");
    scanf("%f", &radianos);
    graus = 0;
    graus = radianos * (180 / PI);
    printf("Angulo Radianos convertido em Graus: %.4f \n", graus);



    float polegadas;
    float centimetros;
    printf("Digite um cumprimento em polegadas: \n");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;
    printf("O valor em centimetros é %.2f \n", centimetros);

    printf("Digite um cumprimento em centimetros: \n");
    scanf("%f", &centimetros);
    polegadas = 0;
    polegadas = centimetros / 2.54;

    printf("O valor em polegadas é %.2f \n", polegadas);



    float mc;
    float litros;
    printf("Digite um volume em metros cubicos: \n");
    scanf("%f", &mc);

    litros = 1000 * mc;
    printf("O valor de %.2f em metros cubicos equivale a %.2f litros\n", mc, litros);

    printf("Digite um volume em metros litros: \n");
    scanf("%f", &litros);

    mc = 0;
    mc = litros / 1000;
    printf("O valor de %.2f em litros equivale a %.2f metros cubicos\n", litros, mc);





    float metros = 0;
    float jardas = 0;
    printf("Digite um cumprimento em JARDAS: \n");
    scanf("%f", &jardas);
    metros = 0.91 * jardas;

    printf("O cumprimento em %.2f JARDAS convertido para metros é: %.2f \n", jardas, metros);


    printf("Digite um cumprimento em METROS: \n");
    scanf("%f", &metros);
    jardas = 0;
    jardas = metros / 0.91;

    printf("O cumprimento em %.2f METROS convertido para JARDAS é: %.2f \n", metros, jardas );

    float m2 = 0;
    float acres = 0;
    printf("Digite um valor em m2:\n");
    scanf("%f", &m2);

    acres = m2 * 0.000247;
    printf("A area de %.2f m2 equivale a %.5f acres. \n", m2, acres);



    printf("Digite um valor em acres:\n");
    scanf("%f", &acres);

    m2 = 0;
    m2 = acres * 4048.58;
    printf("A area de %.5f em acres equivale a %.5f m2. \n", acres, m2);


    float hectares = 0;
    printf("Digite um valor em m2:\n");
    scanf("%f", &m2);


    hectares = m2 * 0.0001;
    printf("A area de %.5f em m2 equivale a %.5f hectares. \n", m2, hectares);

    printf("Digite um valor em hectares:\n");
    scanf("%f", &hectares);

    m2 = 0;
    m2 = hectares * 10000;
    printf("A area de %.5f em hectares equivale a %.5f m2. \n", hectares, m2);

    return 0;
}
