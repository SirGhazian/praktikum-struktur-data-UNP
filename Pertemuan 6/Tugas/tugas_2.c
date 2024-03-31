#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PANJANG 100

struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* ptr) {
    return !ptr;
}

void push(struct Node** ptr, char data) {
    struct Node* newNode = createNode(data);
    newNode->next = *ptr;
    *ptr = newNode;
}

char pop(struct Node** ptr) {
    if (isEmpty(*ptr))
        return '\0';
    struct Node* temp = *ptr;
    *ptr = (*ptr)->next;
    char popped = temp->data;
    free(temp);
    return popped;
}

void balikkanKata(char* word) {
    int length = strlen(word);
    struct Node* ptr = NULL;  // Ubah stack menjadi ptr

    for (int i = 0; i < length; ++i) {
        push(&ptr, word[i]);  // Ubah stack menjadi ptr
    }

    for (int i = 0; i < length; ++i) {
        word[i] = pop(&ptr);  // Ubah stack menjadi ptr
    }
}

int main() {
    int choice;
    char word[PANJANG];

    while (choice != 3) {
        system("cls");
        printf("+----+----------------------+");
        printf("\n| 1  | Input Teks/Kata      |");
        printf("\n| 2  | Balik Teks/Kata      |");
        printf("\n+----+----------------------+");
        printf("\n| 3  | KELUAR PROGRAM       |");
        printf("\n+----+----------------------+");
        printf("\n>> Masukkan pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf(">> Masukkan kata: ");
                fflush(stdin);
                gets(word);

                printf("\n[ Teks Berhasil Diinput! ]");
                getch();
                break;
            case 2:
                printf("\n>> Teks Awal    : %s\n", word);
                balikkanKata(word);
                printf(">> Teks dibalik : %s", word);
                getch();
                break;
            case 3:
                printf("\n[ Terimakasih Telah Menggunakan Program! ]\n");
                printf("[ Created by Ghazian ]\n");
                break;
            default:
                printf("[ Menu tidak valid ]\n");
        }
    }

    return 0;
}
