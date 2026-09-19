#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int numbers[MAX_SIZE];
    size_t count;

    printf("Enter number of elements: ");
    if (scanf("%zu", &count) != 1 || count > MAX_SIZE) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    printf("Enter %zu elements: ", count);
    for (size_t index = 0U; index < count; ++index) {
        if (scanf("%d", &numbers[index]) != 1) {
            fprintf(stderr, "Invalid element.\n");
            return 1;
        }
    }

    printf("Array elements:\n");
    for (size_t index = 0U; index < count; ++index) {
        printf("Index %zu -> %d\n", index, numbers[index]);
    }

    return 0;
}
