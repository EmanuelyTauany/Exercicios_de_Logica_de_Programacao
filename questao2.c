//Faça um programa para ler uma quantidade N de números inteiros e armazená-los
//em um vetor. O programa deve trocar o menor elemento do vetor com o elemento da
//primeira posição, e imprimir o vetor resultante.

#include <stdio.h>

int main(){
 
   int N, menor=0, aux=0;

   printf("Digite quantos valores você deseja armazenar no vetor: ");
   scanf("%i", &N);

   int A[N];

   for(int i=0;i<N;i++){
    printf("Digite o %i valor do vetor:", i+1);
    scanf("%i", &A[i]);

   }
     menor = A[0];
   for(int i=1; i<N; i++){
     if(A[i] < menor){
        menor = A[i];
        
    }   
    }

   for(int i=0; i<N; i++){
      if(menor == A[i]){
        aux = A[0];
        A[i] = aux;
        A[0] = menor;

      }
   }

   for(int i=0; i<N; i++){
     printf("%i \n", A[i]);

   }

    return 0;
}


