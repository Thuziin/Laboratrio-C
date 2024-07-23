#include <stdio.h>
#include <math.h>

/* 
    Faça um programa para ler o raio de um esfera, calcular e exibir o seu volume.
    V = 4/3 * π * R³

*/ 

// void main () {
//     double raio;

//     printf("Informe o raio da esfera: ");
//     scanf("%lf", &raio);

//     double volume = (4 * M_PI * (raio * raio * raio)) / 3;
//     printf("O volume da esfera é: %.2lf\n", volume);
// }

/* 
    Em uma disciplina, foram aplicadas 3 avaliações. A nota final do aluno será dada pela
    média aritmética das notas obtidas por ele nas avaliações. Faça um programa para ler as
    notas de um aluno e mostrar a sua nota final. 
*/

// void main () {
    // float nota1, nota2, nota3;

    // printf("Informe as notas das três avaliações do aluno (separadas por espaço): ");
    // scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    // double media = (nota1 + nota2 + nota3) / 3;

    // printf("A nota final do aluno foi: %.2f\n", media);
// }

/*

    Faça um programa para calcular o valor da taxa de condomínio de um apartamento,
    dadas as despesas do mês do prédio e a fração ideal do apartamento (um valor entre 0 e 1).
    A taxa do condomínio é dada em função do valor total das seguintes despesas do prédio:
    luz, água, limpeza e manutenção. Para se calcular a taxa de condomínio de um apartamento,
    multiplica-se o valor total das despesas do mês pela fração ideal do apartamento.

*/

// void main () {
//     float taxaCond, agua, luz, limpeza, manutenção;

//     printf("Informe respectivamente os valores da água, luz, limpeza e manutenção: ");
//     scanf("%f %f %f %f", &agua, &luz, &limpeza, &manutenção);

//     printf("Informe a taxa do condomínio do apartamento (entre 0 e 1): ");
//     scanf("%f", &taxaCond);
//     float condominio = (agua + luz + limpeza + manutenção) * taxaCond;

//     printf("O valor de condóminio é igual a: R$%.2f\n", condominio);
// }

 /*
    Dois irmãos saíram juntos e desejam dividir as despesas do passeio por igual. O primeiro
    irmão pagou o Uber da ida para o passeio, o lanche e os ingressos de entrada. O segundo
    irmão pagou o Uber da volta e o almoço. Faça um programa que leia o valor das despesas
    pagas por cada irmão, calcule e imprima o valor que o primeiro irmão deve ao ou tem a
    receber do segundo, bem como o valor que o segundo irmão deve ao ou tem a receber do
    primeiro
 */


// void main () {
//     float uberIda, lanche, ingressos, uberVolta, almoço;

//     printf("Informe os valores gastos pelo irmão 1: ");
//     scanf("%f %f %f", &uberIda, &lanche, &ingressos);

//     printf("Informe os valores gastos pelo irmão 2: ");
//     scanf("%f %f", &uberVolta, &almoço);

//     float gastoIrmao1 = uberIda + lanche + ingressos;
//     float gastoIrmao2 = uberVolta + almoço;

//     float totalGasto = gastoIrmao1 + gastoIrmao2;

//     float receberOuPagar = gastoIrmao1 - (totalGasto / 2);

//     printf("O valor a ser pago ou ser recebido é: R$%.2f\n", receberOuPagar);
// }

void main () {
    // 1 
    double raio;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    double volume = (4 * M_PI * (raio * raio * raio)) / 3;
    printf("O volume da esfera é: %.2lf\n", volume);

    // 2
    float nota1, nota2, nota3;

    printf("Informe as notas das três avaliações do aluno (separadas por espaço): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    double media = (nota1 + nota2 + nota3) / 3;

    printf("A nota final do aluno foi: %.2f\n", media);

    // 3
    float taxaCond, agua, luz, limpeza, manutenção;

    printf("Informe respectivamente os valores da água, luz, limpeza e manutenção: (separados por espaço)");
    scanf("%f %f %f %f", &agua, &luz, &limpeza, &manutenção);

    printf("Informe a taxa do condomínio do apartamento (entre 0 e 1): ");
    scanf("%f", &taxaCond);
    float condominio = (agua + luz + limpeza + manutenção) * taxaCond;

    printf("O valor de condóminio é igual a: R$%.2f\n", condominio);

    // 4 
    float uberIda, lanche, ingressos, uberVolta, almoço;

    printf("Informe os valores gastos pelo irmão 1 (uber, lanche, ingresso - separados por espaço): ");
    scanf("%f %f %f", &uberIda, &lanche, &ingressos);

    printf("Informe os valores gastos pelo irmão 2 (uber, almoço - separados por espaço): ");
    scanf("%f %f", &uberVolta, &almoço);

    float gastoIrmao1 = uberIda + lanche + ingressos;
    float gastoIrmao2 = uberVolta + almoço;

    float totalGasto = gastoIrmao1 + gastoIrmao2;

    float receberOuPagar = gastoIrmao1 - (totalGasto / 2);

    printf("O valor a ser pago ou ser recebido é: R$%.2f\n", receberOuPagar);
}