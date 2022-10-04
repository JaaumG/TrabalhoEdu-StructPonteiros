#include <stdio.h>

struct{
    char nome[30];
    int idade;
    char telefone[10];
}typedef Agenda;

void cadastrarAgenda(Agenda agenda[], int quantidade){
    int i =0;
    for(i=0;i<quantidade;i++){
        printf("Entre com o nome\n");
        scanf("%s", &agenda[i].nome);
        printf("Entre com a idade\n");
        scanf("%d", &agenda[i].idade);
        printf("Entre com o telefone\n");
        scanf("%s",&agenda[i].telefone);
    }
}

void printAgenda(Agenda agenda[], int quantidade){
    int i;
    for (i = 0; i < quantidade; i++) {
        printf("Contato Adicionado:\n\tNome: %s\n\tIdade: %d\n\tTelefone: %s\n", &agenda[i].nome, agenda[i].idade, &agenda[i].telefone);
    }
}

int main() {
    Agenda agenda[10];
    cadastrarAgenda(agenda, 10);
    printAgenda(agenda, 10);
    return 0;
}
