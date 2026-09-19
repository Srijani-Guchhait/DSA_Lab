#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t index = 0U; index < count; ++index) {
        printf("Element at index %zu is: %d\n", index, numbers[index]);
    }

    return 0;
}
