#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Inicialização dos dados dos territórios
    struct Territorio territorios[5] = {
        {"Brasil", "Verde", 25},
        {"Estados Unidos", "Vermelho", 105},
        {"Russia", "Azul", 52},
        {"China", "Branco", 78},
        {"Alasca", "Rosa", 15}
    };

    // Exibição dos dados
    printf("=== Territórios Cadastrados ===\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Número de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}