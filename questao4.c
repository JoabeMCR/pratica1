#include <stdio.h>

int main() {

  float ICMS= 17.0f/100.0f;
  float COFINS= 7.6f/100.0f;
  float PISPASEP= 1.65f/100.0f;
  float preco_inicial= 15.50f;

  float preco_final= (1 + ICMS + COFINS + PISPASEP) * preco_inicial;

  printf("%f\n", preco_final);

  return 0;

}
