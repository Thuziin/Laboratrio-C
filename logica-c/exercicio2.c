#include <stdio.h>
#include <conio.h>

/*
    1) Deseja-se avaliar o desempenho de atletas em uma prova de resistência. Para isso, para cada atleta, será medida distância
    percorrida por ele o tempo que ele levou para percorrer tal distância. O desempenho é dado pela velocidade atingida pelo atleta.
    Faça um programa que:
        - Leia os dados dos atletas: código, distância e tempo.
        - Mostre os dados dos atleta com melhor desempenho: código, distância, tempo e velocidade.
        - Mostre a velocidade média dos atletas.
*/

void main () {
    char resposta;
    int codigo, aux = 0, melhorAtleta;
    float tempo, distancia, velocidade, maiorDesempenho = 0, melhorTempo, maiorDistancia, totalVelocidade = 0;
    do {
        printf("\nInforme o codigo do atleta, o tempo gasto, a distancia percorrida: ");
        scanf("%d %f %f",  &codigo, &tempo, &distancia);
        velocidade = distancia / tempo;
        aux++;
        totalVelocidade += velocidade;

        if (velocidade > maiorDesempenho) {
            maiorDesempenho = velocidade;
            melhorAtleta = codigo;
            melhorTempo = tempo;
            maiorDistancia = distancia;
        }



        printf("Deseja informar mais um dado de atleta? (S/N): ");
        resposta = getche();
    } while (resposta == 's' || resposta == 'S');

    const float velocidadeMedia = totalVelocidade / aux;

    printf("\nO melhor atleta foi: %d, com %.2f Km/h, com tempo %.2f horas, e distancia %.2f km.\nA velocidade media dos atletas foi de %.2f", melhorAtleta, maiorDesempenho, melhorTempo, maiorDistancia, velocidadeMedia);
}

/*
    2) Faça um programa para gerar a seguinte série:
    1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

void main () {
    for (int i = 1, j = 1; i <= 50; i++, j+=2) {
        if (i == 50) {
            printf("%d/%d ", j, i);    
        } else {
            printf("%d/%d + ", j, i);
        }
    }
}