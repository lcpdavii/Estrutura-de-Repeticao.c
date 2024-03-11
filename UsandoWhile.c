#include<stdio.h>
/*E utilizado quando voce precisa de um loop(repeticoes), onde nao se tenha um numero fixo de paradas, mas que tenha uma condicao 
de parada, e antes de iniciar o loop, a CONDICAO É CHECADA ANTES DE RODAR O COMANDO.*/

//Quando voce tem um numero minimo ou numero maximo de tentativas de recebimento, usa-se o WHILE 

//Faca um programa, no qual receba e some numeros inteiros ate o numero de entrada seja 0 e apresente a soma no final.
int main(){
  int valor, soma = 0;/*Sempre inicializar a variavel para nao dar um resultado diferente, iniciasse a variavel com um valor pois muitas vezes pode haver um lixo de memoria com um valor diferente.*/

  printf("Informe um valor:\n");
  scanf("%d", &valor);//não precisa inicializar a variavel VALOR com um numero pois o usuario ja vai inserir um valor a essa variavel

  //Enquanto o valor for diferente de 0, o loop continuara rodando
  while(valor!=0){
     soma = soma + valor;
    printf("Informe um valor:\n");
    scanf("%d", &valor);
  }

  printf("O valor final e %d", soma);

  return 0;
}