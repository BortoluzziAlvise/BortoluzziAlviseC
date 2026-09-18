#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int *ptr = (int *) malloc(sizeof(int));

    *ptr = 42; 

    printf("Valore di x: %d\n", *ptr);
    printf("Indirizzo di x: %p\n", (void*)ptr);
    printf("Valore puntato da ptr: %d\n", *ptr);

    *ptr = 100;

    printf("Nuovo valore di x: %d\n", *ptr);

    free(ptr);

    return 0;
}