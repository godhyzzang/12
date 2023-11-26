#pragma once
#include <stdio.h>
#include <stdlib.h>


#define N_PLAYER 4
#define PLAYERSTATUS_LIVE 0
#define PLAYERSTATUS_DIE 1
#define PLAYERSTATUS_END 2 // 2로 선언?! 

#define MAX_CHARNAME 20 // # 20으로 임의선언 


int player_position[N_PLAYER]; 
char player_name[N_PLAYER][MAX_CHARNAME];
int player_coin[N_PLAYER];
int player_status[N_PLAYER];
char player_statusString[3][MAX_CHARNAME] = {"LIVE","DIE","END"};