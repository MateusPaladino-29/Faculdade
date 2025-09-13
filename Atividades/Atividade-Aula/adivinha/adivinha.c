#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, tentativa;

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numero = rand() % 100 + 1;  // Número aleatório entre 1 e 100

    printf("Adivinhe o número entre 1 e 100: ");
    do {
        scanf("%d", &tentativa);
        if (tentativa > numero)
            printf("Menor! Tente novamente: ");
        else if (tentativa < numero)
            printf("Maior! Tente novamente: ");
    } while (tentativa != numero);

    printf("Parabéns! Você acertou!\n");
    return 0;
}
