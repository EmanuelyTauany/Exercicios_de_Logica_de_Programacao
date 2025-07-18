//Faça um programa que leia a dimensão de uma matriz de inteiros M e N, onde M é
//o número de linhas e N é o número de colunas. A seguir, leia os elementos da matriz,
//conte e escreva quantos valores maiores que 10 ela possui.

#include <stdio.h>

int main(){
    int M, N;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%i", &M);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%i", &N);
    
    int A[M][N], mdez=0;

    printf("Digite os valores da matriz: \n");

    for(int i=0; i<M; i++){
      for(int j=0; j<N; j++){
        scanf("%i", &A[i][j]);

        if(A[i][j] > 10){
          mdez++;
        }
      }
    }

    printf("Esta matriz possui %i elemento(s) maiores que 10.", mdez);
    

}