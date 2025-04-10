#include<stdio.h>
int main()
{

    float n1, n2, n3,
          media;
    float total, presen, faltas, freq;

    printf("Digite suas tres notas:");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite o total de aulas e suas presencas:");
    scanf("%f %f", &total, &presen);

    // faltas = (total - presen);
    freq = (presen / total) * 100;
    printf ("Sua frequencia: %.2f%%\n", freq);
    media = (n1 + n2 + n3) / 3;
    printf ("Sua nota: %.2f\n", media);




    if (media > 8 && freq >= 75)
        printf ("O estudante foi aprovado com destincao pois teve media %.2f e frequencia %.2f%%)%.", media, freq);

    else if (media >=6 && freq >= 75)
        printf ("O estudante foi aprovado direto pois teve media %.2f e frequencia %.2f%%)%.", media, freq);

    else if ((media >=4 &&  freq >= 75) || (media >=6 &&  freq <  75) || (media >=4 &&  freq > 50))
        printf ("O estudante vai para a final pois teve media %.2f e frequencia %.2f%%)%.", media, freq);

    else
        printf ("O estudante foi reprovado direto pois teve media %.2f e frequencia %.2f%%)%.", media, freq);


    return 0;


}
