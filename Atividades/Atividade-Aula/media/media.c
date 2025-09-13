#include <stdio.h>

int main() {
    int n;
    float soma = 0, media;

    printf("Quantos números você quer inserir? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float num;
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / n;
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
