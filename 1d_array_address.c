#include <stdio.h>

int main(void) {
    unsigned long long b, w;
    long long i, lb;

    printf("Enter Base Address (B): ");
    if (scanf("%llu", &b) != 1) return 1;

    printf("Enter index: ");
    if (scanf("%lld", &i) != 1) return 1;

    printf("Enter the size of data type in bytes (w): ");
    if (scanf("%llu", &w) != 1 || w == 0) return 1;

    printf("Enter lower bound (LB): ");
    if (scanf("%lld", &lb) != 1) return 1;

    if (i < lb) {
        printf("Error: Index %lld is less than lower bound %lld\n", i, lb);
        return 1;
    }

    unsigned long long offset = (unsigned long long)(i - lb) * w;
    printf("The calculated address of the element is: %llu\n", b + offset);

    return 0;
}
