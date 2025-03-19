#include <stdio.h>
    int main(){
        //Variáveis//
    char  codigo1[5], cidade1[20], estado1[5], codigo2[5], cidade2[20], estado2[5];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2, densidade1, pibPercapita1, densidade2, pibPercapita2;

    //____________________CARTA 1____________________________//

    printf("Carta 1!\n");

    //ESTADO
    printf("\nDigite o estado (A-H): ");
    scanf("%4s", estado1);
    //Codigo da cidade
    printf("Digite o codigo: ");
    scanf("%4s", codigo1);
    //Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade1);
    //População
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    //Área
    printf("Digite a area: ");
    scanf("%f", &area1);
    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    //Pontos turísticos
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    pibPercapita1 = pib1 / (float)populacao1;
    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 - densidade1 + pibPercapita1;
    
      printf("\nCarta 1!\n");   
    printf("\nESTADO: %s\n", estado1);
    printf("CODIGO DA CIDADE: %s\n", codigo1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULACAO: %d Hab\n", populacao1);
    printf("AREA: %.2f Km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", pontos1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: R$%.2f Reais", pibPercapita1);
  
    printf("\n");

    //_________________CARTA 2________________//

    printf("\nCarta 2!\n");

    printf("\nDigite o Estado (A-H): ");
    scanf("%4s", estado2);

    printf("Digite o codigo: ");
    scanf("%4s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("\n\n");

    densidade2 = (float)populacao2 / area2;
    pibPercapita2 = pib2 / (float)populacao2;
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 - densidade2 + pibPercapita2;

    printf("Carta 2!\n");   
    printf("\nESTADO: %s\n", estado2);
    printf("CODIGO DA CIDADE: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULACAO: %d hab\n", populacao2);
    printf("AREA: %.2f Km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pontos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: R$%.2f Reais\n\n", pibPercapita2);


    //POPULAÇÃO
    if ((int)populacao1 > (int)populacao2) {
        printf("População: Carta 1 Venceu: (%d)\n", (populacao1 > populacao2));
       } else {
        printf("População: Carta 2 Venceu: (%d)\n", (populacao1 > populacao2));
       }

    //ÁREA
    if ((int)area1 > (int)area2) {
        printf("Área: Carta 1 Venceu: (%d)\n", (area1 > area2));
       } else {
        printf("Área: Carta 2 Venceu: (%d)\n", (area1 > area2));
       } 
    //PIB
    if ((int)pib1 > (int)pib2) {
        printf("PIB: Carta 1 Venceu: (%d)\n", (pib1 > pib2));
       } else {
        printf("PIB: Carta 2 Venceu: (%d)\n", (pib1 > pib2));
       }

    //PONTOSO TURÍSTICOS
    if (pontos1 > pontos2) {
        printf("Pontos Turísticos: Carta 1 Venceu: (%d)\n", (pontos1 > pontos2));
       } else {
        printf("Pontos Turísticos: Carta 2 Venceu: (%d)\n", (pontos1 > pontos2));
       }

    //DENSIDADE POPULACIONAL
    if ((int)densidade1 > (int)densidade2) {
        printf("Densidade Populacional: Carta 1 Venceu: (%d)\n", (densidade1 > densidade2));
       } else {
        printf("Densidade Populacional: Carta 2 Venceu: (%d)\n", (densidade1 > densidade2));
       }

    //PIB PER CAPITA
    if ((int)pibPercapita1 > (int)pibPercapita2) {
        printf("PIB Per Capita: Carta 1 Venceu: (%d)\n", (pibPercapita1 > pibPercapita2));
       } else {
        printf("PIB Per Capita: Carta 2 Venceu: (%d)\n", (pibPercapita1 > pibPercapita2));
       }

    //SUPERPODER
    if ((int)superpoder1 > (int)superpoder2) {
        printf("SuperPoder: Carta 1 Venceu: (%d)\n", (superpoder1 > superpoder2));
       } else {
        printf("SuperPoder: Carta 2 Venceu: (%d)\n", (superpoder1 > superpoder2));
       }

    return 0;
}
