#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;  // Pointer ke node selanjutnya
    struct Node* prev;  // Pointer ke node sebelumnya
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

void printList(struct Node* node) {
    struct Node* last;
    printf("[ Traversal ke depan ]\n~> ");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\n[ Traversal ke belakang ]\n~> ");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

int main() {
    struct Node* head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    printList(head);
    return 0;
}
