#include "Producto.h"

#include <utility>

Producto::Producto(std::string nombre, double precio, int cantidad)
    : nombre(std::move(nombre)), precio(precio), cantidad(cantidad) {}

std::string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }
int Producto::getCantidad() const { return cantidad; }