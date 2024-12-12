// inserir caracteres, ate inserir um '.' || Conta tudo.

#include <stdio.h>

int main() {

	char c;
	int letras = 0; int total = 0; int con = 0; int vog = 0;

	do {
		printf("caractere : ");
		scanf(" %c", &c);
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
			letras++;
		}
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			vog++;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			con++;
		}
		total++;
	} while (c != '.');

	total -= 1;

	printf(" - Total: %d\n", total);
	printf(" - Letras: %d (%.2f)\n", letras, (float)letras / total * 100);
	printf(" - Vogais: %d (%.2f)\n", vog, (float)vog / total * 100);
	printf(" - Consoantes: %d (%.2f)\n", con, (float)con / total * 100);

}
