#ifndef UNIT_H
#define UNIT_H

#include "Coord.h"

class Unit {
private:
    int x;
    int y;
public:
    Unit();
    Unit(int startX, int startY);

    Coord getCoord() const;
    int getX() const;
    int getY() const;
    virtual char getSymbol() const = 0;

    void setCoord(const Coord& newCoord);
    void setX(int newX);
    void setY(int newY);
};

#endif // UNIT_H