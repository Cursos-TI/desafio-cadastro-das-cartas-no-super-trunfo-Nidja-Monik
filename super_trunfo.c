#include <stdio.h>

// Desafio Super Trunfo - Nivel Novato - Paises 
// Sera solicitado ao usuario dados para preencher duas cartas

int main () {

    // Declarando variáveis 

    int pontosturisticos1;
    int pontosturisticos2;
    int escolhaJogador;

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

    printf("populacao1 > populacao2: %lu\n", populacao1 > populacao2);
    printf("area1 > area2: %d\n", area1 > area2); 
    printf("PIB1 > PIB2: %d\n", PIB1 > PIB2); 
    printf("pontosturisticos1 > pontosturisticos2: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("densidadepopulacional1 > densidadepopulacional2: %d\n", densidadepopulacional1 > densidadepopulacional2);
    printf("PIBpercapita1 > PIBpercapita2: %d\n", PIBpercapita1 > PIBpercapita2); 
    printf("SuperPoder1 > SuperPoder2: %d\n", SuperPoder1 > SuperPoder2); 

    // Menu interativo para o jogador escolher qual atributo quer comparar

    printf("Comparação entre os atributos da Carta 1 e a Carta 2: \n"); 

    printf("Escolha qual atributo você quer comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n"); 
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) 
    {
        case 1:
        if (populacao1 > populacao2) {
            printf("A carta 1-Manaus VENCEU\n");
        } else if (populacao2 > populacao1) {
            printf("A carta 2-Salvador VENCEU\n"); 
        } else {
            printf("Houve EMPATE\n"); 
        }
        break;

        case 2: 
        if (area1 > area2) {
            printf("A carta 1-Manaus VENCEU\n");
        } else if (area2 > area1) {
            printf("A carta 2-Salvador VENCEU\n"); 
        } else {
            printf("Houve EMPATE\n"); 
        }
        break; 

        case 3:
        if (PIB1 > PIB2) {
            printf("A carta 1-Manaus VENCEU\n");
        } else if (PIB2 > PIB1) {
            printf("A carta 2-Salvador VENCEU\n"); 
        } else {
            printf("Houve EMPATE\n");
        }
        break;

        case 4:
        if (pontosturisticos1 > pontosturisticos2) {
            printf("A carta 1-Manaus VENCEU\n");
        } else if (pontosturisticos2 > pontosturisticos1) {
            printf("A carta 2-Salvador VENCEU\n"); 
        } else {
            printf("Houve EMPATE\n");
        }
        break;

        case 5:
        if (densidadepopulacional1 > densidadepopulacional2) {
            printf("A carta 1-Manaus VENCEU\n");
        } else if (densidadepopulacional2 > densidadepopulacional1) {
            printf("A carta 2-Salvador VENCEU\n"); 
        } else {
            printf("Houve EMPATE\n");
        }
        break;

        default: 
        printf("Opção Inválida\n");
        break;
    }

    // Exibição dos resultados após a comparação dos atributos

    printf(" ### Comparação entre a carta Manaus e a carta Salvador ### \n");
    printf("Atributo comparado: População \n"); 
    printf("A população da carta 1-Manaus é 2064000 e a da carta 2-Salvador é 2418000 \n");
    printf("Resultado: Carta 2 (Salvador) venceu! \n");

    
    return 0; 

}