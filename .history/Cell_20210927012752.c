// the cell file

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct tmp{
    int value;
};

struct cell {
    bool fill;
    char display;
    struct tmp grid[5][5];
};


struct cell* cell_constructor() {
    struct cell* c = malloc(sizeof(struct cell));
    c->fill = false;
    c->display = 'o';
    return c;
}
