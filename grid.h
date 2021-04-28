#pragma once

typedef struct Grid Grid;

Grid *grid_new(unsigned short x, unsigned short y);

char *grid_at(Grid *grid, unsigned short x, unsigned short y);

void grid_destroy(Grid *grid);
