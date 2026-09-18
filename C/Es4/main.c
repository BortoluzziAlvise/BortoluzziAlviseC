#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    int somma = 0;
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i]);
        somma += arr[i];
    }

    printf("Somma totale: %d\n", somma);

    free(arr);

    return 0;
}
