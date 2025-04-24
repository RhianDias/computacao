#include<stdio.h>
int main()
{

    int dist, minutos, segundos;
    int rit_min, rit_seg;

    printf("Digite a distancia percorrida(em km):");
    scanf ("%d", &dist);

    printf("Digite em quantos minutos voce percorreu:");
    scanf ("%d", &minutos);

    printf("Digite em quantos segundos voce percorreu:");
    scanf ("%d", &segundos);

    rit_min = (minutos / dist);
    minutos = (minutos * 60) + segundos;
    rit_seg = (minutos / dist) % 60;

    printf("Seu ritmo em minutos e segundos respectivamente foram:\n%.d:%.d\n", rit_min, rit_seg);



    return 0;

}
