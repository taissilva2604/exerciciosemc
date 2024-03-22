#include <stdio.h>

int main() {

    int numero = 10;
    int *ponteiro = &numero;

    printf("Valor %d\n", numero);
    printf("Endereco de memoria: %p\n", ponteiro);

    return 0;

}    