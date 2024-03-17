#include "../headers/puzzle.h"
#include "../headers/terminalsupport.h"
#include "../headers/constants.h"
#include <stdio.h>
#include <stdlib.h> // rand

void initializeBoard(int board[SIZE][SIZE]) {
    for(int i=0 ; i<SIZE ; i++) {
        for(int j=0 ; j<SIZE ; j++) {
            board[i][j] = SIZE*i + j + 1;
        }
    }
    board[SIZE - 1][SIZE - 1] = 0;
}

void printBoard(int board[SIZE][SIZE]) {
    clearTerminal();
    for(int i=0 ; i<SIZE ; i++) {
        for(int j=0 ; j<SIZE ; j++) {
            if(board[i][j] == 0)
                printf("%2s ", " ");
            else
                printf("%2d ", board[i][j]);
        }
        puts("");
    }
}

int isSolved(int board[SIZE][SIZE]) {
    for(int i=0 ; i<SIZE ; i++)
        for(int j=0 ; j<SIZE ; j++) {
            // 마지막 칸은 0이어야 함
            if(i == SIZE-1 && j == SIZE-1 && board[i][j] == 0) return 1;
            else if(board[i][j] != SIZE*i + j + 1) return 0;
        }
    return 1;
}

int move(int board[SIZE][SIZE], int direction) {
    if(direction == -1)
        direction = rand() % 4;

    int x = -1, y;
    for(int i=0 ; i<SIZE && x == -1 ; i++) {
        for(int j=0 ; j<SIZE && x == -1 ; j++) {
            if(board[i][j] == 0) {
                x = i;
                y = j;
            }
        }
    }

    // 0, 1, 2, 3에 대해 빈칸을 w, a, s, d 방향으로 이동
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};

    int nx = x + dx[direction];
    int ny = y + dy[direction];

    if(nx < 0 || nx >= SIZE || ny < 0 || ny >= SIZE)
        return 0;
    
    board[x][y] = board[nx][ny];
    board[nx][ny] = 0;

    return 1;
}