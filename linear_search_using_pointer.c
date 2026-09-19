#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE], t, *p = a;
    size_t n;

    printf("Enter array size: ");
    if (scanf("%zu", &n) != 1 || n == 0 || n > MAX_SIZE) {
        return 1;
    }

    printf("Enter %zu elements: ", n);
    for (size_t i = 0; i < n; i++) {
        if (scanf("%d", p + i) != 1) {
            return 1;
        }
    }

    printf("Enter element to search: ");
    if (scanf("%d", &t) != 1) {
        return 1;
    }

    int found = 0;
    for (size_t i = 0; i < n; i++) {
        if (*(p + i) == t) {
            printf("Element %d found at index %zu\n", t, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Element %d not found\n", t);
    }

    return 0;
}
