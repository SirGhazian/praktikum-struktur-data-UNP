#include <stdio.h>

#define ukuran 5
int deque[ukuran];
int f = -1, r = -1;

void insert_front(int x) {
    if ((f == 0 && r == ukuran - 1) || (f == r + 1)) {
        printf("[ OVERFLOW WARNING ]");
    } else if ((f == -1) && (r == -1)) {
        f = r = 0;
        deque[f] = x;
    } else if (f == 0) {
        f = ukuran - 1;
        deque[f] = x;
    } else {
        f = f - 1;
        deque[f] = x;
    }
}

void insert_rear(int x) {
    if ((f == 0 && r == ukuran - 1) || (f == r + 1)) {
        printf("[ OVERFLOW WARNING ]");
    } else if ((f == -1) && (r == -1)) {
        r = 0;
        deque[r] = x;
    } else if (r == ukuran - 1) {
        r = 0;
        deque[r] = x;
    } else {
        r++;
        deque[r] = x;
    }
}

void display() {
    if (f == -1) {
        printf("\n[ DEQUE KOSONG ]");
        return;
    }
    int i = f;
    printf("Elemen pada deque adalah: ");
    do {
        printf("%d ", deque[i]);
        i = (i + 1) % ukuran;
    } while (i != (r + 1) % ukuran);
}

void getfront() {
    if (f == -1) {
        printf("\n[ DEQUE KOSONG ]");
    } else {
        printf("\n~> Nilai dari elemen pada bagian depan adalah: %d ", deque[f]);
    }
}

void getrear() {
    if (f == -1) {
        printf("\n[ DEQUE KOSONG ]");
    } else {
        printf("\n~> Nilai pada elemen belakang adalah: %d ", deque[r]);
    }
}

void delete_front() {
    if (f == -1) {
        printf("[ DEQUE KOSONG ]");
        return;
    }
    printf("\n~> Elemen yang dihapus adalah: %d ", deque[f]);
    if (f == r) {
        f = -1;
        r = -1;
    } else {
        f = (f + 1) % ukuran;
    }
}

void delete_rear() {
    if (f == -1) {
        printf("[ DEQUE KOSONG ]");
        return;
    }
    printf("\n~> Elemen yang dihapus adalah: %d", deque[r]);
    if (f == r) {
        f = -1;
        r = -1;
    } else {
        r = (r - 1 + ukuran) % ukuran;
    }
}

int main() {
    insert_front(20);
    insert_front(10);
    insert_rear(30);
    insert_rear(50);
    insert_rear(80);

    display();
    getfront();
    getrear();
    delete_front();
    delete_rear();
    printf("\n\n");
    display();
    return 0;
}
