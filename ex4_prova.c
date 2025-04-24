#include <stdio.h>
int main()

{
    int num, i=1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while(i < num)
    {
        if (i % 2 <= 0)
        {
            printf("%d\n",i);
        }
        i=i+1;
    }

    return 0;
}
