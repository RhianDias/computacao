#include <stdio.h>
#include <math.h>

int calc_raizes(float a, float b, float c, float *x1, float *x2)
{
    if (a == 0)
    {
        return 0;
    }

    float delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return 1;
    }
    else
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}

int main()
{
    float a, b, c, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    int resultado = calc_raizes(a, b, c, &x1, &x2);

    if (resultado == 0)
    {
        printf("Nao existem raizes reais.\n");
    }
    else if (resultado == 1)
    {
        printf("Uma raiz real: x = %.2f\n", x1);
    }
    else if (resultado == 2)
    {
        printf("Duas raizes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
