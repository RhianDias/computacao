#include<stdio.h>
int main()
{

    int forca, nivel;
    float crit, dano;

    printf("Digite a forca do personagem(1 a 100):");
    scanf ("%d", &forca);

    while (forca < 1 || forca >100)
    {
        printf("O valor pedido deve ser entre 1 e 100, digite novamente:");
        scanf ("%d", &forca);
    }

    printf("Digite o nivel da arma(1 a 50):");
    scanf ("%d", &nivel);

    while (nivel < 1 || nivel >50)
    {
        printf("O valor pedido deve ser entre 1 e 50, digite novamente:");
        scanf ("%d", &nivel);
    }


    printf("Digite o multiplicador de critico (numero real entre 1.0 e 2.0):");
    scanf ("%f", &crit);

    while (crit < 1.0 || crit >2.0)
    {
        printf("O valor pedido deve ser entre 1.0 e 2.0, digite novamente:");
        scanf ("%f", &crit);
    }

    dano = (forca * nivel * crit);

    printf ("Seu dano total foi:%.2f", dano);

    if (dano <= 1000)
        printf(" (Dano normal)");
     else if (dano > 1000 && dano <= 5000)
         printf(" (DANO CRITICO!!!)");
     else if (dano > 5000)
         printf(" (DANO CRITICO MASSIVO!!!)");

        return 0;

}
