#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    1) Faça um programa para gerar os N primeiros números da serie Fibonacci que tem o
    seguinte padrão:
*/

void main () {
    int limitador;
    unsigned int fib = 1, atual = fib, antecessor = 0;
    printf("Informe o limitador: ");
    scanf("%d", &limitador);

    for (int i = 0; i < limitador; i++) {
        printf("%d ", fib);
        fib = atual + antecessor;
        antecessor = atual;
        atual = fib;

    }
}

/*
    2) Uma empresa deseja registrar e analisar os dados de inscritos em seu processo seletivo
    para duas vagas: 1 - Gerencia e 2 - Desenvolvimento.
    A pessoa candidata deverá informar os seguintes dados:
    - Nome (tamanho máximo de 50 caracteres)
    - Idade
    - Vaga desejada
    - Tempo de experiencia
    Faça um programa que:
    - Leia os dados da pessoa. O último conjunto de dados, que não deverá ser considerado,
    será informada uma vaga inexistente, ou seja, diferente de 1 e 2.
    - Informe, ao final:
    - O total de candidatos para a Vaga 1 - Gerencia.
    - O total de candidatos para a Vaga 2 - Desenvolvimento.
    - A media de idade dos candidatos.
    - A maior idade entre os candidatos.
    - A menor idade entre os candidatos.
    - A media de tempo de experiencia dos candidatos para a Vaga 1 - Gerencia.
    - A media de tempo de experiencia dos candidatos para a Vaga 2 - Desenvolvimento
*/

int main () {
    unsigned int idade, vaga;
    float tempoExperiencia, experienciaGerencia = 0, experienciaDev = 0;
    int idadeTotal = 0, totalDev = 0, totalGerencia = 0,  maiorIdade = 0, menorIdade = 1000;

    printf("1- Gerencia\n2- Desenvolvimento\nInforme para qual vaga quer aplicar: ");
    scanf("%d", &vaga);
    while (vaga == 1 || vaga == 2) {
        printf("Informe a sua idade e o tempo de experiencia (em anos): ");
        scanf("%d %f", &idade, &tempoExperiencia);

        if (vaga == 1) {
            totalGerencia += 1, idadeTotal += idade; experienciaGerencia += tempoExperiencia;
        } else {
            totalDev += 1, idadeTotal += idade; experienciaDev += tempoExperiencia;
        }
        
        system("pause");
        system("cls");
        printf("1- Gerencia\n2- Desenvolvimento\nInforme para qual vaga quer aplicar: ");
        scanf("%d", &vaga);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }
    }
    
    if (!(totalDev == 0) || !(totalGerencia == 0)) {
        if (totalDev + totalGerencia == 0) {
            printf("Dados incoerentes\n");
            return 0;
        }
        if (totalDev == 0) {
            printf("Sem pessoas em dev\n");
            return 0;
        }
        if (totalGerencia == 0) {
            printf("Sem dados em gerencia\n");
            return 0;
        }
        double mediaIdade = idadeTotal / (totalDev + totalGerencia);
        double mediaExperienciaDev = experienciaDev / totalDev;
        double mediaExperienciaGerencia = experienciaGerencia / totalGerencia;
        printf("\n\nO total de candidatos para Gerencia e: %d\nO total de candidator para Desenvolvimento e: %d\nA media de idade dos candidatos e: %.2lf anos\nA maior idade e: %d anos\nA menor idade e: %d anos\nO tempo de experiencia medio da Gerencia e: %.2lf\nO tempo de experiencia medio de Desenvolvimento e: %.2lf\n", totalGerencia, totalDev, mediaIdade, maiorIdade, menorIdade, mediaExperienciaGerencia, mediaExperienciaDev);
        return 0;
    }

    printf("Sem dados\n");
    return 0;

}