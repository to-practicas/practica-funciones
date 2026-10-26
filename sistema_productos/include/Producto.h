#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

class Producto {
private:
    std::string nombre;
    double precio;
    int cantidad;

public:
    Producto(std::string nombre = "", double precio = 0.0, int cantidad = 0);

    // Funciones constantes: leen datos sin modificar el objeto (Wilber)
    std::string getNombre() const;
    double getPrecio() const;
    int getCantidad() const;
    void mostrar() const;

    // Setters (no const: modifican el objeto)
    void setPrecio(double nuevoPrecio);
    void setCantidad(int nuevaCantidad);

    // --- Cristhian ---
    // Funcion amiga: accede a atributos privados. Devuelve true si a es mas caro que b.
    friend bool compararPrecios(const Producto& a, const Producto& b);

    // Combina productos: suma precios y cantidades, une los nombres
    Producto operator+(const Producto& otro) const;

    // Reto: salida legible con cout
    friend std::ostream& operator<<(std::ostream& os, const Producto& p);
};

#endif