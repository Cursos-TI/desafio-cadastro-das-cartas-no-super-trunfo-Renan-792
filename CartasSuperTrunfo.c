#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// declaracoes para primeira carta
	char estado1;
	char codigo1[2];
	char cidade1[100];
	unsigned long int populacao1;
	float area1, pib1;
	int pontosTuristicos1;
	float densidade1, pib_percapita1, superPoder1 ;

	// declaracoes para segunda carta
	char estado2;
	char codigo2[2];
	char cidade2[100];
	unsigned long int populacao2;
	float area2, pib2;
	int pontosTuristicos2;
	float densidade2, pib_percapita2, superPoder2;
	

	// leitura da Primeira carta
	printf("Insira as informacoes da primera carta\n");
	printf("Estado (A-H): ");
	scanf("%c", &estado1);
	printf("Codigo (de 1 a 2): ");
	scanf("%s",codigo1);
	printf("Nome da Cidade: ");
	scanf("%s", cidade1);
	printf("Quantidade da Populacao: ");
	scanf("%lu", &populacao1);
	printf("Area (em kmB2):  ");
	scanf("%f", &area1);
	printf("PIB: ");
	scanf("%f", &pib1);
	printf("Numero de pontos turisticos ");
	scanf("%d", &pontosTuristicos1);

	// densidade da populacao 1
	densidade1 =  populacao1 / area1;
	pib_percapita1 = pib1 / populacao1;
	superPoder1 = populacao1 + pib1 + pontosTuristicos1 + area1 + pib_percapita1 + (1.0 / densidade1);

    //PIB Per Capita
    pib_percapita1 = (pib1 + populacao1) / 2;

	// densidade populacional 02
	densidade2 = populacao2 / area2;
	pib_percapita1 = pib1 / populacao1;
	superPoder2 = populacao2 + pib2 + pontosTuristicos2 + area2 + pib_percapita2 +  (1.0 / densidade2);

	//PIB Per Capita
	pib_percapita2 = (pib2 + populacao2) / 2;

	printf("\n ---------------------------------------\n");


	// leitura da segunda carta
	printf("Insira as informacoes da segunda carta\n");
	printf("Estado (A-H): ");
	scanf(" %c", &estado2);
	printf("Codigo (de 1 ao 2): ");
	scanf("%s",codigo2);
	printf("Nome da Cidade: ");
	scanf("%s", cidade2);
	printf("Quantidade da Populacao: ");
	scanf("%lu", &populacao2);
	printf("Area (em km²):  ");
	scanf("%f", &area2);
	printf("PIB: ");
	scanf("%f", &pib2);
	printf("Numero de pontos turisticos: ");
	scanf("%d", &pontosTuristicos2);




	//exibicao da carta 1
	printf("\nCarta 1:\n ");
	printf("\nEstado %c\n", estado1);
	printf("\nCodigo %s\n", codigo1);
	printf("\nCidade %s\n", cidade1);
	printf("\nPopulacao %lu\n", populacao1);
	printf("\nArea: %.2f km²\n", area1);
	printf("\nPIB %.2f bilhoes\n ", pib1);
	printf("\nPontos turisticos %d\n", pontosTuristicos1);
	printf("\nDensidade da populacao %.1f\n ", densidade1);
	printf("\nPIB Per capita: %.1f\n ", pib_percapita1);


	//exibicao da carta 2
	printf("\nCarta 2:\n ");
	printf("\nEstado %c\n", estado2);
	printf("\nCodigo %s\n", codigo2);
	printf("\nCidade %s\n", cidade2);
	printf("\nPopulacao%lu\n", populacao2);
	printf("\nArea: %.2f km\n", area2);
	printf("\nPIB %.2f bilhoes\n ", pib2);
	printf("\nPontos turisticos %d\n", pontosTuristicos2);
	printf("\nDensidade da populacao:%.1f\n ", densidade2);
	printf("\nPIB Per capita: %.1f\n ", pib_percapita2);
	
	char cartaAtributo[] = "População";
	
	printf("Comparacao: Atributo: (%s)\n ", cartaAtributo);
	printf("carta 1 -> %s (%c) %lu \n", cidade1, estado1, populacao1);
	printf("carta 2 -> %s (%c) %lu \n", cidade1, estado2, populacao2);
	
	printf("_______________________________________________");

    if (populacao1 > populacao2) {
	    printf("\nCarta 1 (%s) é a Vencedora!\n", cidade1);
	} else if (populacao1 < populacao2) {
	    printf ("\nCarta 2 (%s) é a Vencedora\n", cidade2); 
	} else {
	    printf("\nEmpate!\n");
	};
	
		// switch
	int escolha;
	printf("1. Nome do pais\n");
	printf("2. Populacao\n");
	printf("3. Area\n");
	printf("4. PIB\n");
	printf("5. N° de pontos turisticos\n");
	printf("6. Densidade demografica\n");
	scanf("%d", &escolha);

	
	
	switch(escolha)
	{
	    case 1: 
	        printf("Atributo: Cartas %s e %s\n", cidade1, cidade2);
	        break;
	
	    case 2: 
	   
	        printf("Atributo: Populacao \n%s: %lu\n%s: %lu\n", cidade1, populacao1, cidade2, populacao2);
	        if (populacao1 > populacao2){
	            printf("### VENCEDOR: %s ###\n", cidade1);
	        }  else if (populacao1 < populacao2) {
	            printf("### VENCEDOR: %s ###\n", cidade2);
	        } else {
	            printf("EMPATE! ");
	        }
	        break;
	        
	    case 3: 
	        printf("Atributo: Area \n%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
	        if(area1 > area2){
	            printf("### VENCEDOR: %s ###\n", cidade1);
	        }  else if(area1 < area2) {
	            printf("### VENCEDOR: %s ###\n", cidade2);
	        } else {
	            printf("EMPATE! ");
	        }
	        break;
	        
	    case 4: 
	        printf("Atributo: PIB\n%s: %.2f\n%s: %.2f\n", cidade1, pib1, cidade2, pib2);
	        if(pib1 > pib2){
	            printf("### VENCEDOR: %s ###\n", cidade1);
	        }  else if (pib1 < pib2) {
	            printf("### VENCEDOR: %s ###\n", cidade2);
	        } else {
	            printf("EMPATE! ");
	        }
	        break;
	        
	    case 5: 
	        printf("Atributo: Pontos turisticos\n%s: %d\n%s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
	        if(pontosTuristicos1 > pontosTuristicos2){
	            printf("### VENCEDOR: %s ###\n", cidade1);
	        }  else if(pontosTuristicos1 < pontosTuristicos2) {
	            printf("### VENCEDOR: %s ###\n", cidade2);
	        } else {
	            printf("EMPATE! ");
	        }
	        break;
	        
	    case 6: 
	        printf("Atributo: Densidade demográfica \n%s: %.1f\n%s: %.1f\n", cidade1, densidade1, cidade2, densidade2);
	        if(densidade1 > densidade2){
	            printf("### VENCEDOR: %s ###\n", cidade1);
	        }  else if(pontosTuristicos1 < pontosTuristicos2) {
	            printf("### VENCEDOR: %s ###\n", cidade2);
	        } else {
	            printf("EMPATE! ");
	        }
	        break;
                default:
                printf("Opcao invalida");
	}
	
	return 0;

}
