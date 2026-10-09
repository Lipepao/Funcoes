#include <stdio.h>

int maior (int n1, int n2) // função para identificar qual o maior valor, n1 e n2 recebem uma copia dos valores de a e b (passagem de valor)
{
    int result; // variavel que vai guardar o maior valor

    if(n1 > n2){ // se n1 for maior, ele é o resultado
        result = n1;
    }
    else{ // senao, n2 é o maior (ou os dois sao iguais)
        result=n2;
    }

    return(result); // a funçao ira retornar a variavel result que esta com maior valor guardado
}

int main()
{
    int a, b, result; // a e b guardam os valores digitados e result guarda o maior valor

    printf("Digite dois valores para saber o maior: \n");
    scanf("%d", &a); // lê o primeiro valor e guarda em a (o & passa o endereco de a para o scanf gravar nele)
    scanf("%d", &b); // lê o segundo valor e guarda em b

    result = maior (a,b); // chamando a função que criei acima, o valor retornado fica guardado em result

    printf("O maior numero digitado foi: %d \n", result); // mostra o maior valor na tela

    return 0;
}
