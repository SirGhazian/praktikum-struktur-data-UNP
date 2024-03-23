#include <stdio.h>

int main() {
    int usia1 = 50;
    int usia2 = 18;
    int *ptr;

    printf("-------------------------------------");
    printf("\nUsia 1 secara asli: %d", usia1);
    printf("\nUsia 2 secara asli: %d", usia2);

    ptr = &usia2;

    printf("\n-------------------------------------");
    printf("\nAlamat pointer: %d", *ptr);

    printf("\nUsia 1 secara alamat pointer: %x", &usia1);
    printf("\nUsia 2 secara alamat pointer: %x", &usia2);
    printf("\n-------------------------------------");

    return 0;
}
