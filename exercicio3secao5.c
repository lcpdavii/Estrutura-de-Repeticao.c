//Faça um programa que leia 10 números e escreva o maior e o menor valor lido.

 #include<stdio.h>

 int main(){

  int valor, maiorV, menorV;

  for( int i = 0; i < 10; i++){
    printf("Insira um valor %d de 10:\n", i + 1);
    scanf("%d", &valor);

    if(i == 0){
      maiorV = valor;
      menorV = valor;

    }if(valor > maiorV){
        maiorV = valor;
      
      }if(valor < menorV){
          menorV = valor;
      
        }
      printf("\n\nO maior valor e %d, e menor valor e %d.\n", maiorV, menorV);
  }
        return 0;
}