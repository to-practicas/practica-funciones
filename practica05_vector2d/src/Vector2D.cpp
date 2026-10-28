
#include "Vector2D.h"

#include <cmath>
#include <iostream>

// ---------------- Gerson ----------------
Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

double Vector2D::getX() const { return x; }
double Vector2D::getY() const { return y; }


void Vector2D::mostrar() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Vector2D Vector2D::operator+(const Vector2D& otro) const {
    return Vector2D(x + otro.x, y + otro.y);
}

// ---------------- Jaime (reto) ----------------
bool Vector2D::operator==(const Vector2D& otro) const {
    const double eps = 1e-9;
    return std::fabs(x - otro.x) < eps &&
           std::fabs(y - otro.y) < eps;
}
