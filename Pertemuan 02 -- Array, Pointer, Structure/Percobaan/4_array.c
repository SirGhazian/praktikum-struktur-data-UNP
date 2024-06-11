#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            printf("array[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
