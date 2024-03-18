#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#define SIZE 4
#define SHUFFLE_COUNT 1000

/* �Է� �� enum */
enum Input {
    SPECIAL = 224,

    UP = 72,    LEFT = 75,
    RIGHT = 77, DOWN = 80,
};

/* ��� �� enum */
enum Output {
    UP_1P, LEFT_1P, DOWN_1P, RIGHT_1P, // wasd
    UP_2P, LEFT_2P, DOWN_2P, RIGHT_2P, // ����Ű
    QUIT, RESTART, UNDO, REDO
};

#endif
