// This it eh baord file
#include <stdio.h>

#define WIDTH 10
#define HEIGHT 20

struct board {
    int width;
    int height;
    struct cell name[WIDTH][HEIGHT];
    //int name[20][5];
};

struct board* board_constructor{
    struct board* init = malloc(sizeof(struct board));
    board->width = WIDTH;
    board->height = HEIGHT;
    return init;
}
