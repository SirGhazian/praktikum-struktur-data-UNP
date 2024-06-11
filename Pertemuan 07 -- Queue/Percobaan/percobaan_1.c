#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define ukuran 5

int front = -1, rear = -1;
int queue[ukuran];
int item;

void tambah();
void hapus();
void tampilkan();

int main() {
    int pilihan = 0;

    while (pilihan != 4) {
        system("cls");
        printf("+----+---------------------------------+");
        printf("\n| NO | QUEUE ARRAY                     |");
        printf("\n+----+---------------------------------+");
        printf("\n| 1  | Tambah sebuah elemen            |");
        printf("\n| 2  | Hapus sebuah elemen             |");
        printf("\n| 3  | Tampilkan antrian               |");
        printf("\n+----+---------------------------------+");
        printf("\n| 4  | KELUAR PROGRAM                  |");
        printf("\n+----+---------------------------------+");
        printf("\n>> Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambah();
                getch();
                break;
            case 2:
                hapus();
                getch();
                break;
            case 3:
                system("cls");
                tampilkan();
                getch();
                break;
            case 4:
                system("cls");
                printf("[ Terimakasih Sudah Menggunakan Program! :) ]");
                system("cls");
                break;

            default:
                system("cls");
                printf("[ INPUT MENU TIDAK VALID! ]");
                getch();
                break;
        }
    }

    return 0;
}

void tambah() {
    printf("\n~> Silahkan masukkkan elemen yang ingin di-insert: ");
    scanf("%d", &item);

    if (rear == ukuran - 1) {
        system("cls");
        printf("[ OVERFLOW WARNING ]");
        getch();
        system("cls");
    }

    if (front == -1 & rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear += 1;
    }

    queue[rear] = item;
    printf("\n[ BERHASIL DITAMBAHKAN! ]");
}

void hapus() {
    if (front == -1 || front > rear) {
        system("cls");
        printf("[ UNDERFLOW WARNING ]");
        getch();
        system("cls");
    } else {
        item = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front += 1;
        }
        printf("\n[ BERHASIL DIHAPUS! ]");
    }
}

void tampilkan() {
    if (rear == -1) {
        printf("[ ANTRIAN KOSONG! ]");
    } else {
        printf("[ MENAMPILKAN NILAI ]\n");
        for (int i = front; i <= rear; i++) {
            printf("%d) %d \n", i + 1, queue[i]);
        }
    }
}