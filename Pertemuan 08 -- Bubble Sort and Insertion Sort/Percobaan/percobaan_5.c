#include <stdbool.h>
#include <stdio.h>

#define MAX 7
int intArray[MAX] = {4, 6, 3, 2, 1, 9, 7};

void printline(int count) {
    int i;
    for (i = 0; i < count - 1; i++) {
        printf("=");
    }
    printf("=\n");
}

void display() {
    int i;
    printf("[");

    for (i = 0; i < MAX; i++) {
        printf("%d ", intArray[i]);
    }
    printf("]\n");
}

void insertionSort() {
    int valueToInsert;
    int holePosition;
    int i;

    for (i = 1; i < MAX; i++) {
        valueToInsert = intArray[i];
        holePosition = i;

        while (holePosition > 0 && intArray[holePosition - 1] > valueToInsert) {
            intArray[holePosition] = intArray[holePosition - 1];
            holePosition--;
            printf(" -- item dipindahkan : %d\n", intArray[holePosition]);
        }
        if (holePosition != i) {
            printf(" -- item dimasukkan : %d, posisi : %d\n", valueToInsert, holePosition);

            intArray[holePosition] = valueToInsert;
        }
        printf("Iterasi %d#:", i);
        display();
    }
}

int main() {
    printf("~> Array Input: ");
    display();
    printline(50);
    insertionSort();
    printline(50);
    printf("~> Array Output: ");
    display();
}
