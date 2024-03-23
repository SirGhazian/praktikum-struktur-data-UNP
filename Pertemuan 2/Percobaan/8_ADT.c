#include <conio.h>
#include <stdio.h>

typedef int angka;
typedef char huruf;

int main() {
    angka umur;
    huruf h;
    huruf nama[10];
    printf("Masukkan umur anda   : ");
    scanf("%d", &umur);
    printf("~> Umur anda adalah  : %d", umur);

    printf("\n\nMasukkan huruf       : ");
    h = getche();
    printf("\n~> Huruf anda adalah : %c", h);

    printf("\n\nMasukkan nama        : ");
    scanf("%s", nama);
    printf("~> Nama anda adalah  : %s", nama);
}
