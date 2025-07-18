//Faça um programa que leia a dimensão de uma matriz (de números inteiros) M e N, onde M é o
//número de linhas e N é o número de colunas. A seguir, leia os elementos da matriz, e calcule e
//exiba a soma dos elementos da coluna onde se encontra o maior elemento da matriz.

#include <stdio.h>

int main(){
    int M, N,c_maior=0;

        printf("Digite o número de linhas da matriz: ");
        scanf("%i", &M);
        printf("Digite o número de colunas da matriz: ");
        scanf("%i", &N);

        int A [M][N];

        printf("Digite os valores da matriz : \n");

        for(int i=0; i<M;i++){
         for(int j=0;j<N; j++){
            if(i>M){
            printf("\n");
            }
                                                                        
            scanf("%i", &A[i][j]);
           
           }
        }
        
        int maior = A[0][0], soma=0;

        for(int i=0; i<M; i++){
          for(int j=0;j<N;j++){
            if(maior < A[i][j]){
                maior = A[i][j];
                c_maior = j;

            }
          }                                                                                                                       
        }
        
        for(int i=0;i<M; i++){
           soma += A[i][c_maior]; 
        }
        printf("%i ", soma);

      return 0;
    }