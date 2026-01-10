#ifndef MAP
#define MAP

#include <vector>

#include "Unit.h"

class Map {
private:
    std::vector<std::vector<Unit*>> matrix;

public:
    Map();
    ~Map();

    
    std::vector<std::vector<Unit*>> getMatrix() const;
    
    
};


#endif // MAP