#include <stdio.h>

int main() {
float a;
float b;
float troca;

printf("Digite o valor numerico de a: ");
scanf("%f", &a);

printf("Digite o valor numerico de b: ");
scanf("%f", &b);

troca <- a; 
a <- b;
b <- troca;

prinft("O novo valor de a e: ",b);
prinft("O novo valor de b e: ",a);

}