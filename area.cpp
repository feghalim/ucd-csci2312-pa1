//
// Created by Mario on 2/1/2016.
//

#include <cmath>
#include "Point.h"

double computeArea(Point &a, Point &b, Point &c) {
    double area, s, a2b, a2c, b2c;

    a2b = a.distanceTo(b);
    a2c = a.distanceTo(c);
    b2c = b.distanceTo(c);

    s = (a2b + b2c + a2c) / 2;

    area = sqrt(s * (s - a2b) * (s - a2c) * (s - b2c));

    return area;
}
