#include <stdio.h>

// Incício do cadastro das cartas para o jogo SuperTrunfo

int main () {
    char Estado [50];
    char Codigo [50];
    char Cidade [50];
    int População;
    float Area;
    float PIB;
    int Turismo;

    char Estado2 [50];
    char Codigo2 [50];
    char Cidade2 [50];
    int População2;
    float Area2;
    float PIB2;
    int Turismo2;

    // Cadastro de cartas nº1

    printf("Digite estado:  \n");
    scanf("%s", Estado);
    
    printf("Digite o código: \n");
    scanf("%s", Codigo);

    printf("Digite cidade: \n");
    scanf("%s", Cidade);

    printf("Digite População: \n");
    scanf(" %d", &População);

    printf("Digite a area: \n");
    scanf(" %f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Numeros de Pontos Turisticos: \n");
    scanf("%d", &Turismo);

    // Cadastro de cartas nº2

    printf("Digite estado:  \n");
    scanf("%s", Estado2);
    
    printf("Digite o código: \n");
    scanf("%s", Codigo2);

    printf("Digite cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite População: \n");
    scanf(" %d", &População2);

    printf("Digite a area: \n");
    scanf(" %f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Numeros de Pontos Turisticos: \n");
    scanf("%d", &Turismo2);

    // Informações das cartas que serão impressas após o fornecimento das informações das cartas

    printf("Carta nº 01\n");

    printf("Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("População: %d \n", População);
    printf("Area: %f\n", Area);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos Turísticos: %d \n", Turismo);


    printf("Carta nº 02\n");

    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Codigo2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", População2);
    printf("Area: %f \n", Area2);
    printf("PIB: %f \n", PIB2);
    printf("Número de pontos Turísticos: %d \n", Turismo2);


    return 0;

}
