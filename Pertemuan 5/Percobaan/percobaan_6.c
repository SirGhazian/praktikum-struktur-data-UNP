#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;
void tambahAwal();
void tambahAkhir();
void hapusAwal();
void hapusAkhir();
void tampilkan();
void cari();

int main() {
    int choice = 0;

    while (choice != 9) {
        system("cls");
        printf("+----+---------------------------------------+");
        printf("\n| NO | CIRCULAR SINGLY LINKED LIST           |");
        printf("\n+----+---------------------------------------+");
        printf("\n| 1  | Masukan data di awal                  |");
        printf("\n| 2  | Masukan data di akhir                 |");
        printf("\n| 3  | Hapus dari awal                       |");
        printf("\n| 4  | Hapus dari akhir                      |");
        printf("\n| 5  | Cari sebuah elemen                    |");
        printf("\n| 6  | Tampilkan                             |");
        printf("\n+----+---------------------------------------+");
        printf("\n| 7  | KELUAR PROGRAM                        |");
        printf("\n+----+---------------------------------------+");
        printf("\n>> Masukkan pilihan Anda: ");
        scanf("\n%d", &choice);
        switch (choice) {
            case 1:
                tambahAwal();
                getch();
                break;
            case 2:
                tambahAkhir();
                getch();
                break;
            case 3:
                hapusAwal();
                getch();
                break;
            case 4:
                hapusAkhir();
                getch();
                break;
            case 5:
                cari();
                getch();
                break;
            case 6:
                system("cls");
                tampilkan();
                getch();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Mohon masukan pilihan yang sesuai menu..");
        }
    }
}

void tambahAwal() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\n[ OVERFLOW ]");
    } else {
        printf("\nMasukan nilai item: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
            head = ptr;
        }
        printf("\nNode inserted\n");
    }
}

void tambahAkhir() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\n[ OVERFLOW ]");
    } else {
        printf("\nMasukan nilai: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            head = ptr;
            ptr->next = head;
            ptr->prev = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            head->prev = ptr;
            ptr->next = head;
        }
    }
    printf("\n[ node ditambahkan ]\n");
}

void hapusAwal() {
    struct node *temp;
    if (head == NULL) {
        printf("\n[ UNDERFLOW ]");
    } else if (head->next == head) {
        head = NULL;
        free(head);
        printf("\n[ node dihapus ]\n");
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head->next;
        head->next->prev = temp;
        free(head);
        head = temp->next;
    }
}

void hapusAkhir() {
    struct node *ptr;
    if (head == NULL) {
        printf("\n[ UNDERFLOW ]");
    } else if (head->next == head) {
        head = NULL;
        free(head);
        printf("\n[ node dihapus ]\n");
    } else {
        ptr = head;
        if (ptr->next != head) {
            ptr = ptr->next;
        }
        ptr->prev->next = head;
        head->prev = ptr->prev;
        free(ptr);
        printf("\nnode dihapus\n");
    }
}

void tampilkan() {
    struct node *ptr;
    ptr = head;
    if (head == NULL) {
        printf("\n[ Tidak ada item yang bisa ditampilkan ]");
    } else {
        printf("\n Menampilkan nilai ... \n");
        while (ptr->next != head) {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n", ptr->data);
    }
}

void cari() {
    struct node *ptr;
    int item, i = 0, flag = 1;
    ptr = head;
    if (ptr == NULL) {
        printf("\n[ List kosong ]\n");
    } else {
        printf("\nMasukan item yang ingin kamu cari: \n");
        scanf("%d", &item);
        if (head->data == item) {
            printf("item ditemukan pada lokasi %d", i + 1);
            flag = 0;
        } else {
            while (ptr->next != head) {
                if (ptr->data == item) {
                    printf("item ditemukan pada lokasi %d ", i + 1);
                    flag = 0;
                    break;
                } else {
                    flag = 1;
                }
                i++;
                ptr = ptr->next;
            }
        }
        if (flag != 0) {
            printf("[ Item tidak ditemukan ]\n");
        }
    }
}