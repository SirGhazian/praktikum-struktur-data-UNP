#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *atas = NULL;

void push(int);
void pop();
void tampilkan();

int main() {
    int pilihan, value;
    while (1) {
        system("cls");
        printf("== Stack Menggunakan Linked List ==\n");
        printf("+----+----------------------------+");
        printf("\n| 1  | PUSH                       |");
        printf("\n| 2  | POP                        |");
        printf("\n| 3  | TAMPILKAN                  |");
        printf("\n+----+----------------------------+");
        printf("\n| 4  | KELUAR PROGRAM             |");
        printf("\n+----+----------------------------+");
        printf("\n>> Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);
        switch (pilihan) {
            case 1:
                printf("Masukan nilai yang ingin ditambahkan ke stack: ");
                scanf("%d", &value);
                push(value);
                getch();
                break;
            case 2:
                pop();
                getch();
                break;
            case 3:
                tampilkan();
                getch();
                break;
            case 4:
                exit(0);
            default:
                printf("\n[ Pilihan tidak valid, silakan coba lagi ]\n");
        }
    }
}
void push(int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    if (atas == NULL)
        newNode->next = NULL;
    else
        newNode->next = atas;
    atas = newNode;
    printf("\n[ Item berhasil ditambahkan ]\n");
}
void pop() {
    if (atas == NULL)
        printf("\n[ Stack Kosong ]\n");
    else {
        struct Node *temp = atas;
        printf("\n[ Item berhasil dihapus: %d ]", temp->data);
        atas = temp->next;
        free(temp);
    }
}
void tampilkan() {
    if (atas == NULL)
        printf("\n[ Stack Kosong ]\n");
    else {
        struct Node *temp = atas;
        while (temp->next != NULL) {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("\n%d--->NULL", temp->data);
    }
}