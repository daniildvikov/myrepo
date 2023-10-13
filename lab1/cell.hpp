#ifndef cell_hpp
#define cell_hpp
class Cell
{
private:
    bool cellPassible;
public:
    Cell(bool cellPasible = true);
    
    bool getCellPassible() const;

    void setCellPassible(bool cellPassible);
};

#endif