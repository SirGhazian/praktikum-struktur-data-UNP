#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int NIM;
    char Nama[50];
    char TTL[50];
    float IPK;
} Mahasiswa;

int sequentialSearch(Mahasiswa mhs[], int n, int cari);
void displayMahasiswa(Mahasiswa mhs);
void kembali();

int main() {
    Mahasiswa data[4] = {
        {2334301, "Abdul Samsul", "Jakarta, 10 Januari 2000", 3.75},
        {2334302, "Ucok Subarjo", "Surabaya, 15 Februari 2001", 3.85},
        {2334303, "Aldi Taheer", "Padang, 20 Maret 1999", 3.95},
        {2334304, "Budi Santos", "Yogyakarta, 25 April 2002", 3.65}};

    int n = sizeof(data) / sizeof(data[0]);
    int pilihan, cariNIM;

    system("cls");
    while (pilihan != 0) {
        printf("===========================\n");
        printf("| NO | Menu               |\n");
        printf("===========================\n");
        printf("| 1. Tampilkan Mahasiswa  |\n");
        printf("| 2. Cari NIM Mahasiswa   |\n");
        printf("|-------------------------|\n");
        printf("| 0. Keluar               |\n");
        printf("===========================\n");
        printf("~> Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                system("cls");
                printf("\n<<===[ Daftar Mahasiswa ]===>>\n\n");

                for (int i = 0; i < n; i++) {
                    printf("=========[ Mahasiswa ke-%d ]=========\n", i + 1);
                    displayMahasiswa(data[i]);
                    printf("------------------------------------\n");
                }
                kembali();
                break;

            case 2:
                printf("\n~> Masukkan NIM Mahasiswa yang ingin dicari: ");
                scanf("%d", &cariNIM);

                int hasil = sequentialSearch(data, n, cariNIM);

                system("cls");
                if (hasil != -1) {
                    printf("[ Data Mahasiswa dengan NIM %d ditemukan! ]\n\n", cariNIM);
                    displayMahasiswa(data[hasil]);
                } else {
                    printf("[ Data Mahasiswa tidak ditemukan ]\n");
                }
                kembali();
                break;

            case 0:
                break;

            default:
                system("cls");
                printf("[ Pilihan tidak valid. Silakan pilih kembali ]");
                getch();
                system("cls");
                break;
        }
    }

    return 0;
}

int sequentialSearch(Mahasiswa mhs[], int n, int cari) {
    for (int i = 0; i < n; i++) {
        if (mhs[i].NIM == cari) {
            return i;
        }
    }
    return -1;
}

void displayMahasiswa(Mahasiswa mhs) {
    printf("~> Nama : %s\n", mhs.Nama);
    printf("~> NIM  : %d\n", mhs.NIM);
    printf("~> TTL  : %s\n", mhs.TTL);
    printf("~> IPK  : %.2f\n", mhs.IPK);
}

void kembali() {
    printf("\n[ Tekan Enter Untuk Kembali ]");
    getch();
    system("cls");
    fflush(stdin);
}
