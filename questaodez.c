#include <stdio.h>

int main() {

  int numero= 8941;

  int unidade= numero % 10;
  int numero1= (numero - unidade)/10;

  int dezena= numero % 10;
  int numero2= (numero - dezena)/10;

  int centena= numero % 10;
  int numero3= (numero - centena) / 10;

  int milhar= numero3;

  printf("%d%s%d%s%d%s%d%s\n", unidade, "unidade", dezena, "dezena", centena, "centena", milhar, "milhar");

  return 0;
}