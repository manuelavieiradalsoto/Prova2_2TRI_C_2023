#include <stdio.h>
#include <ctype.h>

char subtrai_letra(int num, char letra) {
    int result;

    result = 100 - num;
    printf("Resultado da subtração: %d\n", result);

    if (letra >= 'a' && letra <= 'z') {
        letra = toupper(letra);
    }
    else if (letra >= 'A' && letra <= 'Z') {
        letra = tolower(letra);
    }

    return letra;
}

int main() {

    int num;
    char letra, resultado;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    printf("Digite uma letra:\n");
    scanf(" %c", &letra);

    resultado = subtrai_letra(num, letra);

    printf("Letra retornada: %c\n", resultado);

    return 0;
}
