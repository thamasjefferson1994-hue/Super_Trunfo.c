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
    float Somapoparea1;
    float SomapopPIB1;
    float Somapopnumeropontoturistico1;
    float Somapopdensidadedemo1;
         //variáveis País 2;

    char País2[20];
    unsigned long long int População2;
    float Area_km22;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_demografica2;
    float Somapoparea2;
    float SomapopPIB2;
    float Somapopnumeropontoturistico2;
    float Somapopdensidadedemo2;
    

          //variável de escolha do jogador

    int Comparação;
    int Comparação1;
    int Comparação2;
    int Comparação3;
    int Comparação4;
    int Comparação5;

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
    //Soma atributos carta1

    Somapoparea1 = (float)População1 + Area_km21;
    SomapopPIB1 = (float)População1 + PIB1;
    Somapopnumeropontoturistico1 = (float)População1 + Numero_de_pontos_turisticos1;
    Somapopdensidadedemo1 = (float)População1 + Densidade_demografica1;

    //Soma atributos carta2

    Somapoparea2 = (float)População2 + Area_km22;
    SomapopPIB2 = (float)População2 + PIB2;
    Somapopnumeropontoturistico2 = (float)População2 + Numero_de_pontos_turisticos2;
    Somapopdensidadedemo2 = (float)População2 + Densidade_demografica2;


    Comparação = rand() %5 + 1;
    Comparação1 = rand() %4 + 1;
    Comparação2 = rand() %4 + 1;
    Comparação3 = rand() %4 + 1;
    Comparação4 = rand() %4 + 1;
    Comparação5 = rand() %4 + 1;


    printf("*** Atributos para comparação: ***\n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de pontos turísticos \n");
    printf("5 - Densidade demografica \n");
    printf("*** Escolha um atributo:*** \n");
    scanf("%d", &Comparação);

    switch(Comparação){
     case 1:
          printf("*** Atributos para comparação: ***\n");
          printf("1 - Área \n");
          printf("2 - PIB \n");
          printf("3 - Número de pontos turísticos \n");
          printf("4 - Densidade demografica \n");
          printf("*** Escolha um atributo:*** \n");
          scanf("%d", &Comparação1);
           switch(Comparação1){
            case 1:
               if((População1 > População2) && (Area_km21 > Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País1);
                         printf("venceu pois tem população e área maiores!");
               }else if((População1 > População2) && (Area_km21 < Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", Area_km22);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e perdeu no atributo área!");

               }else if((População1 > População2) && (Area_km21 == Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e empatou no atributo área!");
               }else if((População1 == População2) && (Area_km21 == Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }else if((População1 < População2) && (Area_km21 < Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País2);
                         printf("venceu pois tem população e área maiores!");
               }else if((População1 < População2) && (Area_km21 > Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e perdeu no atributo área!");
               }else if((População1 < População2) && (Area_km21 == Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e empatou no atributo área!");
                    }
            break;     
            case 2:
               if((População1 > População2) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("venceu pois tem população e PIB maiores!");
               }else if((População1 > População2) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n",& População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e perdeu no atributo PIB!");
               }else if((População1 > População2) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e empatou no atributo PIB!");
               }else if((População1 == População2) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }else if((População1 < População2) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e no atributo PIB!");
               }else if((População1 < População2) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e perdeu no atributo PIB!");
               }else if((População1 < População2) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e empatou no atributo PIB!");
               }
     
             break;
             case 3:
               if((População1 > População2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu pois tem população e Número de pontos turísticos maiores!");
               }else if((População1 > População2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e perdeu no atributo número de pontos turísticos!");
               }else if((População1 > População2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                    printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e empatou no atributo número de pontos turísticos!");
               }else if((População1 < População2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e no atributo número de pontos turísticos!");
               }else if((População1 < População2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e perdeu no atributo número de pontos turísticos!");
               }else if((População1 < População2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e empatou no atributo número de pontos turísticos!");
               }else if((População1 == População2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }
     
             break;
             case 4:
               if((População1 > População2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e perdeu no atributo densidade demográfica!");
               }else if((População1 > População2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e no atributo densidade demográfica!");
               }else if((População1 > População2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e empatou no atributo densidade demográfica!");
               }else if((População1 < População2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo população e perdeu no atributo densidade demográfica!");
               }else if((População1 < População2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo população e no atributo densidade demográfica!");
               }else if((População1 < População2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo população e empatou no atributo densidade demográfica!");
               }else if((População1 == População2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }
     
              break;
               default: 
                    printf("Escolha errada!");

            }
      
     break;     
     case 2:
          printf("*** Atributos para comparação: ***\n");
          printf("1 - População \n");
          printf("2 - PIB \n");
          printf("3 - Número de pontos turísticos \n");
          printf("4 - Densidade demografica \n");
          printf("*** Escolha um atributo:*** \n");
          scanf("%d", &Comparação2);
           switch(Comparação2){
            case 1:
               if((População1 > População2) && (Area_km21 > Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País1);
                         printf("venceu pois tem população e área maiores!");
               }else if((População1 > População2) && (Area_km21 < Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e perdeu no atributo área!");

               }else if((População1 > População2) && (Area_km21 == Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e empatou no atributo área!");
               }else if((População1 == População2) && (Area_km21 == Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }else if((População1 < População2) && (Area_km21 < Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País2);
                         printf("venceu pois tem população e área maiores!");
               }else if((População1 < População2) && (Area_km21 > Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e perdeu no atributo área!");
               }else if((População1 < População2) && (Area_km21 == Area_km22)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e empatou no atributo área!");
                    }
      
            break;     
            case 2:
               if((Area_km21 > Area_km22) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 > Area_km22) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e perdeu no atributo PIB!");
               }else if((Area_km21 > Area_km22) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e empatou no atributo PIB!");
               }else if((Area_km21 < Area_km22) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e no atributo PIB!");
               }else if((Area_km21 < Area_km22) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e perdeu no atributo PIB!");
               }else if((Area_km21 < Area_km22) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e empatou no atributo PIB!");
               }else if((Area_km21 == Area_km22) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Os países %s, %s \n", &País1, &País2);
                         printf("empataram nos atributos!");
               }
     
            break;
            case 3:
               if((Area_km21 > Area_km22) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 > Area_km22) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo Área e perdeu no atributo número de pontos turísticos!");
               }else if((Area_km21 > Area_km22) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo Área e empatou no atributo número de pontos turísticos!");
               }else if((Area_km21 < Area_km22) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 < Area_km22) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e perdeu no atributo números de pontos turísticos!");
               }else if((Area_km21 < Area_km22) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e empatou no atributo números de pontos turísticos!");
               }else if((Area_km21 == Area_km22) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Os países %s, %s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            case 4:
               if((Area_km21 > Area_km22) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e perdeu no atributo densidade demográficas!");
               }else if((Area_km21 > Area_km22) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 > Area_km22) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e empatou no atributo densidade demográfica!");
               }else if((Area_km21 < Area_km22) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e perdeu no atributo densidade demográfica!");
               }else if((Area_km21 < Area_km22) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 == Area_km22) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s, %s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            default: 
               printf("Escolha errada!");

            }
     
     break;
     case 3:
          printf("*** Atributos para comparação: ***\n");
          printf("1 - População \n");
          printf("2 - Área \n");
          printf("3 - Número de pontos turísticos \n");
          printf("4 - Densidade demografica \n");
          printf("*** Escolha um atributo:*** \n");
          scanf("%d", &Comparação3);
           switch(Comparação3){
            case 1:
               if((População1 > População2) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("venceu pois tem população e PIB maiores!");
               }else if((População1 > População2) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n",& População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e perdeu no atributo PIB!");
               }else if((População1 > População2) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo população e empatou no atributo PIB!");
               }else if((População1 == População2) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }else if((População1 < População2) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e no atributo PIB!");
               }else if((População1 < População2) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e perdeu no atributo PIB!");
               }else if((População1 < População2) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e empatou no atributo PIB!");
               }
      
            break;     
            case 2:
               if((Area_km21 > Area_km22) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 > Area_km22) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e perdeu no atributo PIB!");
               }else if((Area_km21 > Area_km22) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e empatou no atributo PIB!");
               }else if((Area_km21 < Area_km22) && (PIB1 < PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e no atributo PIB!");
               }else if((Area_km21 < Area_km22) && (PIB1 > PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e perdeu no atributo PIB!");
               }else if((Area_km21 < Area_km22) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e empatou no atributo PIB!");
               }else if((Area_km21 == Area_km22) && (PIB1 == PIB2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Os países %s, %s \n", &País1, &País2);
                         printf("empataram nos atributos!");
               }
     
            break;
            case 3:
               if((PIB1 > PIB2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 > PIB2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e perdeu no atributo número de pontos turísticos!");
               }else if((PIB1 > PIB2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e empatou no atributo número de pontos turísticos!");
               }else if((PIB1 < PIB2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 < PIB2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e perdeu no atributo número de pontos turísticos!");
               }else if((PIB1 < PIB2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e empatou no atributo número de pontos turísticos!");
               }else if((PIB1 == PIB2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s,%s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            case 4:
               if((PIB1 > PIB2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e perdeu no atributo densidade demográfica!");
               }else if((PIB1 > PIB2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 > PIB2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e empatou no atributo densidade demográfica!");
               }else if((PIB1 < PIB2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 < PIB2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e perdeu no atributo densidade demográfica!");
               }else if((PIB1 < PIB2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e empatou no atributo densidade demográfica!");
               }else if((PIB1 == PIB2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("Os países %s, %s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            default: 
               printf("Escolha errada!");

           }
     
     break;
     case 4:
          printf("*** Atributos para comparação: ***\n");
          printf("1 - População \n");
          printf("2 - Área \n");
          printf("3 - PIB \n");
          printf("4 - Densidade demografica \n");
          printf("*** Escolha um atributo:*** \n");
          scanf("%d", &Comparação4);
           switch(Comparação4){
            case 1:
               if((População1 > População2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu pois tem população e Número de pontos turísticos maiores!");
               }else if((População1 > População2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e perdeu no atributo número de pontos turísticos!");
               }else if((População1 > População2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e empatou no atributo número de pontos turísticos!");
               }else if((População1 < População2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e no atributo número de pontos turísticos!");
               }else if((População1 < População2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e perdeu no atributo número de pontos turísticos!");
               }else if((População1 < População2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo população e empatou no atributo número de pontos turísticos!");
               }else if((População1 == População2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("População: %llu\n", &População1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }
               
      
            break;     
            case 2:
               if((Area_km21 > Area_km22) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 > Area_km22) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo Área e perdeu no atributo número de pontos turísticos!");
               }else if((Area_km21 > Area_km22) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo Área e empatou no atributo número de pontos turísticos!");
               }else if((Area_km21 < Area_km22) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 < Area_km22) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e perdeu no atributo números de pontos turísticos!");
               }else if((Area_km21 < Area_km22) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e empatou no atributo números de pontos turísticos!");
               }else if((Area_km21 == Area_km22) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Os países %s, %s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            case 3:
               if((PIB1 > PIB2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 > PIB2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e perdeu no atributo número de pontos turísticos!");
               }else if((PIB1 > PIB2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e empatou no atributo número de pontos turísticos!");
               }else if((PIB1 < PIB2) && (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 < PIB2) && (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e perdeu no atributo número de pontos turísticos!");
               }else if((PIB1 < PIB2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e empatou no atributo número de pontos turísticos!");
               }else if((PIB1 == PIB2) && (Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("O país %s,%s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            case 4:
               if((Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País1);
                         printf("ganhou no atributo número de pontos turísticos e perdeu no atributo densidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País1);
                         printf("ganhou no atributo número de pontos turísticos e empatou no atributo densidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País2);
                         printf("ganhou no atributo número de pontos turísticos e perdeu no atributo desidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País2);
                         printf("ganhou nos dois atributos!");
               }else if((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País2);
                         printf("ganhou no atributo número de pontos turísticos e empatou no atributo densidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
               default: 
                    printf("Escolha errada!");

            }
     
     break;
     case 5:
          printf("*** Atributos para comparação: ***\n");
          printf("1 - População \n");
          printf("2 - Área \n");
          printf("3 - PIB \n");
          printf("4 - Número de pontos turísticos \n");
          printf("*** Escolha um atributo:*** \n");
          scanf("%d", &Comparação);
           switch(Comparação5){
            case 1:
               if((População1 > População2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e perdeu no atributo densidade demográfica!");
               }else if((População1 > População2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e no atributo densidade demográfica!");
               }else if((População1 > População2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo população e empatou no atributo densidade demográfica!");
               }else if((População1 < População2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo população e perdeu no atributo densidade demográfica!");
               }else if((População1 < População2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo população e no atributo densidade demográfica!");
               }else if((População1 < População2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo população e empatou no atributo densidade demográfica!");
               }else if((População1 == População2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("População: %llu \n", &População1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("População: %llu \n", &População2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos atributos!");
               }
      
            break;     
            case 2:
               if((Area_km21 > Area_km22) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e perdeu no atributo densidade demográficas!");
               }else if((Area_km21 > Area_km22) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 > Area_km22) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("ganhou no atributo área e empatou no atributo densidade demográfica!");
               }else if((Area_km21 < Area_km22) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("ganhou no atributo área e perdeu no atributo densidade demográfica!");
               }else if((Area_km21 < Area_km22) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("ganhou nos dois atributos!");
               }else if((Area_km21 == Area_km22) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Área: %.2f \n", &Area_km21);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("Área: %.2f \n", &Area_km22);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s, %s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            case 3:
               if((PIB1 > PIB2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e perdeu no atributo densidade demográfica!");
               }else if((PIB1 > PIB2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 > PIB2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País1);
                         printf("venceu no atributo PIB e empatou no atributo densidade demográfica!");
               }else if((PIB1 < PIB2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu nos dois atributos!");
               }else if((PIB1 < PIB2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e perdeu no atributo densidade demográfica!");
               }else if((PIB1 < PIB2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("O país %s \n", &País2);
                         printf("venceu no atributo PIB e empatou no atributo densidade demográfica!");
               }else if((PIB1 == PIB2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("PIB: %.2f \n", &PIB1);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica1);
                         printf("%s \n", &País2);
                         printf("PIB: %.2f \n", &PIB2);
                         printf("Densidade demográfica: %.2f \n", &Densidade_demografica2);
                         printf("Os países %s, %s \n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            case 4:
               if((Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País1);
                         printf("ganhou no atributo número de pontos turísticos e perdeu no atributo densidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País1);
                         printf("ganhou nos dois atributos!");
               }else if((Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País1);
                         printf("ganhou no atributo número de pontos turísticos e empatou no atributo densidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) && (Densidade_demografica1 < Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País2);
                         printf("ganhou no atributo número de pontos turísticos e perdeu no atributo desidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) && (Densidade_demografica1 > Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País2);
                         printf("ganhou nos dois atributos!");
               }else if((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("O país %s\n", &País2);
                         printf("ganhou no atributo número de pontos turísticos e empatou no atributo densidade demográfica!");
               }else if((Numero_de_pontos_turisticos1 == Numero_de_pontos_turisticos2) && (Densidade_demografica1 == Densidade_demografica2)){
                         printf("%s \n", &País1);
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos1);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica1);
                         printf("%s \n", &País2);;
                         printf("Número de pontos turísticos: %d \n", &Numero_de_pontos_turisticos2);
                         printf("Densidade demográfica: %.2f", &Densidade_demografica2);
                         printf("Os países %s, %s\n", &País1, &País2);
                         printf("empataram nos dois atributos!");
               }
     
            break;
            default: 
               printf("Escolha errada!");

            }
     
     break;
     default: 
          printf("Escolha errada!");

     }
     



     





    return 0;


}
