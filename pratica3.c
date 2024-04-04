#include <stdio.h>

/* 
    1) Fazer um programa para calcular a soma dos números pares que sejam menores do que N. N
    deve ser informado pelo usuário.
*/

void main () {
    int n;
    printf("Informe um valor inteiro: ");
    scanf("%d", &n);
    int soma = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            soma += i;
    }

    printf("O valor da soma para valores menores que %d é: %d\n", n, soma);
}

/*
    2) Fazer um programa para ler as notas dos alunos de uma turma. O programa deverá informar ao
    final: a maior nota, a menor nota e a nota média. A última nota a ser informada, que não deverá ser
    considerada nos cálculos, conterá um valor menor do que zero.
*/

void main () {
    float notaTotal = 0;
    int contador = 0;
    float maior = 0, menor = 1000;
    float nota;

    do {
        printf("Informe a nota: ");
        scanf("%f", &nota);

        if (nota < 0)
            break;

        contador++;
        notaTotal += nota;

        if (nota < menor)
            menor = nota;
        else if (nota > maior)
            maior = nota;
    } while (nota);
    if (contador > 0) {
        float mediaTurma = notaTotal / contador;
        printf("A maior nota é: %.2f\nA menor nota é: %.2f\nA média da turma é: %.2f\n", maior, menor, mediaTurma);
    } else {
        printf("Não há dados para realizar as contas!\n");
    }
}

/*
    3) Um frigorífico deseja saber o maior peso de seus bois, o menor peso e o peso médio. Para cada
    boi será informado o seu identificador e o seu peso. Fazer um programa que mostre o identificador e
    o peso do boi mais gordo, o identificador e o peso do boi mais magro, e o peso médio dos bois.
    Caso haja mais de um boi com o mesmo peso, o programa deverá considerar o último boi
    informado para computar o maior e o menor peso.
    Os dados deverão ser lidos até que o usuário informe um valor negativo ou igual a zero para o
    identificador do boi. Caso o usuário informe um valor negativo ou igual a zero para o peso do boi, o
    programa deverá emitir uma mensagem de erro para o usuário, desconsiderar o dado informado e
    prosseguir a entrada de dados.
*/

void main () {
    double peso, pesoTotal = 0, pesoMaior = 0, pesoMenor = 1000000;
    int identificador, identificadorMaior, identificadorMenor, contador = 0;

    printf("Informe o identificador do boi: ");
    scanf("%d", &identificador);
    while (identificador > 0) {
        printf("Informe o peso do boi: ");
        scanf("%lf", &peso);

        if (peso < 0) {
            printf("O valor do peso é negativo, por favor informe um positivo: ");
            scanf("%lf", &peso);
        }

        contador++;
        pesoTotal += peso;

        if (peso >= pesoMaior) {
            pesoMaior = peso;
            identificadorMaior = identificador;
        }
        if (peso <= pesoMenor) {
            pesoMenor = peso;
            identificadorMenor = identificador;
        }

        printf("Informe o identificador do boi: ");
        scanf("%d", &identificador);
    }

    if (contador > 0) {
        double pesoMedio = pesoTotal / contador;
        printf("O boi %d tem o maior peso, que é de: %.3lf\nO boi %d tem o menor peso, que é de: %.3lf\nO peso médio dos bois é: %.3lf\n", identificadorMaior, pesoMaior, identificadorMenor, pesoMenor, pesoMedio);
    } else {
        printf("Não há boi para se informa dados!\n");
    }
}