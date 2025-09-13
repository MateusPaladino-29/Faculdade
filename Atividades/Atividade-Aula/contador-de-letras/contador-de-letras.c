#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[100];
    int vogais = 0, consoantes = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } else if ((c >= 'a' && c <= 'z')) {
            consoantes++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
