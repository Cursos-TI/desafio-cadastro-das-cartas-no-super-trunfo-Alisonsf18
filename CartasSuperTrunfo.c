#include <stdio.h>



int main() {

    char Estado = '_';
    char Codigo [5]= "";
    char Cidade [20] = "";
    int Populacao = 0.0;
    float Km = 0.0;
    float PIB = 0.0;
    int Pontos = 0;
    char Estado2 = '_';
    char Codigo2 [5] = "";
    char Cidade2 [20] = "";
    int Populacao2 = 0;
    float Km2 = 0.0;
    float PIB2 = 0.0;
    int Pontos2 = 0;

    printf("Digita os dados da primeira carta! \n");

    printf("Digite o estado: \n");
    scanf("%c", Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", Codigo);

    printf("Digite a cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area em Km: \n");
    scanf("%f", &Km);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite pontos turisticos: \n");
    scanf("%d", &Pontos);


    printf("Digite os dados da segunda carta! \n");

    printf("Digite o estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", Codigo2);

    printf("Digite a cidade: \n");
    scanf(" %s", Cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area en Km: \n");
    scanf("%f", &Km2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite pontos turisticos:");
    scanf("%d", &Pontos2);

    printf("----------CARTA 1----------\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo da carta: %s\n",Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area em Km: %.2f\n", Km);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turisticos: %d\n", Pontos);

    printf("----------CARTA 2----------\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da carta: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area em Km: %.2f\n", Km2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontos2);

   
    return 0;
}
