#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
    int data;
    struct LinkedList* next;
} node;

int main() {
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    node* forth = NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));
    forth = (node*)malloc(sizeof(node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = forth;

    forth->data = 3;
    forth->next = NULL;

    printf("%d", head->data);

    return 0;
}
