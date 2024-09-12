#include <stdio.h>

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
    char estado, estado2;
    char codigo[3], codigo2[3];
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
    scanf("%c", &estado);
    
    printf("Código da carta: ");
    scanf("%s", &codigo);
    
    printf("Nome da cidade: ");
    scanf("%s", &nome);
    
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos_tur);

    printf("Estado2: ");
    scanf("%c", &estado2);
    
    printf("Código da carta2: ");
    scanf("%s", &codigo2);
    
    printf("Nome da cidade2: ");
    scanf("%s", &nome2);
    
    printf("População2: ");
    scanf("%d", &populacao2);

    printf("Área2: ");
    scanf("%f", &area2);

    printf("PIB2: ");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos2: ");
    scanf("%d", &pontos_tur2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    printf("Comparação das cartas");
    if(populacao > populacao2){
        printf("A carta %s tem maior população.\n", codigo);
    }else{
        printf("A carta %s tem maior população.\n", codigo2);
    }

    if(calcular_densidade(populacao, area) < calcular_densidade(populacao2, area2)){
        printf("A carta %s tem menor densidade\n", codigo);
    }else{
        printf("A carta %s tem menor densidade\n", codigo2);
    }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
