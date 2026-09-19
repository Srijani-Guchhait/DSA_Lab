#include <stdio.h>

int main(void)
{
    unsigned long base_address;
    size_t element_size;
    size_t columns;
    long row;
    long column;
    long lower_row;
    long lower_column;

    printf("Enter the Base Address (B): ");
    if (scanf("%lx", &base_address) != 1) {
        fprintf(stderr, "Invalid base address.\n");
        return 1;
    }

    printf("Enter the size of the data type in bytes (w): ");
    if (scanf("%zu", &element_size) != 1 || element_size == 0) {
        fprintf(stderr, "Invalid element size.\n");
        return 1;
    }

    printf("Enter the target row: ");
    if (scanf("%ld", &row) != 1) return 1;

    printf("Enter the target column: ");
    if (scanf("%ld", &column) != 1) return 1;

    printf("Enter the lower row bound (LR): ");
    if (scanf("%ld", &lower_row) != 1) return 1;

    printf("Enter the lower column bound (LC): ");
    if (scanf("%ld", &lower_column) != 1) return 1;

    printf("Enter total number of columns (N): ");
    if (scanf("%zu", &columns) != 1 || columns == 0) {
        fprintf(stderr, "Invalid column count.\n");
        return 1;
    }

    if (row < lower_row || column < lower_column) {
        fprintf(stderr, "Error: Target row or column cannot be less than lower bounds.\n");
        return 1;
    }

    size_t row_offset = (size_t)(row - lower_row);
    size_t col_offset = (size_t)(column - lower_column);

    unsigned long address = base_address + (row_offset * columns + col_offset) * element_size;

    printf("The calculated address for A[%ld][%ld] is: 0x%lx\n",
           row, column, address);

    return 0;
}
