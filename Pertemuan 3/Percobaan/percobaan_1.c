#include <stdio.h>
#include <stdlib.h>

typedef struct employee_st {
    char name[40];
    int id;
} Employee;

int main() {
    int myInt;
    Employee john;

    printf("~> Ukuran int adalah %d\n", sizeof(myInt));
    printf("~> Ukuran int adalah %d\n", sizeof(int));
    printf("~> Ukuran \"Employee\" adalah %d\n", sizeof(Employee));
    printf("~> Ukuran john adalah %d\n", sizeof(john));
    printf("~> Ukuran char adalah %d\n", sizeof(char));
    printf("~> Ukuran short adalah %d\n", sizeof(short));
    printf("~> Ukuran int adalah %d\n", sizeof(int));
    printf("~> Ukuran long adalah %d\n", sizeof(long));
    printf("~> Ukuran float adalah %d\n", sizeof(float));
    printf("~> Ukuran double adalah %d\n", sizeof(double));

    return 0;
}
