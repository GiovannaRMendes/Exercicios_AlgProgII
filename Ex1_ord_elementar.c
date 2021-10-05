#include <stdio.h>
#include <stdlib.h>
#define max 100

void insertionsort(int n, int v[]) {
    int i, j, x, aux, m, y;

    for(i = 1; i < n; i++) {
        aux = abs(v[i]%10);
        x = v[i];

        for(j = i-1; j >= 0 && abs(v[j]%10) > aux; j--) {
            v[j+1] = v[j];
        }
        v[j+1] = x;
    }
    for(y = 1; y < n; y++) {
        x = v[y];

        for(m = y-1; m >= 0 && abs(v[m]%10) == abs(v[m+1]%10) && x > v[m]; m--) {
            v[m+1] = v[m];
        }
        v[m+1] = x;
    }
}

int main(void) {
    int qtd, numero[max];

    scanf("%d", &qtd);

    for(int q = 0; q < qtd; q++) {
        scanf(" %d", &numero[q]);
    }

    insertionsort(qtd, numero);

    for(int p = 0; p < qtd; p++) {
        printf("%d ", numero[p]);
    }
}
