Aqui está **o mesmo programa, totalmente sem funções**, conforme você pediu.
Todo o código está no `main()`, sem nenhuma função auxiliar.

---

# ✅ **Código em C — Versão COMPLETA sem funções**

```c
#include <stdio.h>

typedef struct {
    char estado[30];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

int main() {
    Carta c1, c2;

    // ======= LEITURA DA CARTA 1 =======
    printf("Digite o estado da Carta 1: ");
    scanf(" %[^\n]", c1.estado);

    printf("Digite o codigo da Carta 1: ");
    scanf(" %[^\n]", c1.codigo);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", c1.nome);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &c1.populacao);

    printf("Digite a area da Carta 1: ");
    scanf("%f", &c1.area);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &c1.pib);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &c1.pontos_turisticos);

    // ======= LEITURA DA CARTA 2 =======
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %[^\n]", c2.estado);

    printf("Digite o codigo da Carta 2: ");
    scanf(" %[^\n]", c2.codigo);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", c2.nome);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &c2.populacao);

    printf("Digite a area da Carta 2: ");
    scanf("%f", &c2.area);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &c2.pib);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &c2.pontos_turisticos);

    // ======= CÁLCULOS DAS CARTAS =======

    // -- Densidade --
    c1.densidade = c1.populacao / c1.area;
    c2.densidade = c2.populacao / c2.area;

    // -- PIB per Capita --
    c1.pib_per_capita = c1.pib / (float)c1.populacao;
    c2.pib_per_capita = c2.pib / (float)c2.populacao;

    // -- Super Poder (tudo somado + inverso da densidade) --
    float inv_dens1 = 1.0f / c1.densidade;
    float inv_dens2 = 1.0f / c2.densidade;

    c1.super_poder =
        (float)c1.populacao +
        c1.area +
        c1.pib +
        (float)c1.pontos_turisticos +
        c1.pib_per_capita +
        inv_dens1;

    c2.super_poder =
        (float)c2.populacao +
        c2.area +
        c2.pib +
        (float)c2.pontos_turisticos +
        c2.pib_per_capita +
        inv_dens2;

    // ======= COMPARAÇÕES =======
    int vence_populacao       = c1.populacao > c2.populacao;
    int vence_area            = c1.area > c2.area;
    int vence_pib             = c1.pib > c2.pib;
    int vence_pontos          = c1.pontos_turisticos > c2.pontos_turisticos;
    int vence_densidade       = c1.densidade < c2.densidade;  // MENOR vence
    int vence_pib_pc          = c1.pib_per_capita > c2.pib_per_capita;
    int vence_super_poder     = c1.super_poder > c2.super_poder;

    // ======= RESULTADOS =======
    printf("\n=========== RESULTADOS ===========\n");
    printf("Populacao: %d\n", vence_populacao);
    printf("Area: %d\n", vence_area);
    printf("PIB: %d\n", vence_pib);
    printf("Pontos Turisticos: %d\n", vence_pontos);
    printf("Densidade Populacional (menor vence): %d\n", vence_densidade);
    printf("PIB per Capita: %d\n", vence_pib_pc);
    printf("Super Poder: %d\n", vence_super_poder);

    return 0;
}
```

---

Se quiser, posso gerar também um **exemplo de entrada e saída**, ou uma versão mais simples/compacta.
