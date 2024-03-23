#include <stdio.h>

struct tingkat5 {
    int data;
};

struct tingkat4 {
    struct tingkat5 l5;
};

struct tingkat3 {
    struct tingkat4 l4;
};

struct tingkat2 {
    struct tingkat3 l3;
};

struct tingkat1 {
    struct tingkat2 l2;
};

struct dasar {
    struct tingkat1 l1;
};

int main() {
    struct dasar aksesDATA;

    aksesDATA.l1.l2.l3.l4.l5.data = 10;

    printf("Nilai data: %d\n", aksesDATA.l1.l2.l3.l4.l5.data);

    return 0;
}
