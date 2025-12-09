#include <stdio.h>

int main(){

    //Variáveis da primeira carta
    char estado1, codigo1[10], cidade1[20];
    int turismo1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, percapita1, superpoder1;

    //variáveis da segunda carta
    char estado2, codigo2[10], cidade2[20];
    int turismo2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, percapita2, superpoder2;

    //Apresentação
    printf("\n");
    printf("======================================\n");
    printf("=  BEM VINDO AO SUPER TRUNFO PAÍSES  =\n");
    printf("======================================\n");
    printf("\n");
    
    //cadastro da primeira carta
    printf("===== CADASTRO DA PRIMEIRA CARTA =====\n");
    printf("   -RESPONDA AS PERGUNTAS A SEGUIR-   \n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (01-04): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("\n");

    //cadastro da segunda carta
    printf("===== CADASTRO DA SEGUNDA CARTA =====\n");
    printf("   -RESPONDA AS PERGUNTAS A SEGUIR-   \n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (01-04): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("\n");

    // Cálculo Densidade Populacional e PIB per capita e super poder da carta 1
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + percapita1 + (1.0 / densidade1);

    // Cálculo Densidade Populacional e PIB per capita e super poder da carta 2
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + percapita2 + (1.0 / densidade2);

    //Exibição das informações cadastradas
    //Impressão da carta 1 
    printf("\n");
    printf("======================================\n");
    printf("=          EXIBIÇÃO CARTA 1          =\n");
    printf("======================================\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", superpoder1);

   //Impressão da carta 2 
    printf("\n");
    printf("======================================\n");
    printf("=          EXIBIÇÃO CARTA 2          =\n");
    printf("======================================\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparação das cartas
    int atrib1, atrib2;

    printf("\n");
    printf("======================================\n");
    printf("=       COMPARAÇÃO DE ATRIBUTOS      =\n");
    printf("======================================\n");
    printf("\n");
    printf("***Observação: Os atributos de maior valor vencem.\nPara a Densidade Populacional a vencedora será a de menor valor***\n");
    printf("\n");

    //PRIMEIRO ATRIBUTO
    printf("*Atributos:*\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o PRIMEIRO atributo que deseja comparar: \n");
    scanf("%d", &atrib1);

    printf("\n");

    //SEGUNDO ATRIBUTO, excluindo o que já foi escolhido
    printf("*Atributos:*\n");
    if(atrib1 != 1) printf("1 - População\n");
    if(atrib1 != 2) printf("2 - Área\n");
    if(atrib1 != 3) printf("3 - PIB\n");
    if(atrib1 != 4) printf("4 - Pontos Turísticos\n");
    if(atrib1 != 5) printf("5 - Densidade Populacional\n");
    if(atrib1 != 6) printf("6 - PIB per Capita\n");
    if(atrib1 != 7) printf("7 - Super Poder\n");
    printf("Escolha o SEGUNDO atributo que deseja comparar: \n");
    scanf("%d", &atrib2);

    printf("\n");

//Posição 1
float v1_c1, v1_c2;

switch (atrib1)
{
case 1:
    v1_c1 = populacao1;
    v1_c2 = populacao2;
    break;
case 2:
    v1_c1 = area1;
    v1_c2 = area2;
    break;
case 3:
    v1_c1 = pib1;
    v1_c2 = pib2;
    break;
case 4:
    v1_c1 = turismo1;
    v1_c2 = turismo2;
    break;
case 5:
    v1_c1 = densidade1;
    v1_c2 = densidade2;
    break;
case 6:
    v1_c1 = percapita1;
    v1_c2 = percapita2;
    break;
case 7:
    v1_c1 = superpoder1;
    v1_c2 = superpoder2;
    break;
default:
    v1_c1 = v1_c2 = 0;
    break;
}

//Posição 2
float v2_c1, v2_c2;

switch (atrib2)
{
case 1: v2_c1 = populacao1; v2_c2 = populacao2;
    break;
case 2: v2_c1 = area1; v2_c2 = area2;
    break;
case 3: v2_c1 = pib1; v2_c2 = pib2;
    break;
case 4: v2_c1 = turismo1; v2_c2 = turismo2;
    break;
case 5: v2_c1 = densidade1; v2_c2 = densidade2;
    break;
case 6: v2_c1 = percapita1; v2_c2 = percapita2;
    break;
case 7: v2_c1 = superpoder1; v2_c2 = superpoder2;
    break;
default: v2_c1 = v2_c2 = 0;
    break;
}

//Soma
float soma1 = v1_c1 + v2_c1;
float soma2 = v1_c2 + v2_c2;


printf("\n");
printf("========================\n");
printf("=       RESULTADO      =\n");
printf("========================\n");
printf("\n");
printf("Cidade 1: %s --- Soma = %.2f\n", cidade1, soma1);
printf("Cidade 2: %s --- Soma = %.2f\n", cidade2, soma2);

if (soma1 > soma2)
{
    printf("VENCEDORA: %s\n", cidade1);
}else if (soma2 > soma1)
{
    printf("VENCEDORA: %s\n", cidade2);
}else{
    printf("Empate!\n");
}
printf("\n");

return 0;
}