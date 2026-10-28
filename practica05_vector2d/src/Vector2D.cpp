
#include "Vector2D.h"

#include <iostream>

// ---------------- Gerson ----------------
Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

double Vector2D::getX() const { return x; }
double Vector2D::getY() const { return y; }
