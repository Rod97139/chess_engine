#include "stdio.h"
#include "stdlib.h"
#include "defs.h"



int main() {

	AllInit();

	int PieceOne = rand();
	int PieceTwo = rand();
	int PieceThree = rand();
	int PieceFour = rand();

	printf("PieceOne:%X\n", PieceOne);
	printf("PieceTwo:%X\n", PieceTwo);
	printf("PieceThree:%X\n", PieceThree);
	printf("PieceFour:%X\n", PieceFour);

	int key = PieceOne ^ PieceTwo ^ PieceFour;
	int tempKey = PieceOne;
	tempKey ^= PieceThree;
	tempKey ^= PieceFour;
	tempKey ^= PieceTwo;
	printf("Key:%X\n", key);
	printf("TempKey:%X\n", tempKey);

	tempKey ^= PieceThree;
	printf("(three out)TempKey:%X\n", tempKey);
	tempKey ^= PieceThree;
	printf("(three in again)TempKey:%X\n", tempKey);
	
	return 0;
} 