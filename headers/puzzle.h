#ifndef __PUZZLE_H__
#define __PUZZLE_H__

#include "constants.h"

/** 퍼즐 데이터를 담는 배열을 초기화합니다. */
void initializeBoard(int board[SIZE][SIZE]);

/** 퍼즐 데이터를 출력합니다. */
void printBoard(int board[SIZE][SIZE]);

/** 퍼즐이 해결되었는지 확인합니다.
 * @return
 * 퍼즐이 해결되었으면 1, 아니면 0을 반환합니다.
 */
int isSolved(int board[SIZE][SIZE]);

/** 퍼즐을 이동시킵니다.
 * 빈칸을 주어진 방향 또는 랜덤으로 이동합니다.
 * @param direction
 * 이동할 방향을 나타내는 값입니다.
 * [w ↑: 0, a ←: 1, s ↓: 2, d →: 3]
 * -1을 입력하면 랜덤으로 이동합니다.
 * 
 * @return
 * 이동에 성공하면 1, 실패하면 0을 반환합니다.
 */
int move(int board[SIZE][SIZE], int direction);

#endif