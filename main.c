#include <stdio.h>
int main(void) {
    printf("Bem vindo a Sig Burguers!");

    int operacao_principal;
    do {
        scanf("%d", &operacao_principal);

        if (operacao_principal == 1) {
            printf("Aqui está o Cardápio");
        } else if (operacao_principal == 2) {
            printf("Faça o seu pedido");
        } else if (operacao_principal == 3) {
            printf("Aqui está o histórico dos seus pedidos");
        }
    } while (operacao_principal != 0);
}