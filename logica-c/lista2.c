#include <stdio.h>

/*
   1. Ler três números do teclado e verificar se o primeiro é maior ou igual à soma dos dois demais.
*/

int  main () {
    int primeiro, segundo, terceiro;
    printf("Informe os valores dos tres numeros: ");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    if ( primeiro <= (segundo + terceiro)) {
        printf("O primeiro numero e maior ou igual a soma do segundo e do terceiro numero!\n");
        return 0;
    }
    printf("O primeiro numero e menor que a soma do segundo e do terceiro numero!\n");
    return 0;
}

/*
    2. Ler três números diferentes entre si e informar qual é o maior.
*/

void main () {
    int x, y, z;
    printf("Informe tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);

    
    if ( x >= y && x >= z) {
        printf("x e o maior valor: %d\n", x);
    } else if ( y >= x && y >= z) {
        printf("y e o maior valor: %d\n", y);
    } else {
        printf("z e o maior valor: %d\n", z);
    }
}

/*
    3. Ler três valores inteiros e mostrá-los em ordem crescente.
*/

void main () {
    int x, y, z;
    printf("Informe tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);

    int maior, meio, menor;    
    if ( x >= y && x >= z) {
        maior = x;
        if ( y >= z ) {
            meio = y;
            menor = z;
        } else {
            meio = z;
            menor = y;
        }
    } else if ( y >= x && y >= z) {
        maior = y;
        if ( x >= z ) {
            meio = x;
            menor = z;
        } else {
            meio = z;
            menor = x;
        }
    } else {
        maior = z;
        if ( x >= y ) {
            meio = x;
            menor = y;
        } else {
            meio = y;
            menor = x;
        }
    }

    printf("Ordem crescente: %d %d %d\n", menor, meio, maior );
}

/* 
    4. Ler os três coeficientes A, B e C de uma equação do segundo grau e informar se ela possui raízes reais iguais, 
    raízes reais diferentes ou raízes imaginárias. Caso ela possua raízes reais, o programa deverá informá-las.
*/

// #include <math.h>

void main () {
    float a, b,c;
    printf("Informe os coeficientes da equacao do segundo grau (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);

    double delta = pow(b, 2) - 4 * a * c;
    if ( delta >= 0) {
        printf("A equacao possui raizes reais");
    } else  {
        printf("A equacao nao possui raiz real\n");
    }
}

/*
    5. Em uma agência de viagens, os estados tem os seguintes códigos e taxas de imposto.
    Código - Estado - Taxa de imposto
    1 – MINAS GERAIS - 0.3
    2 – SÃO PAULO - 0.5
    3 – RIO DE JANEIRO - 0.4
    4 – ESPÍRITO SANTO - 0.2
    5 – BAHIA - 0.2
    Faça um programa que leia o preço P da passagem , o código do estado e calcule o preço total da passagem, que é dado por
    P + P X taxa.
*/

void main () {
    int codigo;
    float passagem, precoTotal;
    printf("Informe o codigo do estado e o preco da passagem: ");
    scanf("%d %f", &codigo, &passagem);

    float taxa;
    if (codigo == 1) {
        taxa = 0.3;
        precoTotal = passagem + passagem * taxa;
    } else if (codigo == 2) {
        taxa = 0.5;
        precoTotal = passagem + passagem * taxa;
    } else if (codigo == 3) {
        taxa = 0.4;
        precoTotal = passagem + passagem * taxa;
    } else if (codigo == 4) {
        taxa = 0.2;
        precoTotal = passagem + passagem * taxa;
    } else {
        taxa = 0.2;
        precoTotal = passagem + passagem * taxa;
    }

    printf("O valor total da passagem e: R$%.2f\n", precoTotal);
}