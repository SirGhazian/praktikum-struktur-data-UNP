#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int angka[100];

    system("cls");
    printf("Masukkan banyaknya bilangan: ");
    scanf("%d", &n);

    printf("\n");
    // Input user
    for (int i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    system("cls");
    // Cetak angka
    printf("[ Angka yang dimasukkan ]\n");
    for (int i = 0; i < n; i++) {
        printf("~> Angka ke-%d: %d\n", i + 1, angka[i]);
    }

    return 0;
}
