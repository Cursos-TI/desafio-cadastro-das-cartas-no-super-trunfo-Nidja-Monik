#include <stdio.h>

// Desafio Super Trunfo - Nivel Novato - Paises 
// Sera solicitado ao usuario dados para preencher duas cartas

int main () {

    // Declarando variáveis 

    int pontosturisticos1;
    int pontosturisticos2;

    unsigned long int populacao1; 
    unsigned long int populacao2;

    float area1;
    float area2;

    float PIB1;
    float PIB2;

    float densidadepopulacional1;
    float densidadepopulacional2;

    float PIBpercapita1;
    float PIBpercapita2;

    float SuperPoder1;
    float SuperPoder2;

    char estado;
    char codigodacarta [20];
    char nomedacidade [50];
    int  resultado, Carta1, Carta2;
    
    // DADOS DA CARTA 1 

    printf("DADOS DA CARTA 1 \n");

    printf("Digite a letra inicial do Estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: \n"); 
    scanf("%s", &codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao1);

    printf("Qual a area da cidade? \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB1);

    printf("Qual a quantidade de pontos turisticos na cidade? \n");
    scanf ("%d", &pontosturisticos1);


    // DADOS DA CARTA 2

    printf("DADOS DA CARTA 2 \n");

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n"); 
    scanf("%s", &codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Qual o numero de habitantes? \n");
    scanf("%d", &populacao2);

    printf("Qual a area da cidade? \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &PIB2);

    printf("Qual a quantidade de pontos turisticos na cidade? \n");
    scanf ("%d", &pontosturisticos2);

    // Cálculo para a Densidade Populacional e o PIB Per Capita

    densidadepopulacional1 = (float) populacao1 / area1; 
    PIBpercapita1 = (float) PIB1 / populacao1; 

    densidadepopulacional2 = (float) populacao2 / area2; 
    PIBpercapita2 = (float) PIB2 / populacao2; 

    // Calculando o Super Poder

    SuperPoder1 = (float)populacao1 + area1 + PIB1 + (float)pontosturisticos1 + PIBpercapita1 + (1/densidadepopulacional1);
    SuperPoder2 = (float)populacao2 + area2 + PIB2 + (float)pontosturisticos2 + PIBpercapita2 + (1/densidadepopulacional2);

    // Será apresentado abaixo os dados fornecidos pelo usuario para as duas cartas

    printf("Segue abaixo os dados da carta 1 e carta 2 \n");

    printf("DADOS CARTA 1: \n");
    printf("Estado: A \n");
    printf("Codigo da carta: A01 \n");
    printf("Nome da cidade: Manaus \n");
    printf("Populacao: 2064000 \n");
    printf("Area: 11401 Km ao quadrado \n");
    printf("PIB: 103281 bilhoes de reais \n"); 
    printf("Numeros de pontos turisticos: 40 \n");
    printf("Densidade Populacional: %.2f habitantes por Km quadrado \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais \n", PIBpercapita1);  

    printf("DADOS DA CARTA 2: \n");
    printf("Estado: B \n");
    printf("Codigo da carta: B02 \n");
    printf("Nome da cidade: Salvador \n");
    printf("Populacao: 2418000 \n");
    printf("Area: 6398 Km ao quadrado \n");
    printf("PIB: 62954 bilhoes de reais \n");
    printf("Numeros de pontos turisticos: 60 \n"); 
    printf("Densidade Populacional: %.2f habitantes por Km quadrado \n", densidadepopulacional2); 
    printf("PIB per Capita: %.2f reais \n", PIBpercapita2); 

    // Comparações entre as duas cartas

    resultado = Carta1 > Carta2; 

    printf("A Carta 1 tem uma população de %lu, área de %.2f, PIB de %.2f, %d pontos turísticos, densidade populacional de %.2f, PIB per Capita de %.2f e %.2f de super poder\n", populacao1, area1, PIB1, pontosturisticos1, densidadepopulacional1, PIBpercapita1, SuperPoder1);
    printf("A Carta 2 tem uma população de %lu, área de %.2f, PIB de %.2f, %d pontos turísticos, densidade populacional de %.2f, PIB per Capita de %.2f e %.2f de super poder\n", populacao2, area2, PIB2, pontosturisticos2, densidadepopulacional2, PIBpercapita2, SuperPoder2);
    
    return 0; 

}