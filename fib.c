#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo = 0, i;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    // Verifica se o número informado é igual a 0 ou 1
    if (n == 0 || n == 1) {
        printf("%d pertence à sequência de Fibonacci.", n);
        return 0;
    }
    
    // Calcula a sequência de Fibonacci até encontrar um número maior ou igual ao número informado
    for (i = 2; proximo < n; i++) {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
    
    // Verifica se o número informado pertence à sequência de Fibonacci
    if (proximo == n) {
        printf("%d pertence à sequência de Fibonacci.", n);
    } else {
        printf("%d não pertence à sequência de Fibonacci.", n);
    }
    
    return 0;
}
