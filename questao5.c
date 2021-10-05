#include <stdio.h>

int main(){

  float GB= 1024.0f * 1024.0f * 1024.0f;
  float valor_qualquer_em_GB= 500.0f;

float valor_em_bytes= (GB * valor_qualquer_em_GB);

printf("%f\n", valor_em_bytes);

return 0;

}