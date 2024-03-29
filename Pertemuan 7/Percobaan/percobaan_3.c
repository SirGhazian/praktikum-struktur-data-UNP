#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define ukuran 6

int queue[ukuran];
int front = -1, rear = -1;

void enqueue(int element);
void dequeue();
void tampilkan();

int main() {
    int menu = 1, x;

    while (menu < 4 && menu != 0) {
        system("cls");
        printf("--- CIRCULAR QUEUE --------------");
        printf("\n1 | Tambah sebuah elemen");
        printf("\n2 | Hapus sebuah elemen");
        printf("\n3 | Tampilkan sebuah elemen");
        printf("\n--------------------------------");
        printf("\n>> Masukan pilihanmu: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:

                printf("  >> Masukan elemen yang ingin ditambah: ");
                scanf("%d", &x);
                enqueue(x);
                getch();
                break;
            case 2:
                dequeue();
                getch();
                break;
            case 3:
                tampilkan();
                getch();
        }
    }
    return 0;
}

void enqueue(int element) {
    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = element;
        printf("\n[ BERHASIL DITAMBAHKAN! ]");
    } else if ((rear + 1) % ukuran == front) {
        printf("[ ANTRIAN PENUH ]");
    } else {
        rear = (rear + 1) % ukuran;
        queue[rear] = element;
    }
}

void dequeue() {
    if ((front == -1) && (rear == -1)) {
        printf("\n[ ANTRIAN BELUM PENUH ]");
    } else if (front == rear) {
        printf("\n~> Elemen yang di-dequeue adalah: %d ", queue[front]);
        front = -1;
        rear = -1;
    } else {
        printf("\n~> Elemen yang di-dequeue adalah: %d ", queue[front]);
        front = (front + 1) % ukuran;
    }
}

void tampilkan() {
    int i = front;

    if (front == -1 && rear == -1) {
        printf("\n[ ANTRIAN BELUM PENUH ]");
    } else {
        printf("\n~> Elemen pada queue adalah: ");
        while (i <= rear) {
            printf("%d, ", queue[i]);
            i = (i + 1) % ukuran;
        }
    }
}