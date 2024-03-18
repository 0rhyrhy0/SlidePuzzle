#include "../headers/inputs.h"
#include "../headers/constants.h"
#include <conio.h>


int get() {
    int ch = getch();
    switch(ch) {
        case SPECIAL:
            switch(getch()) {
                case UP:    return UP_2P;
                case LEFT:  return LEFT_2P;
                case DOWN:  return DOWN_2P;
                case RIGHT: return RIGHT_2P;
            }
            return -2;

        case 'W': case 'w': return UP_1P;
        case 'A': case 'a': return LEFT_1P;
        case 'S': case 's': return DOWN_1P;
        case 'D': case 'd': return RIGHT_1P;

        case 'Q': case 'q': return QUIT;
        case 'R': case 'r': return RESTART;
        case 'Z': case 'z': return UNDO;
        case 'Y': case 'y': return REDO;

        default : return ch;
    }
    return -1;
}