#include "board.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_BOARD 20//# 20�������Ǽ���
#define N_COINPOS 12
#define MAX_COIN 4

#define BOARDSTATUS_OK 1 //���尡 ������ ����
#define BOARDSTATUS_NOK 0 //���尡 �μ��� ����
#define MAX_COIN 4

static int board_status[N_BOARD];//board.c���Ͽ����� ���� ����
static int board_coin[N_BOARD]; // #

void board_initBoard() {
	//static int board_status[N_BOARD]; //static���� �������δ� �ٸ� �Լ����� ���� �Ұ�
	for (int i = 0; i < N_BOARD; i++) {
		board_status[i]=0; 
		board_coin[i] = 0;
	}
	//coin�Ҵ�
	for (int i = 0; i < N_COINPOS; i++) {
		{
		
			// ������ ���� ĭ�� �������� ���� -> POS��?
			// #
			int pos =  rand()% (N_COINPOS-1);
			if (board_coin[pos]==0)
				//ĭ�� ������ �̹� ���� ������
			{
				//i��° coin �Ҵ�
				//#
				
				board_coin[pos] = rand() % (MAX_COIN);//1~MAX_COIN���� 0~MAX_COIN���� �𸣰ڴ�
			}
		}
	}
	


};

	//���� ���� �迭 ����??
	

void board_printBoardStatus(void){
	

	int i;

printf("----------BOARD STATUS----------");
for (i = 0; i < N_BOARD; i++) {
	printf("|");
	if (board_status[i] == BOARDSTATUS_NOK) {
		printf("X");
	}
	else {
		printf("O");
	}
}
printf("|\n");
printf("---------------------------------");



};

int board_getBoardCoin(int pos) {
	return board_coin[pos];
	board_coin[pos] = 0;

};
void board_getSharkPosition();
void board_stepShark();
void board_getBoardStatus() {
	for (int i = 0; i < N_BOARD; i++) {
		return board_status[i];// # return�³�?
	}
};