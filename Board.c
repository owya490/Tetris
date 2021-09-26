// This it eh baord file
#include <stdio.h>
#include "Cell.c"

#define WIDTH 10
#define HEIGHT 20

struct board {
    int width;
    int height;
    struct cell *grid[HEIGHT][WIDTH];
    //int name[20][5];
};

struct board* board_constructor(){
    struct board* init = malloc(sizeof(struct board));
    init->width = WIDTH;
    init->height = HEIGHT;

    for (int i = 0; i < init->height; i++) {
        for (int j = 0; j < init->width; j++) {
            init->grid[i][j] = cell_constructor();
        }
    }
    return init;
}

// FUNCTION that will go through the board and print out the output (each cell)
void print_board(struct board* b){
    for (int i = 0; i < b->height; i++) {
        for (int j = 0; j < b->width; j++) {
            // b -> struct cell 'grid' -> char 'display' within struct cell
            printf("%c", b->grid[i][j]->display);
        }
        printf("\n");
    }
}
