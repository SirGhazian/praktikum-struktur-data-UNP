#include <stdio.h>
#include <stdlib.h>
#define BENAR 1
#define SALAH 0
#define PENUH 10

struct node {
    int data;
    struct node *next;
};

typedef struct node node;

struct queue {
    int count;
    node *front;
    node *rear;
};

typedef struct queue queue;

void inisialisasi(struct queue *q) {
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}

int isempty(struct queue *q) {
    return (q->rear == NULL);
}

void enqueue(struct queue *q, int value) {
    if (q->count < PENUH) {
        node *tmp;
        tmp = (node *)malloc(sizeof(node));
        tmp->data = value;
        tmp->next = NULL;
        if (!isempty(q)) {
            q->rear->next = tmp;
            q->rear = tmp;
        } else {
            q->front = q->rear = tmp;
        }
        q->count++;
    } else {
        printf("Antrian penuh\n");
    }
}

int dequeue(struct queue *q) {
    node *tmp;
    int n = q->front->data;
    tmp = q->front;
    q->front = q->front->next;
    q->count--;
    free(tmp);
    return (n);
}

void display(struct node *head) {
    if (head == NULL) {
        printf("NULL\n");
    } else {
        printf("%d\n", head->data);
        display(head->next);
    }
}

int main() {
    queue *q = (queue *)malloc(sizeof(queue));
    inisialisasi(q);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    printf("Queue sebelum proses dequeue\n");
    display(q->front);
    dequeue(q);
    printf("Queue setelah proses dequeue\n");
    display(q->front);
    free(q);
    return 0;
}
