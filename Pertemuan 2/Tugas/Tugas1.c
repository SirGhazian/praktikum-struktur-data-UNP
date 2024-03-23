#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char Nama[50];
    char NIM[20];
    char TanggalLahir[15];
    float IPK;
};

void menuProgram() {
    system("cls");
    printf("+----+------------------------------+");
    printf("\n| NO | MENU PROGRAM                 |");
    printf("\n+----+------------------------------+");
    printf("\n| 1  | Input Data Mahasiswa         |");
    printf("\n| 2  | Tampilkan Data Mahasiswa     |");
    printf("\n+----+------------------------------+");
    printf("\n| 3  | KELUAR PROGRAM               |");
    printf("\n+----+------------------------------+");
    printf("\n>> Masukkan pilihan Anda: ");
}

void inputMHS(struct Mahasiswa *mahasiswa, int banyakMHS) {
    if (banyakMHS <= 0) {
        printf("[ INPUT TIDAK VALID ]");
        getch();
    } else {
        for (int i = 0; i < banyakMHS; i++) {
            printf("\n[ MAHASISWA KE-%d ]\n", i + 1);
            printf("Masukkan NIM Mahasiswa  : ", i + 1);
            scanf("%s", mahasiswa[i].NIM);

            printf("Masukkan Nama Mahasiswa : ", i + 1);
            scanf("%s", mahasiswa[i].Nama);

            printf("Masukkan Tanggal Lahir  : ", i + 1);
            scanf("%s", mahasiswa[i].TanggalLahir);

            printf("Masukkan IPK : ", i + 1);
            scanf("%f", &mahasiswa[i].IPK);
        }
    }
}

void tampilMHS(struct Mahasiswa mahasiswa[], int banyakMHS) {
    if (banyakMHS != 0) {
        printf("---[ LIST MAHASISWA ]---\n\n");
        for (int i = 0; i < banyakMHS; i++) {
            printf("[ Mahasiswa ke-%d ]\n", i + 1);
            printf("~> NIM       : %s\n", mahasiswa[i].NIM);
            printf("~> Nama      : %s\n", mahasiswa[i].Nama);
            printf("~> Tgl Lahir : %s\n", mahasiswa[i].TanggalLahir);
            printf("~> IPK       : %.2f\n", mahasiswa[i].IPK);
            printf("\n");
        }
    } else {
        printf("[ DATA MAHASISWA TIDAK DITEMUKAN ]\n\n");
    }
}

int main() {
    struct Mahasiswa mahasiswa[30];
    int pilihan = 0;
    int banyak = 0;

    while (pilihan != 3) {
        menuProgram();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                system("cls");
                printf("Berapa banyak mahasiswa? ");
                scanf("%d", &banyak);
                inputMHS(mahasiswa, banyak);
                break;
            case 2:
                system("cls");
                tampilMHS(mahasiswa, banyak);
                printf("[ Tekan Enter Untuk Kembali ] ");
                getch();
                break;
            case 3:
                printf("\n[ Terima kasih telah menggunakan program ]\n");
                printf("[ Created by GhazianTza ]\n\n");
                break;
            default:
                printf("[ Pilihan tidak valid ]\n");
                break;
        }
    }

    return 0;
}
