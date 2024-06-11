#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Mahasiswa {
    char nim[20];
    char nama[50];
    float nilai;
};

struct Stack {
    int top;
    struct Mahasiswa data[MAX_SIZE];
};

// Panggil Fungsi
void buatStack(struct Stack *stack);
int isFull(struct Stack *stack);
int isEmpty(struct Stack *stack);
void push(struct Stack *stack, struct Mahasiswa myMHS);
void pop(struct Stack *stack);
void tampilkan(struct Stack *stack);

int main() {
    struct Stack stack;
    buatStack(&stack);
    struct Mahasiswa myMHS;
    int pilihan = 0;

    while (pilihan != 4) {
        system("cls");
        printf("+----+------------------------------+");
        printf("\n| NO | MENU PROGRAM                 |");
        printf("\n+----+------------------------------+");
        printf("\n| 1  | Input Data Mahasiswa         |");
        printf("\n| 2  | Hapus Data Mahasiswa         |");
        printf("\n| 3  | Tampilkan Data Mahasiswa     |");
        printf("\n+----+------------------------------+");
        printf("\n| 4  | KELUAR PROGRAM               |");
        printf("\n+----+------------------------------+");
        printf("\n>> Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        fflush(stdin);
        switch (pilihan) {
            case 1:
                printf("\n~> Masukkan NIM: ");
                scanf("%s", myMHS.nim);
                fflush(stdin);
                printf("~> Masukkan Nama: ");
                gets(myMHS.nama);
                printf("~> Masukkan Nilai: ");
                scanf("%f", &myMHS.nilai);
                push(&stack, myMHS);
                getch();
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                tampilkan(&stack);
                getch();
                break;
            case 4:
                printf("\n[ Terimakasih Telah Menggunakan Program! ]\n");
                printf("[ Created by Ghazian ]\n");
                break;
            default:
                printf("\n[ Pilihan tidak valid! ] ");
                getch();
        }
    }

    return 0;
}

void buatStack(struct Stack *stack) {
    stack->top = -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

void push(struct Stack *stack, struct Mahasiswa myMHS) {
    if (isFull(stack)) {
        printf("[ WARNING! Stack penuh! ]\n");
        return;
    }
    stack->top++;
    stack->data[stack->top] = myMHS;
    printf("\n[ Data berhasil ditambahkan! ]");
}

void pop(struct Stack *stack) {
    char yaTidak;

    if (isEmpty(stack)) {
        printf("\n[ Tidak ditemukan data! ]");
        return;
    }

    system("cls");
    printf("-----------------------\n");
    printf(">> NIM   : %s\n", stack->data[stack->top].nim);
    printf(">> NAMA  : %s\n", stack->data[stack->top].nama);
    printf(">> NILAI : %.2f\n", stack->data[stack->top].nilai);
    printf("-----------------------\n");

    printf("\n>> Apakah anda yakin ingin menghapus data? (y/n): ");
    scanf("%c", &yaTidak);
    fflush(stdin);

    if (yaTidak == 'y' || yaTidak == 'Y') {
        stack->top--;
        printf("\n[ Data berhasil dihapus ] ");
    } else if (yaTidak == 'n' || yaTidak == 'N') {
        printf("\n[ Data tidak dihapus ]");
    } else {
        printf("\n[ Pilihan tidak valid! ] ");
        getch();
        return;
    }
    getch();
}

void tampilkan(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("\n[ Tidak ditemukan data! ]");
        return;
    }

    system("cls");
    printf("[ LIST MAHASISWA ]\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("\n[%d]--------------------\n", i + 1);
        printf(">> NAMA  : %s\n", stack->data[i].nim);
        printf(">> NIM   : %s\n", stack->data[i].nama);
        printf(">> NILAI : %.2f\n", stack->data[i].nilai);
        printf("-----------------------\n");
    }
}