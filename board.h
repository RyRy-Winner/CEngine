//
// Created by rbal7885 on 4/15/2026.
//
#include <stdint.h>;

#ifndef CENGINE_BOARD_H
#define CENGINE_BOARD_H



class board {
public:
    board();
    void resetBoard();

private:

    uint16_t lastMove;

    //Assuming white is on bottom
    uint64_t whitePawns, whiteRooks, whiteKnights, whiteBishops, whiteQueens, whiteKings;
    //Assuming black is on top
    uint64_t blackPawns, blackRooks, blackKnights, blackBishops, blackQueens, blackKings;

};



#endif //CENGINE_BOARD_H
