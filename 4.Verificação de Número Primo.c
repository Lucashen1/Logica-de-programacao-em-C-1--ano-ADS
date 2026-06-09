/**
ALUNO: Lucas Henrique Dutra de Oliveira
DATA: 03/06/2026
OBJ: funcao que acha maior valor do vetor
**/
#include<stdio.h>
int ehPrimo(int numero);

int main(){
    int numEscolhido, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numEscolhido);

    resultado = ehPrimo(numEscolhido);

    if(resultado==1){
        printf("e primo.");
    } else{
        printf("nao primo.");
    }
    return 0;
}
int ehPrimo(int numero){
    int x;
    if(numero <=1){
        return 0;
    }
    for( x=2; x*x<=numero; x++){
        if(numero%x==0){
            return 0;
        }
    }
    return 1;
}
