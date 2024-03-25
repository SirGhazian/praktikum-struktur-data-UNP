#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int isPrime(int num) {
    if (num <= 1)
        return 0;  // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // Not prime
    }
    return 1;  // Prime
}

struct Node* generatePrimes(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    int count = 0;
    int num = 2;

    while (count < n) {
        if (isPrime(num)) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = num;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
                temp = newNode;
            } else {
                temp->next = newNode;
                temp = newNode;
            }
            count++;
        }
        num++;
    }

    return head;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("~> Masukkan jumlah bilangan prima yang ingin ditampilkan: ");
    scanf("%d", &n);

    printf("~> Masukkan ukuran awal memori: ");
    scanf("%d", &m);

    struct Node* primes = (struct Node*)malloc(m * sizeof(struct Node));
    if (primes == NULL) {
        printf("[ Gagal mengalokasikan memori ]");
        return 1;
    }

    primes = generatePrimes(n);

    printf("\n[ Bilangan prima hingga suku ke-%d ]\n~> ", n);
    printList(primes);

    struct Node* temp;
    while (primes != NULL) {
        temp = primes;
        primes = primes->next;
        free(temp);
    }

    return 0;
}
