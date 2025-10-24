#include <stdio.h>

int main() {
    int linhas_legais;
    int numerozinho = 1;

    
    printf("Digite a quantidade de linhas, por favorzinho da Silva: ");
    scanf("%d", &linhas_legais);

    for (int qtd_linhas = 1; qtd_linhas <= linhas_legais; qtd_linhas++) {
        
        
        for (int contador_dnmr = 0; contador_dnmr < qtd_linhas; contador_dnmr++) {
            printf("%d ", numerozinho);  
            numerozinho++;
        }

        
        printf("\n");
    }

    return 0;
}


