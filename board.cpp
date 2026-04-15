//
// Created by rbal7885 on 4/15/2026.
//

#include "board.h"

board::board()
{

}

void board::resetBoard()
{
    //
    lastMove =

    whitePawns = 0x000000000000ff00ULL;
    whiteRooks = 0x0000000000000081ULL;
    whiteKnights = 0x0000000000000042ULL;
    whiteBishops = 0x0000000000000024ULL;
    whiteQueens = 0x0000000000000008ULL;
    whiteKings = 0x0000000000000010ULL;

    blackPawns = 0x00ff000000000000ULL;
    blackRooks = 0x8100000000000000ULL;
    blackKnights = 0x4200000000000000ULL;
    blackBishops = 0x2400000000000000ULL;
    blackQueens = 0x0800000000000000ULL;
    blackKings = 0x1000000000000000ULL;


}