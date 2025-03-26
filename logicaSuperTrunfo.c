#include <stdio.h>

// Carta 1 - São Paulo

int main() {
        int populaçãoA = 11451999;
        printf ("Digite a População - Carta 1:\n");
        scanf("%d", &populaçãoA);
        printf ("A população é de: %d\n");
        
        float áreaA = 1.521;
        printf ("Digite a Área - Carta 1:\n");
        scanf("%f", &áreaA);
        printf ("A área é de: %f\n");
        
        float pibA = 3500000000000;
        printf ("Digite o PIB - Carta 1:\n");
        scanf("%f", &pibA);
        printf ("O PIB é de: %f\n");
        
        int número_de_pontos_turísticosA = 36;
        printf ("Digite o número de pontos turísticos - Carta 1:\n");
        scanf("%d", &número_de_pontos_turísticosA);
        printf ("O Número de Pontos Turísticos é de: %d\n");

// Carta 2 - Rio de Janeiro

        int populaçãoB = 6211000;
        printf ("Digite a População - Carta 2:\n");
        scanf("%d", &populaçãoB);
        printf ("A população é de: %d\n");
        
        float áreaB = 1200;
        printf ("Digite a Área - Carta 2:\n");
        scanf("%f", &áreaB);
        printf ("A área é de: %f\n");
        
        float pibB = 1150000000000;
        printf ("Digite o PIB - Carta 2:\n");
        scanf("%f", &pibB);
        printf ("O PIB é de: %f\n");
        
        int número_de_pontos_turísticosB = 58;
        printf ("Digite o número de pontos turísticos - Carta 2:\n");
        scanf("%d", &número_de_pontos_turísticosB);
        printf ("O número de pontos turísticos é de: %d\n");

// Comparação

        if (populaçãoA > populaçãoB) {
            printf ("Cidade 1 tem maior população.\n");
        } else {
            printf ("Cidade 2 tem maior população.\n");
        }

        if (áreaA > áreaB) {
            printf ("Cidade 1 tem maior área.\n");
        } else {
            printf ("Cidade 2 tem maior área.\n");
        }

        if (pibA > pibB) {
            printf ("Cidade 1 tem maior pib.\n");
        } else {
            printf ("Cidade 2 tem maior pib.\n");
        }

        if (número_de_pontos_turísticosA > número_de_pontos_turísticosB) {
            printf ("Cidade 1 tem maior número de pontos turísticos.\n");
        } else {
            printf ("Cidade 2 tem maior número de pontos turísticos.\n");
        }

// Resultado

        printf ("A cidade vencedora foi a que fez mais pontos em cada atributo.");

     return 0;
    }