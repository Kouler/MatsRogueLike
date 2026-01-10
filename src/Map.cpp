#include "Map.h"

Map::~Map() {
    for (auto& row : matrix) {
        for (auto& unitPtr : row) {
            delete unitPtr;
        }
    }
}