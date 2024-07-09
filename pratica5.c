#include <stdio.h>

/*
    1. Faça um programa que leia um conjunto de 15 elementos do tipo inteiro. O programa
    deverá informar quantas vezes um número dado pelo usuário aparece neste conjunto e em
    quais posições.
*/

// int main () {
//     int vetor[15];
//     int contador = 0, procura;
//     printf("Informe os 15 valores do vetor: ");

//     for (int i = 0; i < 15; i++)
//         scanf("%d", &vetor[i]);

//     printf("Informe o valor que quer verificar no vetor: ");
//     scanf("%d", &procura);
    
//     for (int i = 0; i < 15; i++) {
//         if (vetor[i] == procura) 
//             contador++;
//     }

//     printf("O número %d apareceu %d vez(es) no vetor\n", procura, contador);
    
//     return 0;
// }

/*
    2. Faça um programa que leia a idade de 10 indivíduos e indique quantos indivíduos
    possuem idade superior à media de idade do grupo.
*/

int main () {
    int idades[10], somaIdade = 0, idadeLimite, contador = 0;
    float media;

    printf("Informe as idades dos indivíduos: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &idades[i]);
        somaIdade += idades[i];
    }

    media = somaIdade / 10.0;

    printf("Informe a idade limite: ");
    scanf("%d", &idadeLimite);

    for (int i = 0; i < 10; i++) {
        if (idades[i] > idadeLimite)
            contador++;
    }

    printf("A quantidade de indivíduos com idade superior a %d é: %d\n", idadeLimite, contador);

    return 0;
}