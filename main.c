#include <stdio.h>

struct{
    char nome[30];
    int idade;
    char telefone[10];
}typedef Agenda;

int main() {
    Agenda agenda;
    printf("Entre com o nome\n");
    scanf("%s", &agenda.nome);
    printf("Entre com a idade\n");
    scanf("%d", &agenda.idade);
    printf("Entre com o telefone\n");
    scanf("%s",&agenda.telefone);

    printf("Contato Adicionado:\nNome: %s\nIdade: %d\nTelefone: %s", &agenda.nome, agenda.idade, &agenda.telefone);
    return 0;
}