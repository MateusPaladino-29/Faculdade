#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Número em binário: %d\n", num);
    printf("Número em octal: %o\n", num);
    printf("Número em hexadecimal: %X\n", num);

    return 0;
}
