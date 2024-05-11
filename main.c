#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

// #define PERFTFEN "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1"
#define PERFTFEN "n1n5/PPPk4/8/8/8/8/4Kppp/5N1N w - - 0 1"

int main() {

	AllInit();

	S_BOARD board[1];
	S_MOVELIST list[1];
	ParseFen(START_FEN, board);
	// PrintBoard(board);
	// PerftTest(3, board);

	char input[6];
	int move = NOMOVE;

	while (TRUE)
	{
		PrintBoard(board);
		printf("Enter move: ");
		fgets(input, 6, stdin);

		if (input[0] == 'q') {
			break;
		} else if (input[0] == 't') {
			TakeMove(board);
		} else {
			move = ParseMove(input, board);
			if (move != NOMOVE) {
				MakeMove(board, move);
				// if(IsRepetition(board)) {
				// 	printf("REPETITION!\n");
				// }
			} else {
				printf("Move not valid: %s\n", input);
			}
		}
		
		fflush(stdin);
	}
	

	return 0;
} 