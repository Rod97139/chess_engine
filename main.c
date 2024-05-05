#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

#define CASTLE1 "r3k2r/8/8/8/8/8/8/R3K2R w KQkq - 0 1"
#define CASTLE2 "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1"

int main() {

	AllInit();

	S_BOARD board[1];
	S_MOVELIST list[1];
	ParseFen(START_FEN, board);
	// PrintBoard(board);

	GenerateAllMoves(board, list);

	int move = 0;
	int MoveNum = 0;

	PrintBoard(board);
	getchar();
	
	for(MoveNum = 0; MoveNum < list->count; ++MoveNum) {
		move = list->moves[MoveNum].move;

		if(!MakeMove(board, move)) {
			continue;
		}

		printf("Move:%d > %s\n",MoveNum+1,PrMove(move));
		PrintBoard(board);

		TakeMove(board);
		printf("\nTAKEN: %s\n", PrMove(move));
		PrintBoard(board);

		getchar();
	}



	return 0;
} 