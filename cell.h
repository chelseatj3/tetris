class Cell {
    private:
        int colour;
        int row;
        int col;
    public:
        Cell(int colour, int row, int, col) : colour {colour}, row {row}, col {col} {}
        void setColour(int newColour);
        ~Cell();
}