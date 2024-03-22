#include <stdio.h>

int main() {

float custo_fabrica; 
float porcentagem_revendedor;
float impostos;
float preco_final;

printf("Digite o valor do custo de fabrica do automovel: ");
scanf("%f", &custo_fabrica);

porcentagem_revendedor = (28 * custo_fabrica) /100;
impostos = (45 * custo_fabrica)/100;
preco_final = custo_fabrica, porcentagem_revendedor, impostos;

printf("O valor final do altomovele:", preco_final: );
printf("O valor dos impostos e:", impostos: );
printf("O valor da porcentagem do vendedor e:", porcentagem_revendedor: );

return 0;
}