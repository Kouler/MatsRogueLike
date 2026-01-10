#ifndef KNIGHT_H
#define KNIGHT_H

#include "Entity.h"

class Knight : public Entity {
public:
    Knight() : Entity() {}
    Knight(int startX, int startY) : Entity(startX, startY, 100, 40) {}
    
    char getSymbol() const override {
        return 'K';
    }
};

#endif // KNIGHT_H