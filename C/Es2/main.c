#include <stdio.h>

void scambia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10, y = 20;

    printf("Prima dello scambio: x = %d, y = %d\n", x, y);

    scambia(&x, &y);

    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);

    return 0;
}