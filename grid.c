#include "grid.h"

#include <stdlib.h>

typedef struct Grid {
    char *buffer;
    struct {
        unsigned short x;
        unsigned short y;
    } dimensions;
} Grid;

Grid *grid_new(unsigned short x, unsigned short y) {
    char *buffer       = calloc(x * y, sizeof(char));
    Grid *grid         = malloc(sizeof(Grid));
    grid->buffer       = buffer;
    grid->dimensions.x = x;
    grid->dimensions.y = y;

    return grid;
}

char *grid_at(Grid *grid, unsigned short x, unsigned short y) {
    size_t idx = x * grid->dimensions.y + y;
    return &grid->buffer[idx];
}

void grid_destroy(Grid *grid) {
    free(grid->buffer);
    free(grid);
}
