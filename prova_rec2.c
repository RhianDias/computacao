#include<stdio.h>
int main()
{

    int base, inicio, fim;
    int soma;

    printf("Digite um numero base para servir de multiplo (dentro de um intervalo):");
    scanf ("%d", &base );

    printf("Digite o valor inicial do intervalo:");
    scanf ("%d", &inicio);

    printf("Digite o valor final do intervalo:");
    scanf ("%d", &fim);

    for (int i = inicio; i <= fim; i++)
    {
        if (i % base == 0){
            soma += i;
        }
    }

    printf ("A soma dos multiplos de %.d no intervalo eh:%.d \n", base, soma);


    return 0;


}
