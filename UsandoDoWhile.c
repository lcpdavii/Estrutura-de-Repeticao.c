#include<stdio.h>
//Executa o loop primeiro e depois verifica a condição, usa-se o Do While

//se quiser checar antes de rodar, usa o WHILE, se quiser rodar e so depois checar, usa o Do While, SE VOCE TIVER UM NUMERO FIXO DE ELEMENTOS e quiser rodar antes de checar, pode usar o FOR

//Exemplo usando DO WHILE  
/*E utilizado quando voce precisa de um loop(repeticoes), onde nao se tenha um numero fixo de paradas, mas que tenha uma condicao 
de parada onde é checada apos a primeira execucao. Primeiro executa e a checagem so é feita no final*/

//o DO ja é um loop, ele executa o comando e depois verifica a condicao ou checa.

//Faca um programa, no qual receba e some numeros inteiros ate o numero de entrada seja 0 e apresente a soma no final.
int main(){
  
  int valor, soma = 0;/*Sempre inicializar a variavel para nao dar um resultado diferente, iniciasse a variavel com um valor pois muitas vezes pode haver um lixo de memoria com um valor diferente.*/
  
  do{//(faca isso aqui)
    printf("Informe um valor:\n");
    scanf("%d", &valor);

    //processamento
    soma = soma + valor;

    //Enquanto o valor for diferente de 0, o loop continuara rodando
  }while(valor!=0);

  

  printf("O valor final e %d", soma);

  return 0;
}