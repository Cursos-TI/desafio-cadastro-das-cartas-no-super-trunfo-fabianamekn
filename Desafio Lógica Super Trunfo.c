#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Fabiana

int main() {
  
    char codigoA[50], codigoB[50];
    char estadoA[50], estadoB[50];
    char cidadeA[50], cidadeB[50];
    int populacaoA, populacaoB; 
    float areaA, areaB;
    float PIBA, PIBB;
    int numeroPontoTuristicosA, numeroPontoTuristicosB;
    float densidadePopulacionalA, densidadePopulacionalB;
    float PIBperCapitaA, PIBperCapitaB;
    char cidadeVencedora;


    printf("*** Desafio Super Trunfo - Países *** \n");
    
    printf("\n");
    
    printf("Carta 01: \n");
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoA);

    printf("Digite o Estado: \n");
    scanf("%s", &estadoA);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidadeA);

    printf("Digite a População: \n");
    scanf("%d", &populacaoA);

    printf("Digite a Área (em Km²): \n");
    scanf("%f", &areaA);

    printf("Digite o PIB: \n");
    scanf("%f", &PIBA);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &numeroPontoTuristicosA);
    
    densidadePopulacionalA = populacaoA / areaA;

    PIBperCapitaA = PIBA / populacaoA;


    printf("\n");
    printf("Carta 01: \n");
    printf("\n");
    printf("Código da Carta: %s\n", codigoA);
    printf("Nome do Estado: %s\n", estadoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área em Km²: %.0f\n", areaA  );
    printf("PIB: %.0f\n", PIBA);
    printf("Quantidade de Números Turísticos: %d\n", numeroPontoTuristicosA);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
    printf("PIB per Capita: %.2f\n", PIBperCapitaA);

    printf("\n");

    printf("\n");
    printf("Carta 02: \n");
    printf("\n");
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoB);

    printf("Digite o Estado: \n");
    scanf("%s", &estadoB);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidadeB);

    printf("Digite a População: \n");
    scanf("%d", &populacaoB);

    printf("Digite a Área (em Km²): \n");
    scanf("%f", &areaB);

    printf("Digite o PIB: \n");
    scanf("%f", &PIBB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &numeroPontoTuristicosB);
    
    densidadePopulacionalB = populacaoB / areaB;

    PIBperCapitaB = PIBB / populacaoB;
    
    printf("\n");
    printf("Carta 02: \n");
    printf("\n");
    printf("Código da Carta: %s\n", codigoB);
    printf("Nome do Estado: %s\n", estadoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área em Km²: %.0f\n", areaB  );
    printf("PIB: %.0f\n", PIBB);
    printf("Quantidade de Números Turísticos: %d\n", numeroPontoTuristicosB);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
    printf("PIB per Capita: %.2f\n", PIBperCapitaB);
    
// Comparação de Cartas:

    if (PIBA > PIBB) {
         printf("Cidade 1 tem maior PIB.\n");
     } else {
         printf("Cidade 2 tem maior PIB.\n");
     }

// Exibição dos Resultados:
    if (PIBA > PIBB) {
         printf("Cidade 1 é a vencedora!\n");
     } else {
         printf("Cidade 2 é a vencedora!\n");
     }

    return 0;
}
