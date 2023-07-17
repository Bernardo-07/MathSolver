#include <stdio.h>
#include <math.h>

void tabela(){
  printf("\nFUNÇÕES\t\tCÓDIGO");
  printf("\nAfim\t\t  1");
  printf("\nQuadrática\t  2");
  printf("\nLimites");
  printf("\nDerivadas");
  printf("\nIntegrais\n");
}

int afim(){
  int a, b, x, y;
  int n=1;
  printf("\nDigite o valor de a: ");
  scanf("%d",&a);
  printf("Digite o valor de b: ");
  scanf("%d",&b);
  printf("\n");
  if(a==1){
    if(b>0){
      printf("lei de Formação: f(x) = x + %d", b);
    }else if(b==0){
      printf("lei de Formação: f(x) = x");
    }else{
      printf("lei de Formação: f(x) = x %d", b);
    }
  }else if(a==0){
    printf("A função dada é constante!\nf(x) = %d",b);
  }else{
    if(b>0){
      printf("lei de Formação: f(x) = %dx + %d", a, b);
    }else if(b==0){
      printf("lei de Formação: f(x) = %dx", a);
    }else{
      printf("lei de Formação: f(x) = %dx %d", a, b);
    }
  }
  while(n!=0){
    printf("\n\nDigite o valor de x: ");
    scanf("%d",&x);
    y = (a*x)+b;
    printf("f(%d) = %d\n", x, y);
    printf("\nSe você deseja continuar digite 1, se deseja fechar o programa digite 0: ");
    scanf("%d",&n);
  }
  return 0;
}

int quadratica(){
  int a, b, c, x, y;
  float delta, x1, x2, xv, yv;
  int code;
  printf("\nDigite o valor de a: ");
  scanf("%d",&a);
  printf("Digite o valor de b: ");
  scanf("%d",&b);
  printf("Digite o valor de c: ");
  scanf("%d",&c);
  printf("\nQual operação você deseja realizar?\n1-lei de Formação\n2-Imagem de um x\n3-Raízes\n4-Ponto Crítico\n-> ");
  scanf("%d",&code);
  delta = (b*b)-(4*a*c);
  while(code!=0){
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
        printf("\nDigite o valor de x: ");
        scanf("%d",&x);
        y = a*(x*x) + (b*x) + c;
        printf("f(%d) = %d", x, y);
      break;
      case 3:
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("\nAs raízes da função são %.2f e %.2f", x1, x2);   
      break;
      case 4:
        xv = (float) -b/(2*a);
        yv = -delta/(4*a);
        if(a>0){
          printf("\nSua função possui concavidade voltada para cima, ou seja, o vértice da parábola é um ponto de mínimo: (%.2f,%.2f)",xv, yv);
        }else{
          printf("\nSua função possui concavidade voltada para baixo, ou seja, o vértice da parábola é um ponto de máximo: (%.2f,%.2f)",xv, yv);
        }
      break;
      default:
        printf("código inválido!");
    }
    printf("\n\nSe você deseja continuar digite o número da operação a ser realizada, se deseja fechar o programa digite 0: ");
    scanf("%d",&code);
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