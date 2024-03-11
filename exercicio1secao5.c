#include<stdio.h>
//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0. 
int main(){
  int numero = 1, contador = 0;

  printf("Os cinco primeiros multiplos de 3 sao:\n");
  while(contador < 5){
    if(numero % 3 == 0){
      printf("O numero %d e multiplo de 3\n", numero);
      contador = contador + 1;

    }

    numero = numero + 1;
  }
}