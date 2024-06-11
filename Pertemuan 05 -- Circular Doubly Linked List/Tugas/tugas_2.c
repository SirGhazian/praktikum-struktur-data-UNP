#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char namaPemilik[50];
    char noPlat[20];
    char mobilMerk[50];
    struct Node* prev;
    struct Node* next;
};

// Deklarasi/panggil Fungsi
struct Node* nodeBaru(char noPlat[], char mobilMerk[], char namaPemilik[]);
void tambah(struct Node** head, char noPlat[], char mobilMerk[], char namaPemilik[]);
void hapus(struct Node** head);
void tampilkan(struct Node* node);

int main() {
    struct Node* head = NULL;

    // Menambahkan beberapa mobil ke antrian parkir
    tambah(&head, "BA 2355 CD", "Porsche 911 GT3 RS", "Udin Siregar");
    tambah(&head, "BA 4531 ZF", "Lamborghini SVJ", "Uni Bakwan");
    tambah(&head, "BA 4531 ZF", "Lotus Evija", "Wakwaw Tanjung");
    tambah(&head, "BA 9101 HH", "Pagani Huayra", "Dilan Gonzales");

    printf("[ Antrian Parkir ]---------------------------------\n");
    tampilkan(head);
    printf("---------------------------------------------------\n");

    // Keluarkan Mobil
    printf("\n[ Mobil antrian pertama \"%s\" telah keluar dari antrian ]\n", head->noPlat);
    hapus(&head);

    printf("\n[ Antrian Parkir Selanjutnya ]---------------------\n");
    tampilkan(head);
    printf("---------------------------------------------------\n");

    return 0;
}

// Membuat node baru
struct Node* nodeBaru(char noPlat[], char mobilMerk[], char namaPemilik[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->noPlat, noPlat);
    strcpy(newNode->mobilMerk, mobilMerk);
    strcpy(newNode->namaPemilik, namaPemilik);
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Tambah node di awal linked list
void tambah(struct Node** head, char noPlat[], char mobilMerk[], char namaPemilik[]) {
    struct Node* newNode = nodeBaru(noPlat, mobilMerk, namaPemilik);
    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}

// Hapus node dari depan linked list
void hapus(struct Node** head) {
    if (*head == NULL)
        return;

    struct Node* temp = *head;
    *head = (*head)->next;
    if (*head != NULL)
        (*head)->prev = NULL;
    free(temp);
}

// Tampilkan semua node dalam linked list
void tampilkan(struct Node* node) {
    while (node != NULL) {
        printf(">> %s - %s | %s\n", node->noPlat, node->mobilMerk, node->namaPemilik);
        node = node->next;
    }
}
