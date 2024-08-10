/*
    Um cliente possui os seguintes dados: cpf, nome, telefone, idade.
    Implemente um programa que permita:
        - incluir clientes;
        - listar clientes;
        - pesquisar clientes pelo nome.
    O programa deve exibir um menu de opções para o usuário:
        1- Incluir cliente
        2- Listar cliente
        3  - Pesquisar cliente por nome
    Utilize funções para modularizar o seu programa.
    Define a quantidade de clientes como uma constante do programa.
    Dica: use a função strcmp da biblioteca string.h para comparar o nome pesquisado com o
    nome do cliente.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define MAXIMO 10


struct Cliente {
    char nome[100], telefone[11], cpf[11];
    int idade;
};

int incluirCliente (struct Cliente clientes[], int aux) {
    char resposta;
    printf("MAXIMO DE CLIENTES E %d\n\n", MAXIMO);

    for (int i = 0; i < MAXIMO; i++) {
        printf("Deseja incluir mais um cliente? (s/n): ");
        resposta = getche();
        fflush(stdin);

        if (resposta == 's' || resposta == 's') {
            printf("\nInforme o nome: ");
            gets(clientes[i].nome);

            printf("Informe a idade: ");
            scanf("%d", &clientes[i].idade);

            fflush(stdin);

            printf("Informe o cpf: ");
            gets(clientes[i].cpf);
            
            printf("Informe o telefone: ");
            gets(clientes[i].telefone);
            
            aux++;

            system("cls");
        } else {
            break;
        }
        
    }
    return aux;

}

void listarCliente (struct Cliente clientes[], int aux) {
    for (int i = 0; i < aux; i++) {
        printf("Nome: %s\n", clientes[i].nome);
        printf("Idade: %d\n", clientes[i].idade);
        printf("CPF: %s\n", clientes[i].cpf);
        printf("Telefone: %s\n\n", clientes[i].telefone);
    }
}

void pesquisarPorNome(struct Cliente clientes[], int aux) {
    fflush(stdin);
    char nomePesquisa[100];
    printf("Informe um nome para pesquisa: ");
    gets(nomePesquisa);

    for (int i = 0; i < aux; i++) {
        if (!strcmp(nomePesquisa, clientes[i].nome)) {
            printf("Nome: %s\n", clientes[i].nome);
            printf("Idade: %d\n", clientes[i].idade);
            printf("CPF: %s\n", clientes[i].cpf);
            printf("Telefone: %s\n\n", clientes[i].telefone);
        } 
    }
}

void main () {
    int resposta, aux = 0;
    struct Cliente clientes[MAXIMO];
    do {
        printf("\nInforme a opcao do menu que deseja acessar:\n\n");
        printf("| ---------------- MENU -------------- |\n");
        printf("|     0 - Sair                         |\n");
        printf("|     1 - Incluir cliente              |\n");
        printf("|     2 - Listar cliente               |\n");
        printf("|     3 - Pesquisar cliente  por nome  |\n");
        printf("| ------------------------------------ |\n");
        
        printf("\nEscolha uma opcao: ");
        scanf("%d", &resposta);
        system("cls");

        switch (resposta) {
            case 1:
                aux = incluirCliente(clientes, aux);
                break;
            
            case 2:
                listarCliente(clientes, aux);
                break;

            case 3:
                pesquisarPorNome(clientes, aux);
                break;

            default:
                break;
        }
    } while (resposta != 0);
}