#include "Board.c"

int main() {
    struct board *b = board_constructor();
    print_board(b);
}