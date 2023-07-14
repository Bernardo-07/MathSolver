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
    printf("lei de Formação: f(x) = %dx + %d", a, b);
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
  int a, b, c, x, y;
  int code;
  printf("\nDigite o valor de a: ");
  scanf("%d",&a);
  printf("Digite o valor de b: ");
  scanf("%d",&b);
  printf("Digite o valor de c: ");
  scanf("%d",&c);
  printf("\nQual operação você deseja realizar?\n1-lei de Formação\n2-Imagem de um x\n3-Ponto Crítico\n-> ");
  scanf("%d",&code);
  switch(code){
    case 1: 
      if (a==1){
    if(b>0){
      if(c>0){
        printf("lei de Formação: f(x) = x² + %dx + %d", b, c);
      }else if(c==0){
        printf("lei de Formação: f(x) = x² + %dx", b);
      }else{
        printf("lei de Formação: f(x) = x² + %dx %d", b, c);
      }
    }else if(b==0){
      if(c>0){
        printf("lei de Formação: f(x) = x² + %d", c);
      }else if(c==0){
        printf("lei de Formação: f(x) = x²");
      }else{
        printf("lei de Formação: f(x) = x² %d", c);
      }
    }else{
      if(c>0){
        printf("lei de Formação: f(x) = x² %dx + %d", b, c);
      }else if(c==0){
        printf("lei de Formação: f(x) = x² %dx",b);
      }else{
        printf("lei de Formação: f(x) = x² %dx %d", b, c);
      }
    }
  }else if(a==0){
        printf("A função dada não é quadrática!");
      }else{
    if(b>0){
      if(c>0){
        printf("lei de Formação: f(x) = %dx² + %dx + %d", a, b, c);
      }else if(c==0){
        printf("lei de Formação: f(x) = %dx² + %dx", a, b);
      }else{
        printf("lei de Formação: f(x) = %dx² + %dx %d", a, b, c);
      }
    }else if(b==0){
      if(c>0){
        printf("lei de Formação: f(x) = %dx² + %d", a, c);
      }else if(c==0){
        printf("lei de Formação: f(x) = %dx²", a);
      }else{
        printf("lei de Formação: f(x) = %dx² %d", a, c);
      }
    }else{
      if(c>0){
        printf("lei de Formação: f(x) = %dx² %dx + %d", a, b, c);
      }else if(c==0){
        printf("lei de Formação: f(x) = %dx² %dx",a , b);
      }else{
        printf("lei de Formação: f(x) = %dx² %dx %d", a, b, c);
      }
    }
  }
    break;
    case 2:
    break;
    case 3:
    default:
      printf("código inválido!");
  }

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