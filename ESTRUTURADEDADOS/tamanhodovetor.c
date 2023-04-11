#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int numeros[20];
  printf("o tamanho do vetor numeros é: %d", sizeof(numeros));
  
  printf("o endereço do primeiro elemento é: %d", &numeros[0]);
  
  printf("o endereço do array numeros: %d", numeros);
  
  return 0;
}