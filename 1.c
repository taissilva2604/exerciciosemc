#include <stdio.h>

#include <stdlib.h>
 
// Definição da estrutura do nó da lista

typedef struct Node {

    int data;

    struct Node* next;

} Node;
 
// Função para contar o número de células da lista

int countNodes(Node* head) {

    int count = 0;

    Node* current = head;

    // Percorre a lista enquanto o ponteiro não for nulo

    while (current != NULL) {

        count++;

        current = current->next;

    }

    return count;

}
 
// Função para adicionar um nó no início da lista

void push(Node** head_ref, int new_data) {

    Node* new_node = (Node*)malloc(sizeof(Node));

    new_node->data = new_data;

    ->next = (*head_ref);



