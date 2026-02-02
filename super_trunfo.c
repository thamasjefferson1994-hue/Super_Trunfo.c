#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países;
// Tema 3 - Nível Aventureiro - Desenvolvendo a lógica do jogo;
int main(){

        //variáveis carta1;

    char País1[20];;
    unsigned long long int População1;
    float Area_km21;
    float PIB1;
    int Numero_de_pontos_turisticos1;
    float Densidade_demografica1;
 
         //variáveis País 2;

    char País2[20];
    unsigned long long int População2;
    float Area_km22;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_demografica2;

          //variável de escolha do jogador

    int Comparação1;

         //entrada de dados País1;

    printf("***País 1:*** \n");
    printf("Digite o nome do País 1: \n");
    scanf("%s", &País1);

    printf("Digite o número da população: \n");
    scanf("%llu", &População1);

    printf("Digite a área em km2: \n");
    scanf("%f", &Area_km21);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos1);

    // Cálculo País 1;

    Densidade_demografica1 = (float)População1 / Area_km21;

        //entrada de dados País 2;

    printf("***País 2:*** \n");
    printf("Digite o nome do país 2: \n");
    scanf("%s", &País2);

    printf("Digite o número da população: \n");
    scanf("%llu", &População2);

    printf("Digite a área em km2: \n");
    scanf("%f", &Area_km22);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos2);

    //Cálculo País 2;

    Densidade_demografica2 = (float)População2 / Area_km22;


         //sáida de dados País 1;

    printf("***País 1:*** \n");
    printf("País: %s \n", País1);
    printf("População: %llu \n", População1);
    printf("Área em km2: %.2f \n", Area_km21);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de pontos turísticos: %d \n", Numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f km2 \n", Densidade_demografica1);

         //saída de dados País 2;

    printf("***País 2:*** \n");
    printf("País: %s \n", País2);
    printf("População: %llu \n", População2);
    printf("Área em km2: %.2f \n", Area_km22);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de pontos turísticos: %d \n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f km2 \n", Densidade_demografica2);

    // Menu interativo de comparação

    Comparação1 = rand() %5 + 1;


    printf("*** Atributos para comparação: ***\n");
    printf("População - 1 \n");
    printf("Área - 2 \n");
    printf("PIB - 3 \n");
    printf("Número de pontos turísticos - 4 \n");
    printf("Densidade demografica - 5 \n");
    printf("*** Escolha um atributo:*** \n");
    scanf("%d", &Comparação1);

    switch(Comparação1){
     case 1:
          if (População1 > População2){
               printf("O país vencedor é: %s \n", País1);
               printf("Com população de: %llu \n", População1);
               printf("O país: %s \n", País2);
               printf("Tem populção de: %llu \n", População2);
          } else if (População1 < População2){
               printf("O país vencedor é: %s \n", País2);
               printf("Com população de: %llu \n", População2);
               printf("O país: %s \n", País1);
               printf("Tem população de: %llu \n", População1);
               
               
          } else if (População1 == População2){
               printf("Os países: \n");
               printf("%s \n", País1);
               printf("%llu \n", População1);
               printf("%s \n", País2);
               printf("%s \n", População2);
               printf("Empataram pois têm número de população igual.");
               }  
     break;     
     case 2:
          if(Area_km21 > Area_km22){
               printf("O país vencedor é: %s \n", País1);
               printf("Com Área de: %.2f \n", Area_km21);
               printf("O país: %s \n", País2);
               printf("Tem Área de: %.2f \n", Area_km22);

          } else if (Area_km21 < Area_km22){
               printf("O país vencedor é: %s \n", País2);
               printf("Com Área de: %.2f \n", Area_km22);
               printf("O país: %s \n", País1);
               printf("Tem Área de: %.2f \n", Area_km22);
          
          } else if (Area_km21 == Area_km22){
               printf("Os países: \n");
               printf("%s \n", País1);
               printf("%.2f \n", Area_km21);
               printf("%s \n", País2);
               printf("%.2f \n", Area_km22);
               printf("Empataram pois têm áreas iguais.");
               }
     break;
     case 3:
          if(PIB1 > PIB2){
               printf("O país vencedor é: %s \n", País1);
               printf("Com PIB de: %.2f \n", PIB1);
               printf("O país: %s \n", País2);
               printf("Tem PIB de: %.2f \n", PIB2);
               
          } else if (PIB1 < PIB2){
               printf("O país vencedor é: %s \n", País2);
               printf("Com PIB de: %.2f \n", PIB2);
               printf("O país: %s \n", País1);
               printf("Tem PIB de: %.2f \n", PIB1);

          } else if (PIB1 == PIB2){
               printf("Os países: \n");
               printf("%s \n", País1);
               printf("%.2f \n", PIB1);
               printf("%s \n", País2);
               printf("%.2f \n", PIB2);
               printf("Empataram pois têm PIB iguais.");
               }
     break;
     case 4:
          if(Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2){
               printf("O país vencedor é: %s \n", País1);
               printf("Com número de pontos turísticos de: %d \n", Numero_de_pontos_turisticos1);
               printf("O país: %s \n", País2);
               printf("Tem número de pontos turísticos de: %d \n", Numero_de_pontos_turisticos2);

          } else if (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2){
               printf("O país vencedor é: %s \n", País2);
               printf("Com número de pontos turísticos de: %d \n", Numero_de_pontos_turisticos2);
               printf("O país: %s \n", País1);
               printf("Tem número de pontos turísticos de: %d \n", Numero_de_pontos_turisticos1);

          } else if (PIB1 == PIB2){
               printf("Os países: \n");
               printf("%s \n", País1);
               printf("%d \n", Numero_de_pontos_turisticos1);
               printf("%s \n", País2);
               printf("%d \n", Numero_de_pontos_turisticos2);
               printf("Empataram pois têm número de pontos turísticos iguais.");
               }
     break;
     case 5:
          if (Densidade_demografica1 < Densidade_demografica2){
               printf("O país vencedor é: %s \n", País1);
               printf("Com densidade demográfica de: %.2f \n", Densidade_demografica1);
               printf("O país: %s \n", País2);
               printf("Tem densidade demográfica de: %.2f \n", Densidade_demografica2);
          } else if (Densidade_demografica1 > Densidade_demografica2){
               printf("O país vencedor é: %s \n", País2);
               printf("Com densidade demográfica de: %.2f \n", Densidade_demografica2);
               printf("O país: %s \n", País1);
               printf("Tem densidade demográfica de: %.2f \n", Densidade_demografica1);
               
               
          } else if (Densidade_demografica1 == Densidade_demografica2){
               printf("Os países: \n");
               printf("%s \n", País1);
               printf("%.2f \n", Densidade_demografica1);
               printf("%s \n", País2);
               printf("%.2f \n", Densidade_demografica2);
               printf("Empataram pois têm a densidade demográfica igual.");
               }
     break;
     default: 
          printf("Escolha errada!");

     }



     





    return 0;


}
