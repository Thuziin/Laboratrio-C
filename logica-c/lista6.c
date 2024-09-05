#include <stdio.h>

/*
1. Escreva uma funcao que receba dois numeros inteiros como parametro e retorne a soma deles.
*/

int soma (int a, int b) {
    return a + b;
}

/*
2. Escreva uma funcao denominada calculaPrecoTotal que receba o preco P de um produto, o valor percentual do imposto I e retorne o preco 
total do produto. O preco total e dado por P + P*I;
*/

float calculaPrecoTotal(float preco, float imposto) {
    return preco + preco * imposto;
}

/*
3. Escreva uma funcao que receba dois numeros inteiros como parametro e retorne o maior
deles.
*/

int maior(int a, int b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return 0;
}

/*
4. Escreva uma funcao que receba dois numeros inteiros como parametro e exiba para o usuario o maior e o menor deles, ou informe se
eles sao iguais.
*/

void maiorMenorIgual(int a, int b) {
    if (a > b) {
        printf("Maior: %d\nMenor: %d\n", a,b);
        return ;
    } else if (a < b) {
        printf("Maior: %d\nMenor: %d\n", b,a);
        return ;
    }
    printf("Os valores sao iguais: %d = %d\n", a,b);
    return ;
}

/*
5. Escreva uma funcao que receba um valor inteiro e retorne o seu fatorial.
*/

int fatorial (int numero) {
    int fatorial = 1;
    for (int i =  numero; i > 0; i--)
        fatorial *= i;

    return fatorial;
}

/*
6. Escreva uma funcao que receba o valor de uma temperatura em graus Farenheit e retorne a respectiva temperatura em Celsius.
*/

float fareheitCelsius (float temperatura) {
    return (temperatura - 32) * 5/9;
}

/*
7. Faça um programa que informe as raízes de uma equação do segundo grau, dados os seus coeficientes a, b e c (a x2 + b x + c=0). O
programa deverá utilizar pelo menos duas funções além da main.
*/

#include <math.h>

int verificaDelta(int delta) {
    if (delta >= 0)
        return 1;
    return 0;
}

void calculaRaiz (int a, int b, int c) {
    int delta = b * b - 4 * a * c;
    if (verificaDelta(delta)) {
        float x1 = (-b - sqrt(delta)) / (2.0 * a);
        float x2 = (-b + sqrt(delta)) / (2.0 * a);
        printf("As raizes da equacao sao: %.2f e %.2f.\n", x1, x2);
        return ;
    }
    printf("A seguinte equacao nao possui raizes reais.\n");
}

// void main () {
//     int a, b;
//     printf("Informe dois valores inteiros para realizar a soma: ");
//     scanf("%d %d", &a, &b);
//     printf("O valor da soma e: %d\n", soma(a,b));

//     float preco, imposto;
//     printf("Informe o valor do preco e do imposto: ");
//     scanf("%f %f", &preco, &imposto);
//     printf("O valor total do produto e: R$%.2f\n", calculaPrecoTotal(preco, imposto));

//     printf("Informe valores para realizar uma comparacao: ");
//     scanf("%d %d", &a, &b);
//     printf("O maior valor e: %d\n", maior(a,b));

//     printf("Informe valores para realizar uma comparacao: ");
//     scanf("%d %d", &a, &b);
//     maiorMenorIgual(a, b);

//     int numero;
//     printf("Informe um numero para calcular o fatorial: ");
//     scanf("%d", &numero);
//     printf("O valor do fatorial de %d e: %d\n", numero, fatorial(numero));

//     float temperatura;
//     printf("Informe a temperatura em Farenheit: ");
//     scanf("%f", &temperatura);
//     printf("A temperatura %.2f em Celsius e: %.2f\n", temperatura, fareheitCelsius(temperatura));

//     int c;
//     printf("Informe os valores do coeficientes da equacao: ax^2 + bx + c = 0: ");
//     scanf("%d %d %d", &a, &b, &c);
//     calculaRaiz(a, b, c);

// }


// RECURSIVIDADE

/* 
1. Implemente um programa para calcular a potência x^y, em que x e y são números inteiros a partir de 0. Utilize, para isso, o método 
das multiplicações sucessivas. O programa deverá possuir uma função recursiva para calcular o valor da potência.
*/

int potenciaRecursiva(int x, int y) {
    if (x == 0)
        return 0;
    
    if (y == 0)
        return 1;
    
    return x * potenciaRecursiva(x, y - 1);
}

/*
2. Implemente um programa para calcular o MDC entre dois números inteiros. O
programa deverá usar uma função recursiva para o cálculo do MDC usando o método
das subtrações sucessivas, definido por:
*/

int MDC(int a, int b) {
    if (a == b)
        return a;
    if (a > b)
        return MDC (a - b, b);
    
    return MDC(a, b - a);
}

void main () {
    int x, y;
    printf("Informe os valores de x e de y: ");
    scanf("%d %d", &x, &y);
    printf("O valor de x^y e: %d\n", potenciaRecursiva(x, y));

    int a, b;
    printf("Informe o valor de a e de b para calcular o MDC: ");
    scanf("%d %d", &a, &b);
    printf("O valor do MDC de a e b e: %d.\n", MDC(a, b));
}

