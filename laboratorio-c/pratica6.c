#include <stdio.h>

/* 
    Faça um programa que leia uma constante inteira N e os dados de uma matriz 5X4 do tipo inteiro.
    O programa deverá multiplicar os valores da matriz por N e exibir a matriz resultante.
*/

#define n 5
#define m 4

int main () {
    int alfa;
    int aux = 0;
    printf("Informe o valor da constante n: ");
    scanf("%d", &alfa); 

    int matriz[n][m];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j++) {
            printf("Informe o valor da posição (%d , %d) da matriz: ", i, j);
            scanf("%d", &aux);
            matriz[i][j] = aux * alfa;
        }
    }

    printf("Matriz resultante: \n");
    
    for (int i = 0; i < m; i ++) {
        printf("| ");
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

/*
    Faça um programa que leia e armazene os dados de altura e peso de 10 pessoas em uma matriz.
    O programa deverá exibir:
        - os dados armazenados na tabela para cada pessoa e o seu respectivo IMC (Índice de Massa Corporal). IMC = peso / (altura)²
        - a quantidade de pessoas que têm IMC fora da faixa considerada como normal pela OMS, que é entre 18,5 e 25.
*/

#define linhas 10
#define colunas 3

void main () {
    float pessoas[linhas][colunas];
    int contador = 0;

    for (int i = 0; i < linhas; i++) {        
        printf("Informe a altura da pessoa: ");
        scanf("%f", &pessoas[i][0]);
        
        printf("Informe o peso: ");
        scanf("%f", &pessoas[i][1]);
    
        pessoas[i][2] = (pessoas[i][1] / (pessoas[i][0] * pessoas[i][0]));
        
        if (pessoas[i][2] < 18.5 || pessoas[i][2] > 25) {
            contador++;
        }
    }


    printf("%d estão fora faixa considerada pela OMS\n", contador);

    for (int i = 0; i < linhas; i++) {
        printf("Pessoa %d: Peso: %.2f, Altura: %.2f, IMC: %.2f\n", i, pessoas[i][0], pessoas[i][1], pessoas[i][2]);
    }

    
}