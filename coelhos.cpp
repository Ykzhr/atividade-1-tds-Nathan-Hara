#include <stdio.h>

int main() {
    int geracoes;  
    int coelhos = 1;  

   
    printf("Digite o número de gerações: ");
    scanf("%d", &geracoes);

    
    for (int i = 1; i <= geracoes; i++) {
        printf("Geração %d: %d coelhos\n", i, coelhos);
        coelhos *= 2;  
    }
}

  
