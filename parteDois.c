#include <stdio.h>

void troca(int *n1, int *n2) // recebe os enderecos das variaveis (ponteiros) e troca os valores guardados nelas
{
    int aux; // é necessário criar uma variavel auxiliar para fazer a troca dos valores

    aux = *n1; // *n1 acessa o valor que esta no endereco de a, e guarda em aux para nao perder
    *n1 = *n2; // o valor de b é copiado para dentro de a
    *n2 = aux; // o valor que estava guardado em aux (antigo a) vai para b
}

int main()
{
    int a, b; // a e b guardam os valores digitados pelo usuario

    printf("Digite o valor de A \n");
    scanf("%d", &a);

    printf("Digite o valor de B \n");
    scanf("%d", &b);

    printf("A igual: %d e B igual: %d \n", a, b); // valores antes da troca

    troca(&a, &b); // & passa o endereco de a e de b para a funcao (passagem de endereço)

    printf("valor de A: %d \n", a); // valores depois da troca, mostra que a e b foram alterados
    printf("valor de B: %d \n", b);

    return 0;
}
