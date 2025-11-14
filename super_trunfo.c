#include <stdio.h>

int main(){

    //variáveis carta1

    char estado[20];
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    int população;
    float área_km2;
    float PIB;
    int Número_de_pontos_turísticos;

    //entrada de dados carta1

    printf("Carta1:\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite o número da população: \n");
    scanf("%f", &população);

    printf("Digite a área em km2: \n");
    scanf("%f", &área_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Número_de_pontos_turísticos);

    //sáida de dados carta1

    printf("Carta1: \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo_da_carta);
    printf("Cidade: %s \n", nome_da_cidade);
    printf("População: %d \n", população);
    printf("Área em km2: %f \n", área_km2);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos turísticos: %d \n", Número_de_pontos_turísticos);

        //variáveis carta2

    char Estado[20];
    char Codigo_da_carta[10];
    char Nome_da_cidade[50];
    int População;
    float Área_km2;
    float Pib;
    int número_de_pontos_turísticos;

        //entrada de dados carta2

    printf("Carta2:\n");

    printf("Digite o estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_cidade);

    printf("Digite o número da população: \n");
    scanf("%f", &População);

    printf("Digite a área em km2: \n");
    scanf("%f", &Área_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &número_de_pontos_turísticos);

    //saída de dados carta2

    printf("Carta2: \n");
    printf("Estado: %s \n", Estado);
    printf("Código da carta: %s \n", Codigo_da_carta);
    printf("Cidade: %s \n", Nome_da_cidade);
    printf("População: %d \n", População);
    printf("Área em km2: %f \n", Área_km2);
    printf("PIB: %f \n", Pib);
    printf("Número de pontos turísticos: %d \n", número_de_pontos_turísticos);


    return 0;


}