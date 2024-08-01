#include <stdio.h>

/*
    1. Fazer um programa para calcular e exibir o valor da série a seguir. N deve ser informado pelo usuário.
        1 + 1/2 + 1/3 + ... + 1/N
    O programa deverá ter uma função que recebe o valor de N e retorna o valor calculado
    para a série.
*/

float calculaSerie(int n);

void main () {
    int n;
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    printf("O valor da serie e: %.2f\n", calculaSerie(n));
}


float calculaSerie (int n) {
    float serie = 0;
    for (float i = 1; i <= n; i++) {
        serie += (1/i);
    }

    return serie;
}

#include <conio.h>
#include <stdlib.h>

/*
    2. Um professor aplicou três provas de 50 pontos cada. O aproveitamento final do
    aluno é dado pela soma das notas obtidas nas provas, desprezando-se a menor delas.
    O conceito do aluno é dado pela seguinte correspondência:
        - A : nota >=90
        - B : nota superior ou igual a 80 e menor do que 90.
        - C : nota superior ou igual a 70 e menor do que 80.
        - D : nota superior ou igual a 60 e menor do que 70.
        - I : nota inferior a 60.

    a) Implemente uma função que receba o valor de três provas e retorne o aproveitamento
    global do aluno.

    b) Implemente uma função que receba a nota global de um aluno e retorne o seu
    conceito.

    c) Implemente um programa que leia as três notas de alunos e indique, para cada um
    deles, a sua nota global e o seu conceito correspondente. O programa deverá ler dados
    de alunos e exibir os resultados até que o usuário informe que deseja encerrar o
    programa.
*/

float aproveitamentoGlobal(float nota1, float nota2, float nota3);

char conceitoAluno (float rendimento);

void main () {
    char resposta;
    do {
        float nota1, nota2, nota3;
        system("cls");
        printf("Informe as notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        float rendimento = aproveitamentoGlobal(nota1, nota2, nota3);
        char conceito = conceitoAluno(rendimento);

        printf("A nota global do aluno foi: %.2f.\nResultando em um conceito: %c\n", rendimento, conceito);

        printf("Deseja informa mais notas? (S/N) ");
        resposta = getche();
    } while (resposta == 's' || resposta == 'S') ;

}


// a

float aproveitamentoGlobal(float nota1, float nota2, float nota3) {
    float rendimento;
    if (nota1 < nota2 && nota1 < nota3) {
        rendimento = nota2 + nota3;
    } else if (nota2 < nota1 && nota2 < nota3) {
        rendimento = nota1 + nota3;
    } else {
        rendimento = nota1 + nota1;
    }
    return rendimento;
}

char conceitoAluno (float rendimento) {
    char conceito;
    if (rendimento >= 90) {
        conceito = 'A';
    } else if (rendimento < 90 && rendimento >= 80) {
        conceito = 'B';
    } else if (rendimento < 80 && rendimento >= 70) {
        conceito = 'C';
    } else if (rendimento < 70 && rendimento >= 60) {
        conceito = 'D';
    } else {
        conceito = 'F';
    }

    return conceito;
}