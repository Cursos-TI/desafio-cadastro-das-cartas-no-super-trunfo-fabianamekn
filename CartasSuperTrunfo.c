#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Fabiana

int main() {
  
    char codigoCarta[50];
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int numeroPontoTuristicos;
    float densidadePopulacional;
    float PIBperCapita;



    printf("*** Desafio Super Trunfo - Países *** \n");
    
    printf("\n");
    
    printf("Carta 01: \n");
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área (em Km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &numeroPontoTuristicos);
    
    densidadePopulacional = populacao / area;

    PIBperCapita = PIB / populacao;


    printf("\n");
    printf("Carta 01: \n");
    printf("\n");
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome do Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.0f\n", area  );
    printf("PIB: %.0f\n", PIB);
    printf("Quantidade de Números Turísticos: %d\n", numeroPontoTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBperCapita);

    printf("\n");

    printf("\n");
    printf("Carta 02: \n");
    printf("\n");
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área (em Km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &numeroPontoTuristicos);
    
    densidadePopulacional = populacao / area;

    PIBperCapita = PIB / populacao;
    
    printf("\n");
    printf("Carta 02: \n");
    printf("\n");
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome do Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.0f\n", area  );
    printf("PIB: %.0f\n", PIB);
    printf("Quantidade de Números Turísticos: %d\n", numeroPontoTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBperCapita);
    


    return 0;
}
