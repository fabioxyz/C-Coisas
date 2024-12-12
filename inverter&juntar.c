#include <stdio.h>
#define TMAX 100
#include <string.h>

void mostra(char* frase) {
	char* pi;

	for (pi = frase; *pi != '\0'; pi++) {
		printf("%c", *pi);
	}
	printf("\n");
}

void junta(char destino[], char origem[]) {
	strcat(destino, origem);  // Junta frase2 ao final de frase3
}

void inverter(char *frase) {
	char* pi;
	int tamanho = strlen(frase);
	char *inicio = frase;

	for (pi = frase + tamanho; pi >= inicio; pi--) {
		printf("%c", *pi);
	}
	printf("\n\n");
}

int main() {
	char frase2[] = { "Engenharia Informatica" };
	char frase1[] = { "O meu curso e : " };
	char frase3[TMAX];
	
	mostra(frase1);
	mostra(frase2);

	strcpy(frase3, frase1);    // Inicializar frase3 com o conteúdo de frase1
	junta(frase3, frase2);
	printf("\nFrase junta : %s\n", frase3);
	printf("Frase invertida : ");
	inverter(frase3);

	return 0;
}
