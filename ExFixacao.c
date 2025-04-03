#include<stdio.h>
int main(){

  float peso, alt , taxa;
  int idade, codigo;




  printf("Digite o Codigo:\n");
  scanf ("%d", &codigo);

  printf("Digite a idade, peso e a altura:\n");
  scanf ("%d %f %f", &idade, &peso, &alt);

  printf("Digite a taxa:\n");
  scanf ("%f", &taxa);

  printf ("Codigo: %d \n", codigo);
  printf ("Idade: %d \nPeso:%.2f\nAltura: %.2f\n", idade, peso, alt);
  printf ("Taxa: %.2f", taxa);

  return 0;


 }
