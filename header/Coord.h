#ifndef COORD_H
#define COORD_H

struct Coord {
    int x;
    int y;

    Coord(int x_val, int y_val) : x(x_val), y(y_val) {}
};

#endif // COORD_H