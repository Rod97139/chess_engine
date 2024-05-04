// movegen.c

#include "stdio.h"
#include "defs.h"

/*

MoveGen (board, list)
    Loop all pieces
        -> Slider loop each direction add move
            -> Addmove list->moves[list->count] = move; list->count++;
*/

void AddQuietMove(const S_BOARD *pos, int move, S_MOVELIST *list) {
    // ASSERT(SqOnBoard(FROMSQ(move)));
    // ASSERT(SqOnBoard(TOSQ(move)));

    list->moves[list->count].move = move;
    list->moves[list->count].score = 0;

    // if (pos->searchKillers[0][pos->ply] == move) {
    //     list->moves[list->count].score = 900000;
    // } else if (pos->searchKillers[1][pos->ply] == move) {
    //     list->moves[list->count].score = 800000;
    // } else {
    //     list->moves[list->count].score = pos->searchHistory[pos->pieces[FROMSQ(move)]][TOSQ(move)];
    // }

    list->count++;
}

void AddCaptureMove(const S_BOARD *pos, int move, S_MOVELIST *list) {

    list->moves[list->count].move = move;
    list->moves[list->count].score = 0;
    list->count++;
}

void AddEnPassantMove(const S_BOARD *pos, int move, S_MOVELIST *list) {
    list->moves[list->count].move = move;
    list->moves[list->count].score = 105 + 1000000;
    list->count++;
}

void GenerateAllMoves(const S_BOARD *pos, S_MOVELIST *list) {

    list->count = 0;
}

// const int LoopSlidePce[8] = {
//     wB, wR, wQ, 0, bB, bR, bQ, 0
// };