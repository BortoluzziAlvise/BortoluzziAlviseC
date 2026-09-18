#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *n = malloc(sizeof(float));

    printf("Inserisci un numero decimale: ");
    scanf("%f", n);

    *n += (*n /100.0f * 20.0f);

    printf("Valore inserito aumentato del 20%%: %f", *n);

    free(num);

    return 0;
}