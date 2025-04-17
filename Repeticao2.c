#include <stdio.h>

int main() {
    int i = 0;
    float num = 0.0, soma = 0.0;

    printf("Digite um numero positivo (negativos nao irao ser somados):\n(-1000 para finalizar)\n");
    scanf("%f", &num);

    while (num != -1000) {
        if (num >= 0) {
            soma += num;
            i++;
        } else {
            printf("Numeros negativos nao serao somados, digite outro numero:\n");
        }
        printf("Digite um numero positivo (negativos nao irao ser somados):\n(-1000 para finalizar)\n");
        scanf("%f", &num);
    }

    if (i > 0) {
        float media = soma / i;
        printf("A media e: %.1f\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
