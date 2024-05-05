#include <stdbool.h>
#include <stdio.h>

#define MAX 10
int list[MAX] = {1, 8, 4, 6, 0, 3, 5, 2, 7, 9};

void display() {
    int i;
    printf("[");
    // menavigasi semua item
    for (i = 0; i < MAX; i++) {
        printf("%d ", list[i]);
    }
    printf("]\n");
}

void bubbleSort() {
    int temp;
    int i, j;
    bool swapped = false;

    // loop melalui semua angka
    for (i = 0; i < MAX - 1; i++) {
        swapped = false;
        // loop melalui angka yang jatuh ke depan
        for (j = 0; j < MAX - 1 - i; j++) {
            printf(" - Angka yang dibandingkan: [ %d, %d ] ", list[j], list[j + 1]);
            // memeriksa apakah angka berikutnya lebih kecil dari nomor saat ini
            // tukar nomor-nomor tersebut.
            // (Membawa angka tertinggi ke atas)

            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;

                swapped = true;
                printf(" => ditukar [%d, %d]\n", list[j], list[j + 1]);
            } else {
                printf(" => [[ tidak ditukar ]]\n");
            }
        }
    }
}

int main() {
    printf("~> Array Input: ");
    display();
    printf("\n");
    bubbleSort();
    printf("\n~> Array Output: ");
    display();
}
