#include <stdio.h>

int soma_digitos(int n) {
    int numero = n;

    if (n < 10) {
        return n;
    } else {
        numero = n % 10;
        n = n / 10;
        return numero + soma_digitos(n);
    }
}

int main(void) {
    int numero, i = 0, n;

    scanf("%d", &numero);

    numero = soma_digitos(numero);

    printf("%d\n", numero);
    return 0;
}
