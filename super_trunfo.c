#include <stdio.h>

// Desafio Super Trunfo - Países;
// Tema 2 - Nível Aventureiro - Calcular densidade populacional e PIB per capta;
int main(){

        //variáveis carta1;

    char Estado1[20];
    char Codigo_da_carta1[10];
    char Nome_da_cidade1[50];
    unsigned long long int População1;
    float Area_km21;
    float PIB1;
    int Numero_de_pontos_turisticos1;
    float Densidade_populacional1;
    float PIB_per_capta1;
    float Super_poder1;
 
         //variáveis carta2;

    char Estado2[20];
    char Codigo_da_carta2[10];
    char Nome_da_cidade2[50];
    unsigned long long int População2;
    float Area_km22;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_populacional2;
    float PIB_per_capta2;
    float Super_poder2;

         //entrada de dados carta1;

    printf("Carta 1:\n");

    printf("Digite o estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_cidade1);

    printf("Digite o número da população: \n");
    scanf("%llu", &População1);

    printf("Digite a área em km2: \n");
    scanf("%f", &Area_km21);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos1);

    // Cálculo carta1;

    Densidade_populacional1 = (float)População1 / Area_km21;

    PIB_per_capta1 = (float)PIB1 / População1;

        //entrada de dados carta2;

    printf("Carta 2:\n");

    printf("Digite o estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_cidade2);

    printf("Digite o número da população: \n");
    scanf("%llu", &População2);

    printf("Digite a área em km2: \n");
    scanf("%f", &Area_km22);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos2);

    //Cálculo carta2;

    Densidade_populacional2 = (float)População2 / Area_km22;

    PIB_per_capta2 = (float)PIB2 / População2;


         //sáida de dados carta1;

    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado1);
    printf("Código da carta: %s \n", Codigo_da_carta1);
    printf("Cidade: %s \n", Nome_da_cidade1);
    printf("População: %llu \n", População1);
    printf("Área em km2: %.2f \n", Area_km21);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de pontos turísticos: %d \n", Numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f km2 \n", Densidade_populacional1);
    printf("PIB per capta: %.2f \n", PIB_per_capta1 );

         //saída de dados carta2;

    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado2);
    printf("Código da carta: %s \n", Codigo_da_carta2);
    printf("Cidade: %s \n", Nome_da_cidade2);
    printf("População: %llu \n", População2);
    printf("Área em km2: %.2f \n", Area_km22);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de pontos turísticos: %d \n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f km2 \n", Densidade_populacional2);
    printf("PIB per capta: %.2f \n", PIB_per_capta2);

          //Cálculo do super poder;   

    Super_poder1 = (float)População1 + Area_km21 + PIB1 + (float)Numero_de_pontos_turisticos1 + PIB_per_capta1 - Densidade_populacional1;

    Super_poder2 = (float)População2 + Area_km22 + PIB2 + (float)Numero_de_pontos_turisticos2 + PIB_per_capta2 - Densidade_populacional2;

    printf("Super Poder Carta 1: %.2f \n", Super_poder1);
    printf("Super Poder Carta 2: %.2f \n", Super_poder2);

          //Comparação de cartas 

          //Saída de dados Comparação carta 1  
    printf("População Carta 1 venceu: %d \n", População1 > População2);
    printf("Área Carta 1 venceu: %d \n", Area_km21 > Area_km22);
    printf("PIB Carta 1 venceu: %d \n", PIB1 > PIB2);
    printf("Pontos turísticos Carta 1 venceu: %d \n", Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2);
    printf("Densidade populacional Carta 1 venceu: %d \n", Densidade_populacional1 < Densidade_populacional2);
    printf("PIB per capta Carta 1 venceu: %d \n", PIB_per_capta1 > PIB_per_capta2);
    printf("Super poder Carta 1 venceu: %d \n", Super_poder1 > Super_poder2);

          //Saída de dados Comparação carta 2

    printf("População Carta 2 venceu: %d \n", População2 > População1);
    printf("Área Carta 2 venceu: %d \n", Area_km22 > Area_km21);
    printf("PIB Carta 2 venceu: %d \n", PIB2 > PIB1);
    printf("Pontos turísticos Carta 2 venceu: %d \n", Numero_de_pontos_turisticos2 > Numero_de_pontos_turisticos1);
    printf("Densidade populacional Carta 2 venceu: %d \n", Densidade_populacional2 < Densidade_populacional1);
    printf("PIB per capta Carta 2 venceu: %d \n", PIB_per_capta2 > PIB_per_capta1);
    printf("Super poder Carta 2 venceu: %d \n", Super_poder2 > Super_poder1);



    return 0;


}
