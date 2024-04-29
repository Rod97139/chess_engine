#include "stdio.h"
#include "defs.h"

int main() {

	AllInit();


	// int index = 0;

	// for (index = 0; index < BRD_SQ_NUM; ++index) {
	// 	if (index % 10 == 0) printf("\n");
	// 	printf("%5d", Sq120ToSq64[index]);
	// }

	// printf("\n\n");
	// printf("\n\n");

	// for (index = 0; index < 64; ++index) {
	// 	if (index % 8 == 0) printf("\n");
	// 	printf("%5d", Sq64ToSq120[index]);
	// }

	// int num = 21;
	// int num2 = 56;

	// ASSERT(num == num2);

	U64 playBitBoard = 0ULL;

	printf("\nStart:\n");
	PrintBitBoard(playBitBoard);

	playBitBoard |= (1ULL << SQ64(D2));
	printf("\nD2 Added:\n");
	PrintBitBoard(playBitBoard);
	
	playBitBoard |= (1ULL << SQ64(G2));
	printf("\nG2 Added:\n");
	PrintBitBoard(playBitBoard);

	return 0;
} 