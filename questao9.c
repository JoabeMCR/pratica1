#include <stdio.h>

int main() {

  float anos= 17.0f;
  float meses= 7.0f;
  float dias= 4.0f;

  float idade_em_dias= (anos * 365) + (meses * 30) + dias;

  printf("%f\n", idade_em_dias);

  return 0;
  
}