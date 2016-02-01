#include <cmath>
#include "Point.h"

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;
}

double Point::distanceTo(Point& a) {
    double xd, yd, zd;

    xd = this->x - a.getX();
    yd = this->y - a.getY();
    zd = this->z - a.getZ();

    return sqrt(pow(xd, 2) + pow(yd, 2) + pow(zd, 2));
}
