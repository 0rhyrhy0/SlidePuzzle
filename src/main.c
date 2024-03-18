#include "../headers/headers.h"

int main()
{
    srand(time(NULL));

    int board[SIZE][SIZE];
    int moveCount = 0;
    initializeBoard(board);

    // ·£´ýÀ¸·Î ¼¯±â
    for(int i=0 ; i<SHUFFLE_COUNT ; i++) move(board, -1);

    printBoard(board);
    puts("wasd or arrow keys to move, q to quit.");

    while(1) {
        int command = get();
        if(command <= 7 && move(board, command % 4)) moveCount++;

        printBoard(board);

        if(isSolved(board)) {
            puts("Congratulations!");
            printf("Total moves: %d\n", moveCount);
            break;
        }

        if(command == QUIT) {
            puts("Quit the game.");
            break;
        }
    }
}
