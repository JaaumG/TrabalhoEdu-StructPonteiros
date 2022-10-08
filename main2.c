#include <stdio.h>

struct{
    char Nome[40];
    char Endereco[40];
    int idade;
}typedef Pessoa;


int main() {
    Pessoa pessoa[5];
    int i;
    for (i = 0; i < 5; ++i) {
        printf("Digite o nome:\n");
        scanf("%s", pessoa[i].Nome);
        printf("Digite o endereço:\n");
        scanf("%s", pessoa[i].Endereco);
        printf("Digite a idade:\n");
        scanf("%d", &pessoa[i].idade);
    }
    for (i = 0; i < 5; i++) {
        if(pessoa[i].idade>=18){
            printf("você é maior de idade.");
        }else{
            printf("você é menor de idade.");
        }
    }



    return 0;
}
