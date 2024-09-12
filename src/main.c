#include "main.h"

int main(void)
{
    data_t *data = malloc(sizeof(data_t));
    create_sudoku_map(data);
    free_sudoku_map(data);
    free(data);
    return 0;
}