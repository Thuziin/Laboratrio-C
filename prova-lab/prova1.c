#include <stdio.h>
#include <math.h>

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
// float X, S, Den = 1, Num, Aux = 3;
//     printf("Digite o valor de X:\n");
//     scanf("%f", &X);

//     S = Num = X;

//     while(Aux < 10){
//         Den = Den * Aux * (Aux - 1);
//         Aux = Aux + 2;

//         printf("%f\n", Den);

//         Num = Num * X * X * (-1);

//         printf("%f\n", Num);

//         S = S +  Num / Den;
//     }

//     printf("O valor da serie e de: %.3f\n", S);

//     return 0;
// }


void main () {
    int variavel;
    printf("Informe o valor da variavel: ");
    scanf("%d", &variavel);

    int numerador, denominador = 1;
    int aux;
    float soma = 0;
    for (int i = 1, j = 1; i <= 5; i++, j += 2) {
        numerador = pow(variavel, j);
        aux = j * (j - 1);

        if (aux == 0) {
            aux = 1;
        }
        denominador = denominador * aux;

        if (i % 2 == 0) {
            printf("- %d/%d ", numerador, denominador);
            soma -= (float)numerador / denominador;
        } else {
            printf("+ %d/%d ", numerador, denominador);
            soma += (float)numerador / denominador;

        }
    }

    printf(" = %.3lf\n", soma);
}

// 2

// #define dimensao 10

// void main () {
//     int horasTrabalhadas[dimensao];
//     int salarioHora[dimensao];
//     float salario[dimensao];

//     for (int i = 0; i < dimensao; i++) {
//         printf("Informe as horas trabalhadas de %d: ", i+1);
//         scanf("%d", &horasTrabalhadas[i]);

//         printf("Informe o salario hora de %d: ", i+1);
//         scanf("%d", &salarioHora[i]);

//         salario[i] = horasTrabalhadas[i] * salarioHora[i];
//     }

//     for (int i = 0; i < dimensao; i++) {
//         printf("Informacao do funcionario %d: Horas trabalhadas: %d horas | Salario hora: %d | Salario: R$%.2f\n", i+1,  horasTrabalhadas[i],  salarioHora[i],  salario[i]);
//     }
// }