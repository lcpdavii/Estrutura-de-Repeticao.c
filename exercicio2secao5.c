#include<stdio.h>
/*Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).*/ 
int main(){

  int numero = 0;

  for(int numero = 0; numero <= 100000; numero = numero +100){
      printf("O valor de i e %d\n.", numero);
  }
  return 0;
}