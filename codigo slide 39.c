Node *createNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Erro: Falha na alocacao de memoria \n");
        exit(1);

    }     
    newNode->data =  data;
    newNode->next = NULL;
    
    return newNode;
}    