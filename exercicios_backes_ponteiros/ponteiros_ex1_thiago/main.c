#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ex 1, 3, 4


   int A = 10;
   int B = 20;
   int maior = 0;

   unsigned int end_a = &A;
   unsigned int end_b = &B;

   if(&A > &B){
    printf("(MAIOR) Endereco de A: %u \n", &A);
    printf("Valor: %d", A);
   }else{
    printf("(MAIOR) Endereco de B: %u  \n", &B);
    printf("Valor: %d", B);
   }


   // ex 2
   int var_1 = 60;
   double var_2 = 10.0;
   char var_3 = 'G';

   int *p_var_1 = NULL;
   double *p_var_2 = NULL;
   char *p_var_3 = NULL;

   p_var_1 = &var_1;
   p_var_2 = &var_2;
   p_var_3 = &var_3;

   printf("var_1: %d \n", var_1);
   printf("var_2: %f \n", var_2);
   printf("var_3: %c \n", var_3);

   printf("-------------- \n");

   *p_var_1 = 90;
   *p_var_2 = 110.0;
   *p_var_3 = 'I';

   printf("var_1: %d \n", var_1);
   printf("var_2: %f \n", var_2);
   printf("var_3: %c \n", var_3);



   printf("Fim!");
    return 0;
}
