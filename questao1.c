#include <stdio.h>

int main(){
  int A[6], soma=0;

  A[0] = 1;
  A[1] = 0;
  A[2] = 5;
  A[3] = -2;
  A[4] = -5;
  A[5] = 7;
 
   soma = A[0]+A[1]+A[5];
   printf("%i \n", soma);
   
   A[4] = 100;
   for(int i=0;i<6;i++){
     printf("%i \n", A[i]);
   }

   return 0;
}
