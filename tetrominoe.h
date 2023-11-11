#include <iostream>
#include <vector>
#include "cell.h"

class Tetrominoe {
    private:
        std::vector<std::vector<Cell>> cells;
        int colour;

    public:
        Tetrominoe(int colour) : colour {colour} {}
        ~Tetrominoe();
}