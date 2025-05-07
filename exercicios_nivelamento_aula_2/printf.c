#include <stdio.h>
#include <stdlib.h>

int main(){
    int minhaIdade = 20;
    printf("Minha idade é %d anos\n", minhaIdade);

    char meuSexo = 'M';
    printf("Meu sexo é %c\n", meuSexo);

    float meuPeso = 70.5;
    printf("Meu peso é %.1f kg\n", meuPeso);


    printf("Minha idade é %d anos, e meu sexo é %c, e meu peso é %.1f kg\n", minhaIdade, meuSexo, meuPeso);
    system("pause");
    return 0;
}