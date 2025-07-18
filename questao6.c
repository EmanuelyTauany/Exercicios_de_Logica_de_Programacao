//Crie uma função int ehPrimo(int n) que verifica se um número é primo. 
//Retorna 1 se for primo, 0 caso contrário.

#include <stdio.h>
  int ehPrimo(int n){
    int y=0;
    if(n <=1) return 0;

    for(int i= 2; i<= n/2; i++){
        if(n % i ==0){
            return 0;
        }
    }
   
    return 1;

  };

  int main(){
    int valor, resp;  
    printf("Digite um valor inteiro: \n");
    scanf("%i", &valor);

    resp= ehPrimo(valor);

    printf("%i", resp);

    return 0;
  }  