#ifndef __PUZZLE_H__
#define __PUZZLE_H__

#include "constants.h"

/** ���� �����͸� ��� �迭�� �ʱ�ȭ�մϴ�. */
void initializeBoard(int board[SIZE][SIZE]);

/** ���� �����͸� ����մϴ�. */
void printBoard(int board[SIZE][SIZE]);

/** ������ �ذ�Ǿ����� Ȯ���մϴ�.
 * @return
 * ������ �ذ�Ǿ����� 1, �ƴϸ� 0�� ��ȯ�մϴ�.
 */
int isSolved(int board[SIZE][SIZE]);

/** ������ �̵���ŵ�ϴ�.
 * ��ĭ�� �־��� ���� �Ǵ� �������� �̵��մϴ�.
 * @param direction
 * �̵��� ������ ��Ÿ���� ���Դϴ�.
 * [w ��: 0, a ��: 1, s ��: 2, d ��: 3]
 * -1�� �Է��ϸ� �������� �̵��մϴ�.
 * 
 * @return
 * �̵��� �����ϸ� 1, �����ϸ� 0�� ��ȯ�մϴ�.
 */
int move(int board[SIZE][SIZE], int direction);

#endif