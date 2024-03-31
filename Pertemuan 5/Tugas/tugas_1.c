#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BUKU {
    char title[100];
    char author[100];
    int year;
    struct BUKU* prev;
    struct BUKU* next;
} BUKU;

BUKU* head = NULL;
BUKU* tail = NULL;

BUKU* nodeBaru(char title[], char author[], int year);
void tambahBuku(char title[], char author[], int year);
void hapusBuku(char title[]);
void cetakBuku();

int main() {
    printf("+-------------------------------------------------------------------+\n|> ");
    tambahBuku("One Piece", "Eiichiro Oda", 1997);
    printf("|> ");
    tambahBuku("Naruto Shippuden", "Masashi Kishimoto", 2007);
    printf("|> ");
    tambahBuku("One Punch Man", "Yusuke Murata", 2009);
    printf("+-------------------------------------------------------------------+\n");

    // Mencetak buku
    cetakBuku();
    printf("+-------------------------------------------------------------------+\n");

    // Menghapus buku
    hapusBuku("One Piece");  // Cari buku

    // Mencetak setelah penghapusan
    cetakBuku();
    printf("+-------------------------------------------------------------------+\n");

    return 0;
}

// Membuat simpul baru
BUKU* nodeBaru(char title[], char author[], int year) {
    BUKU* newNode = (BUKU*)malloc(sizeof(BUKU));
    strcpy(newNode->title, title);
    strcpy(newNode->author, author);
    newNode->year = year;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Menambahkan buku ke akhir daftar
void tambahBuku(char title[], char author[], int year) {
    BUKU* newNode = nodeBaru(title, author, year);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    printf("Buku dengan judul '%s' telah ditambahkan.\n", title);
}

// Menghapus buku berdasarkan judul
void hapusBuku(char title[]) {
    if (head == NULL) {
        printf("Daftar buku kosong.\n");
        return;
    }

    BUKU* current = head;
    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            if (current == head && current == tail) {  // Jika hanya ada satu simpul
                head = tail = NULL;
            } else if (current == head) {  // Jika simpul yang akan dihapus adalah head
                head = head->next;
                head->prev = NULL;
            } else if (current == tail) {  // Jika simpul yang akan dihapus adalah tail
                tail = tail->prev;
                tail->next = NULL;
            } else {  // Jika simpul yang akan dihapus berada di tengah
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            free(current);
            printf("\n--[ Buku dengan judul '%s' telah dihapus ]--\n", title);
            return;
        }
        current = current->next;
    }
    printf("\n--[ Buku dengan judul '%s' tidak ditemukan ]--\n", title);
}

// Mencetak semua buku dalam daftar
void cetakBuku() {
    if (head == NULL) {
        printf("Daftar buku kosong.\n");
        return;
    }
    printf("\n[ Daftar Buku ]-----------------------------------------------------+\n");
    BUKU* current = head;
    while (current != NULL) {
        printf("|> Judul: %s, Pengarang: %s, Tahun: %d\n", current->title, current->author, current->year);
        current = current->next;
    }
}