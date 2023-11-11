#include <iostream>
#include <vector>
#include "cell.h"

class Grid {
    private:
        std::vector<std::vector<Cell>> grid;
        int rows;
        int cols;
    public:
        Grid(int rows, int cols) : rows {rows}, cols {cols} {}
        void clearGrid();
        void tick();
        ~Grid();
        // something to initialize the grid perhaps idk
}