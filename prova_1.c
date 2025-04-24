#include<stdio.h>
int main()
{

    float altu, base, peri;
    float area, porta = 0.8;

    printf("Digite a base do quarto(em metros):");
    scanf ("%f", &base);

    printf("Digite a altura do quarto(em metros):");
    scanf ("%f", &altu);

    peri = (2 * (base + altu));

    printf ("Perimetro total:%.2f\n", peri);

    printf ("Quantidade necessaria de rodape:%.2f\n", (peri-porta));

    area = (altu * base);
    printf ("Area da parede(em metros quadrados):%.2f\n", area);


    return 0;
}
