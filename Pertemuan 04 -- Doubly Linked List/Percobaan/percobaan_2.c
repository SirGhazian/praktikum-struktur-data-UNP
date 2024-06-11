#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head_ref, int new_data) {
    // 1. alokasi node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 2. masukkan data
    new_node->data = new_data;

    // 3. Buat next dari node baru sebagai kepala dan sebelumnya NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    // 4. ubah prev dari node kepala menjadi node baru
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // 5. pindahkan kepala untuk menunjuk ke node baru
    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data) {
    // 1. periksa apakah prev_node yang diberikan NULL
    if (prev_node == NULL) {
        printf("node sebelumnya yang diberikan tidak boleh NULL");
        return;
    }

    // 2. alokasi node baru
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 3. masukkan data
    new_node->data = new_data;

    // 4. Buat next dari node baru sebagai next dari prev_node
    new_node->next = prev_node->next;

    // 5. Buat next dari prev_node menjadi new_node
    prev_node->next = new_node;

    // 6. Buat prev_node sebagai sebelumnya dari new_node
    new_node->prev = prev_node;

    // 7. Ubah prev_node dari node next new_node
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

void printList(struct Node* node) {
    struct Node* last;
    printf("[ Traversal ke arah depan ]\n~> ");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\n[ Traversal ke arah belakang ]\n~> ");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

int main() {
    // Mulai dengan list kosong
    struct Node* head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 8);
    insertAfter(head->next, 5);

    printList(head);
    return 0;
}
