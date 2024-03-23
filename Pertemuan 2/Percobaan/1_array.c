#include <stdio.h>

int main() {
    int nilai[3];  // Mendeklarasikan array nilai dengan 3 elemen
    int rr;

    nilai[0] = 80;
    nilai[1] = 83;
    nilai[2] = 91;

    rr = (nilai[0] + nilai[1] + nilai[2]) / 3;
    printf("~~> Rata-rata dari ketiga nilai adalah: %d", rr);
    return 0;
}
