#include <stdio.h>

int soma(int n1, int n2) { // função que soma os valores para o usuário, n1 e n2 recebem copias de a e b
    int result; // guarda o resultado da soma

    result = n1 + n2;

    return result; // devolve a soma para quem chamou a função
}

// procedimento nao retorna valor void apenas apresenta as informacoes na tela
void mostraResultado(int n1, int n2, int result) {
    printf("Primeiro valor: %d \n", n1);
    printf("Segundo valor: %d \n", n2);
    printf("Soma de %d + %d = %d \n", n1, n2, result);
}

int main() {
    int a, b, result; // a e b guardam os valores digitados e result guarda a soma

    printf("Digite um valor para somar \n");
    scanf("%d", &a); // lê o primeiro valor e guarda em a (o & passa o endereco de a para o scanf gravar nele)

    printf("Digite outro valor para somar \n");
    scanf("%d", &b); // lê o segundo valor e guarda em b

    result = soma(a, b); // chama a função soma e guarda o retorno em result

    mostraResultado(a, b, result); // chamada do procedimento pelo programa principal

    return 0;
}
