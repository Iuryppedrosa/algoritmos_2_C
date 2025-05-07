#include <stdio.h>
#include <stdlib.h>

int somaRecursiva(int n){
    if(n == 0){
        return 0;
    }
    return n + somaRecursiva(n - 1);
}

int main()
{
    printf("Hello world!\n");
    int valor = 0;
    valor = somaRecursiva(15);

    printf("%d", valor);
    return 0;
}
