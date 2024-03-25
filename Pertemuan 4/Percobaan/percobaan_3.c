#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;  // Pointer ke node selanjutnya
    struct Node* prev;  // Pointer ke node sebelumnya
};
void push(struct Node** head_ref, int new_data) {
    // 1. alokasi node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 2. memasukkan data
    new_node->data = new_data;

    // 3. Menjadikan next dari node baru sebagai head dan prev sebagai NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    // 4. mengubah prev dari head node menjadi node baru
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // 5. memindahkan head untuk menunjuk ke node baru
    (*head_ref) = new_node;
}
void append(struct Node** head_ref, int new_data) {
    // 1. alokasi node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;  // digunakan pada langkah 5

    // 2. memasukkan data
    new_node->data = new_data;

    // 3. Node baru ini akan menjadi node terakhir, sehingga membuat next-nya menjadi NULL
    new_node->next = NULL;

    // 4. Jika Linked List kosong, maka membuat node baru sebagai head
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    // 5. Jika tidak, traverse sampai node terakhir
    while (last->next != NULL)
        last = last->next;

    // 6. Mengubah next dari node terakhir
    last->next = new_node;

    // 7. Menjadikan node terakhir sebagai previous dari node baru
    new_node->prev = last;
    return;
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
    struct Node* head = NULL;

    append(&head, 11);
    push(&head, 22);
    push(&head, 14);
    append(&head, 98);

    printList(head);
    return 0;
}
