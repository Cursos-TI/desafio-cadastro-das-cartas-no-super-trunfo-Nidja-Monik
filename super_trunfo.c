#include <stdio.h>

// Desafio Super Trunfo - Nivel Novato - Paises 
// Sera solicitado ao usuario dados para preencher duas cartas

int main () {

    int pontosturisticos, populacao;
    float area, PIB; 
    char estado;
    char codigodacarta [20];
    char nomedacidade [50];

    // DADOS DA CARTA 1 

    printf("DADOS DA CARTA 1 \n");

    printf("Digite a letra inicial do Estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: \n"); 
    scanf("%s", &codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao);

    printf("Qual a area da cidade? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB);

    printf("Qual a quantidade de pontos turisticos na cidade? \n");
    scanf ("%d", &pontosturisticos);


    // DADOS DA CARTA 2

    printf("DADOS DA CARTA 2 \n");

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n"); 
    scanf("%s", &codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao);

    printf("Qual a area da cidade? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB);

    printf("Qual a quantidade de pontos turisticos na cidade? \n");
    scanf ("%d", &pontosturisticos);

    // Sera apresentado abaixo os dados fornecidos pelo usuario para as duas cartas

    printf("Segue abaixo os dados da carta 1 e carta 2 \n");

    printf("DADOS CARTA 1: \n");
    printf("Estado: A \n");
    printf("Codigo da carta: A01 \n");
    printf("Nome da cidade: Manaus \n");
    printf("Populacao: 2064000 \n");
    printf("Area: 11401 Km ao quadrado \n");
    printf("PIB: 103281 bilhoes de reais \n"); 
    printf("Numeros de pontos turisticos: 40 \n");

    printf("DADOS DA CARTA 2: \n");
    printf("Estado: B \n");
    printf("Codigo da carta: B02 \n");
    printf("Nome da cidade: Salvador \n");
    printf("Populacao: 2418000 \n");
    printf("Area: 6398 Km ao quadrado \n");
    printf("PIB: 62954 bilhoes de reais \n");
    printf("Numeros de pontos turisticos: 60 \n"); 

    printf ("Obrigada! \n"); 

    return 0; 

}