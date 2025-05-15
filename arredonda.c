#include <stdio.h>

int arredonda(float x)
{
    int inte = (int) x;
    float deci = x - inte;

    if (deci >= 0.5 || deci <= -0.5)
    {
        if (x > 0)
        {
            return inte + 1;
        }
        else
        {
            return inte - 1;
        }
    }
    return inte;
}

int main()
{
    float valor;

    printf("Digite um numero para arredondar: ");
    scanf("%f", &valor);
printf("O valor foi arredondado: %d\n", arredonda(valor));

return 0;
       }

