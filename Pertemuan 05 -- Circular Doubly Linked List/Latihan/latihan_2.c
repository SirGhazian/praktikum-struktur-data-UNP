#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct gudang {
    char nama_barang[50];
    int harga;
    struct gudang *next;
    struct gudang *prev;
};

void cetak(struct gudang *head) {
    struct gudang *temp = head;
    printf("[ List Barang Belanjaan ]\n\n");
    while (temp != NULL) {
        printf("~~> %s = %d\n", temp->nama_barang, temp->harga);
        temp = temp->next;
    }
}

int main() {
    struct gudang *head;
    struct gudang *one = NULL;
    struct gudang *two = NULL;
    struct gudang *three = NULL;

    system("cls");

    one = (struct gudang *)malloc(sizeof(struct gudang));
    two = (struct gudang *)malloc(sizeof(struct gudang));
    three = (struct gudang *)malloc(sizeof(struct gudang));

    one->harga = 1000;
    strcpy(one->nama_barang, "Obat Nyamuk");

    two->harga = 5000;
    strcpy(two->nama_barang, "Gula 1 kilo");

    three->harga = 50000;
    strcpy(three->nama_barang, "Minyak Goreng");

    one->next = two;
    one->prev = NULL;
    two->next = three;
    two->prev = one;
    three->next = NULL;
    three->prev = two;

    head = one;
    cetak(head);
}
