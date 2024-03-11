#include<stdio.h>
//Estrutura de repeticao for(para), While(enquanto), Do while(faca enquanto)

//Quando voce ja sabe quantas voltas e quantos numeros ira rodar, usa-se o FOR;
//Quando voce tem um numero minimo ou numero maximo de tentativas de recebimento, usa-se o WHILE 
//Executa o loop primeiro e depois verifica a condição, usa-se o Do While

//Exemplo usando FOR

//Faca um programa, no qual receba e some 5 numeros inteiros e apresente a soma no final.
int main(){
  int valor, soma = 0;/*Sempre inicializar a variavel para nao dar um resultado diferente, iniciasse a variavel com um valor pois muitas vezes pode haver um lixo de memoria com um valor diferente.*/

  //para o int iniciando em 0, enquanto i for menor que 5, incremento de 1 em 1 ou i++.
  for(int i = 0; i < 5; i++){

  printf("Informe um valor:\n");
  scanf("%d", &valor);//não precisa inicializar a variavel VALOR com um numero pois o usuario ja vai inserir um valor a essa variavel

  soma = soma + valor;

  }

  printf("O valor final e %d", soma);

  return 0;

}