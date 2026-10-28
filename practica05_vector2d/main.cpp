// Autor: Jaime
#include <iostream>
#include <string>

#include "Vector2D.h"

using namespace std;

static Vector2D leerVector(const string& nombre) {
    double x, y;

    cout << "Vector " << nombre << " - componente x: ";
    cin >> x;

    cout << "Vector " << nombre << " - componente y: ";
    cin >> y;

    return Vector2D(x, y);
}

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

    cout << "[Prueba] a == b ? "
         << (a == b ? "Si" : "No") << endl;

    cout << "[Prueba] (a + b) == (b + a) ? "
         << ((a + b) == (b + a) ? "Si" : "No") << endl;

    // Entrada del usuario
    cout << "\n--- Ingrese sus propios vectores ---" << endl;

    Vector2D v1 = leerVector("1");
    Vector2D v2 = leerVector("2");

    Vector2D suma = v1 + v2;

    cout << "\nv1 = ";
    v1.mostrar();
    cout << "v2 = ";
    v2.mostrar();
    cout << "v1 + v2 = ";
    suma.mostrar();

    cout << "v1 == v2 ? "
         << (v1 == v2 ? "Son iguales" : "Son diferentes")
         << endl;

    return 0;
}
