#include <stdio.h>

int main()
{
    // declarações para primeira carta
    char estado1;
    char codigo1[2];
    char cidade1[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float media_populacao1;
    float pib_percapita1;
    
    // declarações para segunda carta
    char estado2;
    char codigo2[2];
    char cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float media_populacao2;
    float pib_percapita2;
    
        
    // leitura da Primeira carta
    printf("Insira as informações da primera carta\n");
    printf("Estado (A-H): ");
        scanf("%c", &estado1);    
    printf("Código (de 1 a 2): ");
        scanf("%s",codigo1);
    printf("Nome da Cidade: ");
        scanf("%s", cidade1);
    printf("Quantidade da População: ");
        scanf("%d", &populacao1);
    printf("Área (em km²):  ");
        scanf("%f", &area1);
    printf("PIB: ");
        scanf("%f", &pib1);
    printf("Número de pontos turisticos ");
        scanf("%d", &pontosTuristicos1);
        
    // densidade da população 1
    media_populacao1 =  populacao1 / area1;
        
    //PIB Per Capita
    pib_percapita1 = (pib1 + populacao1) / 2;
    
    
    printf("\n ---------------------------------------\n");

        
    // leitura da segunda carta
    printf("Insira as informações da segunda carta\n");
    printf("Estado (A-H): ");
        scanf(" %c", &estado2);    
     printf("Código (de 1 ao 2): ");
        scanf("%s",codigo2);
    printf("Nome da Cidade: ");
        scanf("%s", cidade2);
    printf("Quantidade da População: ");
        scanf("%d", &populacao2);
    printf("Área (em km²):  ");
        scanf("%f", &area2);
    printf("PIB: ");
        scanf("%f", &pib2);
    printf("Número de pontos turisticos: ");
        scanf("%d", &pontosTuristicos2);
          
    // densidade populacional 02
    media_populacao2 = populacao2 / area2 ;
    
    //PIB Per Capita
    pib_percapita2 = (pib2 + populacao2) / 2;

        
    //exibição da 1°carta
    printf("\nCarta 1:\n ");
    printf("\nEstado %c\n", estado1);
    printf("\nCódigo %s\n", codigo1);
    printf("\nCidade %s\n", cidade1);
    printf("\nPopulação %d\n", populacao1);
    printf("\nÁrea: %.2f km²\n", area1);
    printf("\nPIB %.2f bilhões\n ", pib1);
    printf("\nPontos turisticos %d\n", pontosTuristicos1);
    printf("Densidade da população: %.1f\n ", media_populacao1);
    printf("PIB Per capita: %.1f\n ", pib_percapita1);

        
    //exibição da 2°carta
    printf("\nCarta 2:\n ");
    printf("\nEstado %c\n", estado2);
    printf("\nCódigo %s\n", codigo2);
    printf("\nCidade %s\n", cidade2);
    printf("\nPopulação %d\n", populacao2);
    printf("\nÁrea: %.2f km²\n", area2);
    printf("\nPIB %.2f bilhões\n ", pib2);
    printf("\nPontos turisticos %d\n", pontosTuristicos2);
    printf("Densidade da população:%.1f\n ", media_populacao2);
    printf("PIB Per capita: %.1f\n ", pib_percapita2);
    
        return 0;
    
}
