#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

float calcular_densidade(int populacao, float area){
    return populacao / area;
}

float calcular_pib_per_capita(int populacao, float pib){
    return pib / populacao;
}

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    char estado[4], estado2[4];
    char codigo[5], codigo2[5];
    char nome[20], nome2[20];
    int populacao, populacao2, pontos_tur, pontos_tur2;
    float pib, pib2, area, area2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Estado: ");
    fgets(estado, sizeof estado, stdin);
    fflush(stdin);
    
    printf("Codigo da carta: ");
    fgets(codigo, sizeof codigo, stdin);
    fflush(stdin);
    
    printf("Nome da cidade: ");
    fgets(nome, sizeof nome, stdin);
    fflush(stdin);
    
    printf("Populacao: ");
    scanf("%d", &populacao);
    fflush(stdin);

    printf("Area: ");
    scanf("%f", &area);
    fflush(stdin);

    printf("PIB: ");
    scanf("%f", &pib);
    fflush(stdin);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_tur);
    fflush(stdin);
   
    printf("Estado2: ");
    fgets(estado2, sizeof estado2, stdin);
    fflush(stdin);
    
    printf("Codigo da carta2: ");
    fgets(codigo2, sizeof codigo2, stdin);
    fflush(stdin);
   
    printf("Nome da cidade2: ");
    fgets(nome2, sizeof nome2, stdin);
    fflush(stdin);
    
    printf("Populacao2: ");
    scanf("%d", &populacao2);
    fflush(stdin);

    printf("Area2: ");
    scanf("%f", &area2);
    fflush(stdin);

    printf("PIB2: ");
    scanf("%f", &pib2);
    fflush(stdin);

    printf("Numero de pontos turisticos2: ");
    scanf("%d", &pontos_tur2);
    fflush(stdin);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("Comparacao de cartas\n");
    printf("Carta 1 - Estado: %s, Codigo: %s, Populacao: %d\n", estado, codigo,  populacao);
    printf("Carta 2 - Estado: %s, Codigo: %s, Populacao: %d\n", estado2, codigo2, populacao2);
    if(populacao > populacao2){
        printf("A carta %s venceu, tem maior populacao.\n", codigo);
    }else{
        printf("A carta %s venceu, tem menor populacao.\n", codigo2);
    }

    printf("Carta 1 - Estado: %s, Codigo: %s, Densidade: %f\n", estado, codigo,  calcular_densidade(populacao, area));
    printf("Carta 2 - Estado: %s, Codigo: %s, Densidade: %f\n", estado2, codigo2, calcular_densidade(populacao2, area2));
    if(calcular_densidade(populacao, area) < calcular_densidade(populacao2, area2)){
        printf("A carta %s venceu, tem menor densidade\n", codigo);
    }else{
        printf("A carta %s venceu, tem menor densidade\n", codigo2);
    }

    printf("Carta 1 - Estado: %s, Codigo: %s, Pib per capita: %f\n", estado, codigo,  calcular_pib_per_capita(populacao, pib));
    printf("Carta 2 - Estado: %s, Codigo: %s, Pib per capita: %f\n", estado2, codigo2, calcular_pib_per_capita(populacao2, pib2));
    if(calcular_pib_per_capita(populacao, pib) > calcular_pib_per_capita(populacao2, pib2)){
        printf("A carta %s venceu, tem maior pib per capita\n", codigo);
    }else{
        printf("A carta %s venceu, tem maior pib per capita\n", codigo2);
    }

    printf("Carta 1 - Estado: %s, Codigo: %s, Area: %f\n", estado, codigo, area);
    printf("Carta 2 - Estado: %s, Codigo: %s, Area: %f\n", estado2, codigo2, area2);
    if(area > area2){
        printf("A carta %s venceu, tem maior area\n", codigo);
    }else{
        printf("A carta %s venceu, tem maior area\n", codigo2);
    }
    printf("Carta 1 - Estado: %s, Codigo: %s, Pib: %f\n", estado, codigo,  pib);
    printf("Carta 2 - Estado: %s, Codigo: %s, Pib: %f\n", estado2, codigo2, pib2);
    if(area > area2){
        printf("A carta %s venceu, tem maior pib\n", codigo);
    }else{
        printf("A carta %s venceu, tem maior pib\n", codigo2);
    }
    printf("Carta 1 - Estado: %s, Codigo: %s, Pontos turisticos: %d\n", estado, codigo, pontos_tur);
    printf("Carta 2 - Estado: %s, Codigo: %s, Pontos turisticos: %d\n", estado2, codigo2, pontos_tur2);
    if(area > area2){
        printf("A carta %s venceu, tem mais pontos turisticos\n", codigo);
    }else{
        printf("A carta %s venceu, tem mais pontos turisticos\n", codigo2);
    }

    

    return 0;
}
