#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define UKURAN 5

void push(int);
void pop();
void display();

int stack[UKURAN], atas = -1;

int main() {
    int value, pilihan;
    while (1) {
        system("cls");
        printf("+----+---------------------------+");
        printf("\n| 1  | PUSH                      |");
        printf("\n| 2  | POP                       |");
        printf("\n| 3  | TAMPILKAN                 |");
        printf("\n+----+---------------------------+");
        printf("\n| 4  | KELUAR PROGRAM            |");
        printf("\n+----+---------------------------+");
        printf("\n>> Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);
        switch (pilihan) {
            case 1:
                printf("Masukan value yang ingin dimasukan: ");
                scanf("%d", &value);
                push(value);
                getch();
                break;
            case 2:
                pop();
                getch();
                break;
            case 3:
                display();
                getch();
                break;
            case 4:
                exit(0);
            default:
                system("cls");
                printf("\n[ Pilihan tidak valid! silakan coba lagi! ]");
                getch();
        }
    }
}
void push(int value) {
    if (atas == UKURAN - 1)
        printf("\n[ Stack telah penuh, Tidak memungkinkan menambah item ]");
    else {
        atas++;
        stack[atas] = value;
        printf("\n[ Item berhasil ditambahkan ]");
    }
}
void pop() {
    if (atas == -1)
        printf("\n[ Stack kosong, tidak memungkinkan untuk menghapus item ]");
    else {
        printf("\n[ Item berhasil dihapus: %d ]", stack[atas]);
        atas--;
    }
}
void display() {
    if (atas == -1)
        printf("\n[ Stack kosong. Tidak ada item yang bisa ditampilkan ]");
    else {
        int i;
        printf("\n[ Item yang ada pada stack ]\n");
        for (i = atas; i >= 0; i--)
            printf("~> %d\n", stack[i]);
    }
}