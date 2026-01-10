#ifndef WALL_H
#define WALL_H

#include "Object.h"

class Wall : public Object {
public:
    Wall() : Object() {}
    Wall(int startX, int startY) : Object(startX, startY) {}

    char getSymbol() const override {
        return '#';
    }
};
#endif // WALL_H