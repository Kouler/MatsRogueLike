#ifndef OBJECT_H
#define OBJECT_H

#include "Unit.h"

class Object : public Unit {

public:
    Object() : Unit() {}
    Object(int startX, int startY) : Unit(startX, startY) {}
};

#endif // OBJECT_H
