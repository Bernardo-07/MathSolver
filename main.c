#include <stdio.h>

void tabela(){
  printf("\nFUNÇÕES\t\tCÓDIGO");
  printf("\nAfim\t\t  1");
  printf("\nQuadrática\t  2\n");
}

int afim(){
  int a, b, x, y;
  printf("\nDigite o valor de a: ");
  scanf("%d",&a);
  printf("Digite o valor de b: ");
  scanf("%d",&b);
  if(b>0){
    printf("lei de Formação: f(x) = %dx +%d", a, b);
  }else if(b==0){
    printf("lei de Formação: f(x) = %dx", a);
  }else{
    printf("lei de Formação: f(x) = %dx %d", a, b);
  }
  printf("\n\nDigite o valor de x: ");
  scanf("%d",&x);
  y = (a*x)+b;
  printf("f(%d) = %d", x, y);
  return 0;
}

int quadratica(){
  return 0;
}

int main() {
  int code;
  tabela();
  printf("\nDigite o código de qual função você deseja trabalhar: ");
  scanf("%d",&code);
  switch(code){
    case 1:
      afim();
    break;
    case 2:
      quadratica();
    break;
    default:
      printf("\nVocê digitou um código inválido!");
  }
  return 0;
}