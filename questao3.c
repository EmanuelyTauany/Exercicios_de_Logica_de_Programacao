#include <stdio.h>

int main(){
  int A[8], neg=0, posi=0;
  
  for(int i=0; i<8;i++){
    printf("Digite o %i° valor: ", i+1);
    scanf("%i", &A[i]);

    if(A[i] <0){
     neg++;
    }else{
        posi++;
    }
  }

  int B[neg], C[posi], y=0, j=0;

  for(int i=0;i<8;i++){
     if(A[i] < 0){
       B[y] = A[i];
       y++;
     }else{
       C[j] = A[i];
       j++;
     }
  }


  printf("\nVetor dos valores positivos: \n");

  for(int i=0; i<posi; i++){
    printf("%i ", C[i]);
  }

  printf("\nVetor dos números negativos: \n");

  for(int i=0; i<neg; i++){
    printf("%i ", B[i]);
  }

}