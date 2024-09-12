#include "main.h"

void create_sudoku_map(data_t *data)
{
    data->sudoku_map = malloc(sizeof(int *) * 10);
    for (size_t i = 0; i < 9; i++)
    {
        data->sudoku_map[i] = malloc(sizeof(int) * 10);
        for (size_t j = 0; j < 9; j++)
        {
            data->sudoku_map[i][j] = -1;
        }
        data->sudoku_map[i][9] = 0;
        
    }
    data->sudoku_map[9] = NULL;
    return;
}

void free_sudoku_map(data_t *data)
{
    for (size_t i = 0; i < 9; i++)
    {
        free(data->sudoku_map[i]);
    }
    free(data->sudoku_map);
    return;
}

void print_sudoku_map(data_t *data)
{
    return;
}