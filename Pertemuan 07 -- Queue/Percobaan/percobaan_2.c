#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *front;
node *rear;

void tambah();
void hapus();
void tampilkan();

int main() {
    int pilihan = 0;

    while (pilihan != 4) {
        system("cls");
        printf("+----+---------------------------------+");
        printf("\n| NO | QUEUE LINKED LIST               |");
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
    node *ptr;
    int item;

    ptr = (node *)malloc(sizeof(node *));
    if (ptr == NULL) {
        system("cls");
        printf("[ OVERFLOW WARNING ]");
        getch();
        return;
    } else {
        printf("\n~> Silahkan masukkkan elemen yang ingin di-insert: ");
        scanf("%d", &item);

        ptr->data = item;
        if (front == NULL) {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        } else {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
        printf("\n[ BERHASIL DITAMBAHKAN! ]");
    }
}

void hapus() {
    node *ptr;
    ptr = front;
    if (front == NULL) {
        system("cls");
        printf("[ UNDERFLOW WARNING ]");
        getch();
        system("cls");
    } else {
        ptr = front;
        front = front->next;
        free(ptr);

        printf("\n[ BERHASIL DIHAPUS! ]");
    }
}

void tampilkan() {
    node *ptr;
    ptr = front;
    int index = 1;

    if (front == NULL) {
        printf("[ ANTRIAN KOSONG! ]");
    } else {
        printf("[ MENAMPILKAN LIST DATA ]\n");
        while (ptr != NULL) {
            printf("~> %d) Data %d\n", index, ptr->data);
            ptr = ptr->next;

            index++;
        }
    }
}