#include <stdio.h>
#include <string.h>

typedef struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    char NIM[50];
    int nilai;
} myMHS;

int main(void) {
    myMHS mhs01;

    strcpy(mhs01.nama, "Ucok James");
    strcpy(mhs01.NIM, "23343057");
    strcpy(mhs01.jurusan, "Informatika (S1)");

    mhs01.nilai = 100;

    printf("================================================");
    printf("\n~> Nama mahasiswa adalah  : %s", mhs01.nama);
    printf("\n~> NIM mahasiswa adalah   : %s", mhs01.NIM);
    printf("\n~> Jurusan yang diambiil  : %s", mhs01.jurusan);
    printf("\n------------------------------------------------");
    printf("\n~> Nilai yang didapat     : %i", mhs01.nilai);
    printf("\n================================================");

    return 0;
}
