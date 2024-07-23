#include <stdio.h>
#include <math.h>

/* 
    1- Ler um número qualquer e informar se ele é positivo, negativo ou nulo.
*/

// void main () {
//     int numero;
//     printf("Informe um número inteiro: ");
//     scanf("%d", &numero);

//     if (numero > 0) 
//         printf("O número é positivo\n");

//     else if (numero < 0)
//         printf("O número é negativo\n");

//     else  
//         printf("O número é nulo\n");
// }

/* 
    2- Ler um número natural e informar se ele é par ou ímpar.
*/

// void main () {
//     int numero;
//     printf("Informe um número natural: ");
//     scanf("%d", &numero);

//     if (!(numero % 2)) {
//         printf("O número %d é par\n", numero);
//     } else {
//         printf("O número %d é ímpar\n", numero);
//     }


//     // printf("O seguinte número é: %s\n", numero % 2 == 0 ? "Par" : "Ímpar");
// }

/*
    3- Ler as medidas de três segmentos e informar se esses segmentos podem ser os lados de
    um triângulo. Caso sejam lados de um triângulo, informar qual o seu tipo (escaleno,
    isósceles ou equilátero) e a sua área.
    A condição de existência de um triângulo é que a soma de dois lado seja menor do que
    o terceiro lado.
                          ________________________
    Lembre-se que Área = √ ( p (p-a) (p-b) (p-c) ) ,
    sendo p = (a+b+c)/2, onde a, b e c são as medidas dos lados do triângulo.
*/

void main () {
    float ladoA, ladoB, ladoC, area, p;
    printf("Informe os lados do triângulos: "),
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA)) {

        p = (ladoA + ladoB + ladoC) / 2;
        area = sqrt(p * (p - ladoA) * (p - ladoB) * (p - ladoC));

        if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC && (ladoA != ladoB || ladoA != ladoC || ladoB != ladoC))
            printf("O triângulo informado é isóceles\n");

        else if (ladoA == ladoB && ladoA == ladoC) 
            printf("O triângulo é equilátero\n");

        else 
            printf("O triângulo informado é escaleno\n");

        printf("Area: %.2f\n", area);

    } else {
        printf("Os valores informados não correspondem a um triângulo\n");
    }

}