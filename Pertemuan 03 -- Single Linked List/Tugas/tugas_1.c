#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("[ Error: Alokasi Memori Gagal! ]\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void freeList(struct Node* head);
void fibonacci(int n, struct Node** headRef);
void printList(struct Node* head);
void append(struct Node** headRef, int data);

int main() {
    int n;
    printf("~~> Masukkan nilai suku ke-n: ");
    scanf("%d", &n);

    struct Node* head = NULL;

    fibonacci(n, &head);

    printf("\n[ Deret Fibonacci hingga suku ke-%d ]\n~~> ", n);
    printList(head);

    // Membebaskan memori
    freeList(head);

    return 0;
}

void append(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void fibonacci(int n, struct Node** headRef) {
    if (n <= 0)
        return;

    int a = 0, b = 1;
    append(headRef, a);
    append(headRef, b);

    for (int i = 2; i < n; i++) {
        int next = a + b;
        append(headRef, next);
        a = b;
        b = next;
    }
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
