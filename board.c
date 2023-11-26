#include "board.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_BOARD 20//# 20으로임의선언
#define N_COINPOS 12
#define MAX_COIN 4

#define BOARDSTATUS_OK 1 //보드가 멀쩡한 상태
#define BOARDSTATUS_NOK 0 //보드가 부서진 상태
#define MAX_COIN 4

static int board_status[N_BOARD];//board.c파일에서만 접근 가능
static int board_coin[N_BOARD]; // #

void board_initBoard() {
	//static int board_status[N_BOARD]; //static으로 선언으로는 다른 함수에서 접근 불가
	for (int i = 0; i < N_BOARD; i++) {
		board_status[i]=0; 
		board_coin[i] = 0;
	}
	//coin할당
	for (int i = 0; i < N_COINPOS; i++) {
		{
		
			// 동전을 놓을 칸을 랜덤으로 지정 -> POS값?
			// #
			int pos =  rand()% (N_COINPOS-1);
			if (board_coin[pos]==0)
				//칸에 동전이 이미 있지 않으면
			{
				//i번째 coin 할당
				//#
				
				board_coin[pos] = rand() % (MAX_COIN);//1~MAX_COIN인지 0~MAX_COIN인지 모르겠다
			}
		}
	}
	


};

	//보드 상태 배열 선언??
	

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
		return board_status[i];// # return맞나?
	}
};