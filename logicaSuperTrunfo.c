#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("Cadastro de cartas\n\n"); 

    /*Abaixo estão as informação que cada carta deve ter, para realizar o cadastro
    de mais cartas, basta utilizar as informções descritas abaixo para fazer uma 
    nova tela de cadastro*/

    char estado01;
    char codigo01[4];
    char cidade01[20];
    unsigned long int populacao01;
    float area01, pib01;
    float densidade01; 
    float pibper01;
    int pturisticos01;
    float superpoder01;

    
    

    /*Campo usado para coletar informações do usuario, manter a estrutura de separação de dados para adicionar linhas. 
    usar sempre o comando printf("texto desejado: "), e scanf("variavel", formato)*/

    printf("Digite uma letra de A a Z para representar o Estado: ");
    scanf(" %c", &estado01);

    printf("Digite o codigo alfanumerico da carta (EX: A00): ");
    scanf("%s", codigo01);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade01);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao01);        

    printf("Digite a area da cidade: ");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib01);    

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturisticos01);

    densidade01 = (float) populacao01 / area01;

    pibper01 = (float) populacao01 / pib01;

    superpoder01 = (float) populacao01 + area01 + pib01 + pturisticos01 + densidade01 + pibper01;
        
    //duas linhas espeço
   printf("\n"); // Espaço 1
   printf("\n"); // Espaço 2

    /* a partir daqui ficam os dados para impressão de cada carta
    semre usar o comando printf("variavel\n", formato) para adicionar mais campos */

    printf("Carta 01\n\n");
    
    printf("Estado: %c\n", estado01);
    
    printf("Codigo: %s\n", codigo01);

    printf("Cidade: %s\n", cidade01);

    printf("População: %d\n", populacao01);

    printf("Area: %.2f\n", area01);

    printf("P.I.B: %.2f\n", pib01);

    printf("Pontos turisticos: %d\n", pturisticos01);

    printf("Densidade populacional: %.2f\n", densidade01);

    printf("PIB percapto: %.2f\n", pibper01);

    printf("Super poder: %.2f\n", superpoder01);
     
    printf("\n"); // Linha de espaço

      /*Campo usado para coletar informações do usuario, manter a estrutura de separação de dados para adicionar linhas. 
    usar sempre o comando printf("texto desejado: "), e scanf("variavel", formato)*/

    char estado02;
    char codigo02[4];
    char cidade02[20];
    unsigned long int populacao02;
    float area02, pib02;
    float densidade02; 
    float pibper02;
    int pturisticos02;
    float superpoder02;

    printf("Cadastro de cartas\n\n");

     printf("Digite uma letra de A a Z para representar o Estado: ");
    scanf(" %c", &estado02);

    printf("Digite o codigo alfanumerico da carta (EX: A00): ");
    scanf("%s", codigo02);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade02);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao02);        

    printf("Digite a area da cidade: ");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib02);    

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturisticos02);
    
    densidade02 = (float) area02 / populacao02;

    pibper02 = (float) pib02 / populacao02;

    superpoder02 = (float) populacao02 + area02 + pib02 + pturisticos02 + densidade02 + pibper02;

    //duas linhas espeço
   printf("\n"); // Espaço 1
   printf("\n"); // Espaço 2

     /* a partir daqui ficam os dados para impressão de cada carta
    semre usar o comando printf("variavel\n", formato) para adicionar mais campos */
   
    printf("Carta 02\n\n");
    
    printf("Estado: %c\n", estado02);
    
    printf("Codigo: %s\n", codigo02);

    printf("Cidade: %s\n", cidade02);

    printf("População: %d\n", populacao02);

    printf("Area: %.2f\n", area02);

    printf("P.I.B: %.2f\n", pib02);

    printf("Pontos turisticos: %d\n", pturisticos02);

    printf("Densidade populacional: %.2f\n", densidade02);

    printf("PIB percapto: %.2f\n", pibper02);

    printf("Super poder: %.2f\n", superpoder02);
     
    printf("\n\n"); // Linha de espaço

    //comparação de cartas

    printf("COMPARAÇÃO DE CARTAS\n\n");
    
    printf("Na comparação de cartas os pontos da carta 01 serão comparados com os pontos da carta 02\n."
        "Se ao fim de comparação aparecer o numero 0 significa que a carta um perdeu, se aparecer o\n"
        "numero 1 significa que a carta 01 venceu aquele ponto\n\n");

    //codigo da comparação de cartas

    int populacao03 = populacao01 > populacao02;
    int area03 = area01 > area02; 
    int pib03 = pib01 > pib02;
    int densidade03 = densidade01 < densidade02; 
    int pibper03 = pibper01 > pibper02;
    int pturisticos03 = pturisticos01 > pturisticos02;
    int superpoder03 = superpoder01 > superpoder02;
    int somatotal = (populacao03 + area03 + pib03 + densidade03 + pibper03 + pturisticos03 + superpoder03);  

    

    printf("carta 01\n");
    printf("População: %d\n", populacao03);
    printf("Area: %d\n", area03);
    printf("PIB: %d\n", pib03);
    printf("Pontos turisticos: %d\n", pturisticos03);
    printf("Densidade: %d\n", densidade03);
    printf("PIB percapto: %d\n", pibper03);
    printf("Super poder: %d\n\n", superpoder03);



    if(somatotal >= 4) {
        printf("A carta 01 venceu!\n\n");
    } else {
        printf("A carta 02 venceu!\n\n");
    }
        

    


    return 0;
}
