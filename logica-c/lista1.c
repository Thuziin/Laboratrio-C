#include <stdio.h>
#include <math.h>

/*
    1. Leia os lados de um triângulo e mostre o seu perímetro.
*/

int main () {
    float ladoA, ladoB, ladoC;
    printf("Informe os valores dos três lados do triângulo: ");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    float perimetro = ladoA + ladoB + ladoC;
    printf("O valor do perímetro do triângulo é: %.2f", perimetro);

    return 0;
}

/*
    2. Leia o raio de uma esfera e mostre o seu volume.
*/

void main () {
    double raio;
    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    double volume = 4.0/3.0 * 3.14 * pow(raio, 3);

    printf("O volume da esfera de raio %.2lf e: %.2lf", raio, volume);
}

/*
    3. Leia um número natural de três algarismos e mostre seu algarismo das unidades.
*/

void main () {
    int numero;
    printf("Informe um numero de 3 algarismo: ");
    scanf("%d", &numero);

    int unidade = numero % 10;

    printf("O valor do algarismo da unidade e: %d", unidade);
}

/*
    4. Leia um número natural de três algarismos e mostre seu algarismo das unidades, da dezena e da centena.   
*/

void main () {
    int numero;
    printf("Informe um numero de 3 algarismos: ");
    scanf("%d", &numero);

    int unidade = numero % 10;
    int dezena = (numero / 10) % 10;
    int centena = numero / 100;

    printf("O valor da unidade e: %d\nO valor da dezena e: %d\nO valor da centena e: %d\n", unidade, dezena, centena);
}

/*
    5. Leia separadamente os três algarismos de um número natural (centena, dezena e unidade) e mostre o dobro do número.
*/

void main () {
    int unidade, dezena, centena;
    printf("Informe os valores de tres algarismos separados por espaço (centena, dezena, unidade): ");
    scanf("%d %d %d", &centena, &dezena, &unidade);
    
    int numero = (centena * 100) + (dezena * 10) + unidade;
    int dobro = numero * 2;

    printf("O valor do numero informado %d%d%d e: %d", centena, dezena, unidade, dobro);
}

/*
    6. Leia a distância percorrida por um veículo e o tempo gasto para percorrer tal distância e informe a velocidade dele.
*/

void main () {
    double tempo, distancia;

    printf("Informe a distancia percorrida e o tempo: ");
    scanf("%lf %lf", &distancia, &tempo);

    double velocidade = distancia / tempo;

    printf("A velocidade do veiculo durante o percurso foi de %.2lf\n", velocidade);
}

/*
    7. Calcule e mostre o salário bruto e líquido de um funcionário. O salário bruto é dado pelo total de horas trabalhadas 
    no mês multiplicado pelo salário-hora. O salário líquido é dado pelo salário bruto menos o total de descontos. 
    O programa deverá ler o número de horas trabalhadas, o salário-hora e o total de descontos.
*/

void main () {
    double horasTrabalhadas, salarioHora, totalDesconto;
    printf("Informe as horas trabalhadas, o salario-hora e o total de desconto: ");
    scanf("%lf %lf %lf", &horasTrabalhadas, &salarioHora, &totalDesconto);

    double salarioBruto = horasTrabalhadas * salarioHora;
    double salarioLiquido = salarioBruto - (salarioBruto /100 * totalDesconto);

    printf("Salario bruto: %.2lf\nSalario liquido: %.2lf", salarioBruto, salarioLiquido);
}