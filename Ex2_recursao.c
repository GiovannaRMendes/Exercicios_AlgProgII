#include <stdio.h>

int conta_dig_imp (int n) {
    if (n/10 == 0 && n%2 != 0) {
        return 1;
    }else if (n/10 == 0 && n%2 == 0) {
        return 0;
    } else if (((n%10)%2) != 0) {
        return 1 + conta_dig_imp(n/10);
    } else {
        return 0 + conta_dig_imp(n/10);
    }
}

int main(void) {
    int num;

    scanf("%d", &num);

    printf("%d", conta_dig_imp(num));

    return 0;
}
