#include <stdio.h>

int calculaDigitoVerificador(int num)
{

    int x1 = num / 100;
    int x2 = (num / 10) % 10;
    int x3 = num % 10;


    int soma = 1 * x1 + 2 * x2 + 3 * x3;


    int digito = (soma % 11) % 10;

    return digito;
}

int main()
{

    printf("193 -> %d\n", calculaDigitoVerificador(193));
    printf("542 -> %d\n", calculaDigitoVerificador(542));
    printf("702 -> %d\n", calculaDigitoVerificador(702));
    printf("900 -> %d\n", calculaDigitoVerificador(900));

    return 0;
}
