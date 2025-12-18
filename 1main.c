#include <stdio.h>
#include <string.h>

int main() {

    char frase[100];
    char nome[] = "manuela";
    int cont[7] = {0};
    int i, j;

    printf("Digite uma frase:\n");
    scanf(" %s", frase);

    for (i = 0; frase[i] != '\0'; i++) {
        for (j = 0; j < 7; j++) {
            if (frase[i] == nome[j]) {
                cont[j]++;
            }
        }
    }

    printf("\nIncidência das letras do nome MANUELA:\n");
    for (j = 0; j < 7; j++) {
        printf("Letra %c: %d vezes\n", nome[j], cont[j]);
    }

    return 0;
}
