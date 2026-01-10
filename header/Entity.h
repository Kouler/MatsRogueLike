#ifndef ENTITY_H
#define ENTITY_H

#include "Unit.h"

class Entity : public Unit {
private:
    int health;
    int damage;

public:
    Entity() : Unit(), health(0), damage(0) {}
    Entity(int startX, int startY, int _Health, int _Damage) : Unit(startX, startY), health(_Health), damage(_Damage) {}

    int getHealth() const;
    int getDamage() const;
    void takeDamage(int dmg);

    bool isAlive() const;
    bool isDead() const;
};
#endif // ENTITY_H