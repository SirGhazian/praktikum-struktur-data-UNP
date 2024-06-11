#include <stdio.h>

struct Jarak {
    int kaki;
    float inci;
} jarak1, jarak2, jumlah;

int main() {
    printf("[ Jarak pertama ]\n");
    printf("Masukkan jarak kaki: ");
    scanf("%d", &jarak1.kaki);
    printf("Masukkan jarak inci: ");
    scanf("%f", &jarak1.inci);

    printf("\n[ Jarak kedua ]\n");
    printf("Masukkan jarak kaki: ");
    scanf("%d", &jarak2.kaki);
    printf("Masukkan jarak inci: ");
    scanf("%f", &jarak2.inci);

    jumlah.kaki = jarak1.kaki + jarak2.kaki;

    jumlah.inci = jarak1.inci + jarak2.inci;

    while (jumlah.inci >= 12) {
        ++jumlah.kaki;
        jumlah.inci -= 12;
    }

    printf("\n~~> Jumlah jarak = %d\'-%.1f\"\n", jumlah.kaki, jumlah.inci);
    return 0;
}
