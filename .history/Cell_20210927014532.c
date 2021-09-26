// the cell file

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct cell {
    bool fill;
    char display;
};


struct cell* cell_constructor() {
    struct cell* c = malloc(sizeof(struct cell));
    c->fill = false;
    c->display = ' ';
    return c;
}

void cell_flip(struct cell* c) {
    if (c->fill == true) {
        c->fill = false;
        c->display = ' ';
    }
    else {
        c->fill = true;
        c->display = 'x';
    }
}

