#include "Entity.h"

int Entity::getHealth() const {
    return health;
}
int Entity::getDamage() const {
    return damage;
}

void Entity::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) {
        health = 0;
    }
}

bool Entity::isAlive() const {
    return health > 0;
}
bool Entity::isDead() const {
    return health <= 0;
}