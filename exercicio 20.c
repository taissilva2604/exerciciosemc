#include <stdio.h>

int main() {

    float valor;
    float desconto;
    float valorfinal;
   
    int ano;

    printf("Qual o valor do veiculo? R$: ");
    scanf("%f", &valor);

    printf("Qual o ano do veiculo desejado? ");
    scanf("%d", &ano);

    if(ano <= 2000){
        valorfinal + valor - (valor*12/100);
    } else {
        if (ano > 2000){
           valorfinal + valor  - (valor*7/100);
           desconto + valorfinal + desconto;
        }
          printf("O valor de desconto é: %1.f" , desconto);
          printf("O valor a ser pago pelo cliente é: %1.f" , valorfinal);
          
          return 0;
    }
}    

                            

