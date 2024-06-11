#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data) {
    // 1. Periksa apakah next_node yang diberikan adalah NULL
    if (next_node == NULL) {
        printf("node selanjutnya yang diberikan tidak boleh NULL");
        return;
    }

    // 2. Alokasikan node baru
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 3. Masukkan data
    new_node->data = new_data;

    // 4. Jadikan prev dari node baru sebagai prev dari next_node
    new_node->prev = next_node->prev;

    // 5. Jadikan prev dari next_node sebagai new_node
    next_node->prev = new_node;

    // 6. Jadikan next_node sebagai next dari new_node
    new_node->next = next_node;

    // 7. Ubah next dari node sebelum new_node
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;

    // 8. Jika prev dari new_node adalah NULL, maka new_node akan menjadi kepala node baru
    else
        (*head_ref) = new_node;
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

    push(&head, 9);
    push(&head, 2);
    push(&head, 4);
    insertBefore(&head, head->next, 8);

    printList(head);
    return 0;
}
