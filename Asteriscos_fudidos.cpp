#include <stdio.h>

int main() {

	int linhas_legais;
	

	printf("digite a quantidade de linhas por favorzinho da silva:");
	scanf("%d", &linhas_legais);

	for(int qtd_linhas= 0; qtd_linhas <= linhas_legais; qtd_linhas++) {
		for(int espacos_fudidos = qtd_linhas; espacos_fudidos <= linhas_legais - 1;espacos_fudidos++ ){
		   printf(" ");
		}
		for(int asteriscos_fudidos = 1; asteriscos_fudidos <= qtd_linhas + qtd_linhas - 1; asteriscos_fudidos++) {
		   printf("*");
		}
		printf("\n");
	}



}

