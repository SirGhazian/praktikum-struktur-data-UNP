#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[100], search, c, n, count = 0;

    system("cls");
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);
    printf("Masukkan %d angka: \n", n);

    for (c = 0; c < n; c++) {
        printf("-> ");
        scanf("%d", &array[c]);
    }

    printf("\nMasukkan angka untuk dicari: ");
    scanf("%d", &search);
    system("cls");

    for (c = 0; c < n; c++) {
        if (array[c] == search) {
            printf("~> %d ada di lokasi ke-[%d]\n", search, c + 1);
            count++;
        }
    }

    if (count == 0)
        printf("\n--[ %d tidak ada dalam array ]--\n", search);
    else
        printf("\n--[ %d muncul %dx dalam array ]--\n", search, count);

    return 0;
}
