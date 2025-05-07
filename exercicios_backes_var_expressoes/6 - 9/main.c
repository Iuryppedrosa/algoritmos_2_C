#include <stdio.h>
#include <stdlib.h>

int main(){

    float temp_celcius = 0;
    float temp_fh = 0;
    char user_answer;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &temp_celcius);

    temp_fh = (temp_celcius * 9) / 5 + 32;
    printf("A temperatura em Fahrenheit é: %f \n", temp_fh);

    printf("Deseja digitar uma temepratura em Fahrenheit p ver a conversao?");
    scanf(" %c", &user_answer);

    printf("Caractere lido: '%c' (%d)\n", user_answer, user_answer);
    if(user_answer == 's'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp_fh);

        temp_celcius = 5.0 * (temp_fh - 32.0) / 9.0;
        printf("A temperatura em Celcius é: %.3f \n", temp_celcius);
    } else {
        printf("Ok obrigado!!");
    }

    printf("Deseja digitar uma temepratura em  Kelvin p ver a conversao p/ Celcius? \n");
    scanf(" %c", &user_answer);
    if(user_answer == 's')
    {
        float temp_kelvin = 0;

        printf("Digite a temperatura em Kelvin: \n");
        scanf("%f", &temp_kelvin);

        temp_celcius = temp_kelvin - 273.15;
        printf("A temperatura em Celcius é: %.3f", temp_celcius);
    } else {
        printf("Ok obrigado!! \n");
    }

    printf("Deseja digitar uma temepratura em  Celcius p ver a conversao p/ Kelvin?");
    scanf(" %c", &user_answer);
    if(user_answer == 's')
    {
        temp_celcius = 0;
        float temp_kelvin = 0;

        printf("Digite a temperatura em Celcius: ");
        scanf("%f", &temp_celcius);

        temp_kelvin = temp_celcius + 273.15;
        printf("A temperatura em Kelvin é: %.3f", temp_kelvin);
    } else {
        printf("Ok obrigado!!");
    }

    return 0;
}
