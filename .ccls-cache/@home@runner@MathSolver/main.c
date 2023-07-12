#include <stdio.h>

int afim(){
  int a, b, x, y;
  printf("Digite o valor de a: ");
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

int main() {
  afim();
  return 0;
}