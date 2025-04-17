#include <stdio.h>
int main()

{
    int i=0;
    float num, soma = 0.0;

    printf("Digite um numero positivo(Negativos nao irao ser somados):\n(-1000 para finalizar)\n");
    scanf("%f",&num);

    while (num != -1000)
    {
      if (num >= 0)
        soma += num;
        i++;
        scanf("%f", &num);
    }

    float media = soma / i;
    printf("A média é :%.1f\n", media);



return 0;
}
