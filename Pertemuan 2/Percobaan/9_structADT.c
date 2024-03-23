#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nama[25];
    int nik;
    char alamat[30];
    char status[25];
} ktp;

int main() {
    ktp myktp;

    printf("Nama    : ");
    gets(myktp.nama);
    fflush(stdin);
    printf("NIK     : ");
    scanf("%i", &myktp.nik);
    fflush(stdin);
    printf("Alamat  : ");
    gets(myktp.alamat);
    printf("Status  : ");
    gets(myktp.status);
    return 0;
}
