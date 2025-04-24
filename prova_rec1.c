#include<stdio.h>
int main(){

  float altu, larg;
  float area, tinta;


  printf("Digite a altura da parede(em metros):");
  scanf ("%f", &altu);

  printf("Digite a largura da parede(em metros):");
  scanf ("%f", &larg);

  area = (altu * larg);
  printf ("Area da parede(em metros quadrados):%.2f\n", area);

  tinta = (area / 2);
  tinta = ceil(tinta);
  printf ("A quantidade de tinta necessaria(em litros) eh:%.2f\n", tinta);


  return 0;


 }
