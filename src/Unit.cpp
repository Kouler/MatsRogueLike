#include "Unit.h"

Unit::Unit() : x(0), y(0) {}
Unit::Unit(int startX, int startY) : x(startX), y(startY) {}

Coord Unit::getCoord() const { return Coord(x, y); }

int Unit::getX() const { return x; }

int Unit::getY() const { return y; }


void Unit::setCoord(const Coord& newCoord) {
    x = newCoord.x;
    y = newCoord.y;
}

void Unit::setX(int newX) { x = newX; }
void Unit::setY(int newY) { y = newY; }


