#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;

};

int main()  {
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Joao");
    pessoa1.idade = 25;

    printf("Nome: %s\nIdade: %d\n", pessoa1.nome, pessoa1.idade);

    return 0;
}    