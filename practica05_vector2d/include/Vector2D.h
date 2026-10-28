
// Autor: Gerson
#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
private:
    double x;
    double y;

public:
    // Constructor con valores por defecto
    Vector2D(double x = 0.0, double y = 0.0);

    // Getters (const: no modifican el objeto)
    double getX() const;
    double getY() const;

    // Muestra el vector en pantalla: (x, y)
    void mostrar() const;

    // Practica 5: suma de dos vectores
    Vector2D operator+(const Vector2D& otro) const;

    // Reto adicional (Jaime): comparacion de vectores
    bool operator==(const Vector2D& otro) const;
};

#endif
