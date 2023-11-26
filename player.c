#include "player.h"
#include <stdio.h>
#include <stdlib.h>


//1. 초기화 - 이름 입력
void player_initPlayer(){
	for (int i = 0; i < N_PLAYER; i++) {
		player_position[i] = 0;
		player_coin[i] = 0;
		player_status[i] = PLAYERSTATUS_LIVE;
		printf("Player %i's name : ", i);
		scanf("%s", player_name[i]);
	}
}

void player_printPlayerStatus(int player){
	
	int i;
	for (i = 0; i < N_BOARD; i++) {
		printf("|");
		if (player_position[player]==i){
			printf("%c", player_name[player][0]);
		}
		else {
			if (board_getBoardStatus(i) == BOARDSTATUS_NOK)
				printf("X");
			else
				printf(" ");
		}
	}
	printf("|\n");
	

}

void printPlayerStatus(void) {

	int i;
	printf("player status --\n");
	for (i = 0; i < N_PLAYER; i++) {
	
		printf("%s : pos %i, coin %i, status %s\n", player_name[i], player_position[i], player_coin[i], player_statusString[player_status[i]]);
		printfPlayerPosition(i);

	}
	printf("-----------\n");
}
