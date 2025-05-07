#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    int result = 0;
    printf("Digite 3 valos inteiros: \n");
    scanf("%d\n %d\n %d", &n1, &n2, &n3);

    result = n1 + n2 + n3;
    printf("A soma dos 3 numeoros é %d", result);

    return 0;

}
