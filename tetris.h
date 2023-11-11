#include <iostream>
#include <vector>
#include "cell.h"

class Tetris {
    private:
        int score;
        int level;
        String nextPiece;

    public:
        Tetris(int score, int level, String nextPiece) : score {score}, level {level}, nextPieces {nextPieces} {}
        ~Tetris();
}