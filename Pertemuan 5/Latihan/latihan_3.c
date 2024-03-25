#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertEnd(struct Node** start, int value) {
    if (*start == NULL) {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

        new_node->data = value;
        new_node->next = new_node->prev = new_node;
        *start = new_node;
        return;
    }

    struct Node* last = (*start)->prev;

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = value;

    new_node->next = *start;

    (*start)->prev = new_node;

    new_node->prev = last;

    last->next = new_node;
}

void display(struct Node* start) {
    struct Node* temp = start;
    printf("\n[ Traversal in forward direction ]\n~> ");
    while (temp->next != start) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("%d ", temp->data);
    printf("\n[ Traversal in reverse direction ]\n~> ");
    struct Node* last = start->prev;
    temp = last;
    while (temp->prev != last) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("%d ", temp->data);
}

int main() {
    struct Node* start = NULL;

    insertEnd(&start, 5);
    insertEnd(&start, 8);
    insertEnd(&start, 9);
    insertEnd(&start, 3);

    system("cls");
    printf("[ Created circular doubly linked list is ]\n");
    display(start);
    return 0;
}
