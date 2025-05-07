#include <stdio.h>
#include <stdlib.h>

int main() {
    float k = 0;
    float m = 0;

    float ml = 0;
    float km = 0;

    printf("Digite uma velocidade em m/s para ser convertida para km/h: \n");
    scanf("%f", &m);

    k = m * 3.6;

    printf("\nA velocidade de %.2f m/s é %.2f km/h.\n", m, k);
    m = 0;

    printf("Digite uma velocidade em km/h para ser convertida para m/s: \n");
    scanf("%f", &k);

    m = k / 3.6;

    printf("\nA velocidade de %.2f km/h é %.2f m/s.\n", k, m);

    printf("Digite uma distancia em milhas para ser convertida para kilometros: \n");
    scanf("%f", &ml);

    km = 1.61 * ml;

    printf("A distancia de %.2f milhas equivale a %.2f kilometros. \n", ml, km);
    ml = 0;


    printf("Digite uma distancia em km para ser convertida para milhas: \n");
    scanf("%f", &km);

    ml = km / 1.61;

    printf("A distancia de %.2f km equivale a %.2f milhas. \n", km, ml);


    return 0;
}
