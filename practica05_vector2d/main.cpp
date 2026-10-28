// Autor: Jaime
#include <iostream>

#include "Vector2D.h"

using namespace std;

int main() {
    cout << "=== Practica 5: Sobrecarga del operador + ===" << endl;

    // Casos de prueba fijos
    Vector2D a(1, 2), b(3, 4);
    Vector2D c = a + b;

    cout << "\n[Prueba] a = ";
    a.mostrar();
    cout << "[Prueba] b = ";
    b.mostrar();
    cout << "[Prueba] a + b = ";
    c.mostrar();

    Vector2D d = a + b + Vector2D(10, 10);
    cout << "[Prueba] a + b + (10, 10) = ";
    d.mostrar();

    return 0;
}
