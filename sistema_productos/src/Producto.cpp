#include "Producto.h"

#include <utility>
#include <iomanip>

Producto::Producto(std::string nombre, double precio, int cantidad)
    : nombre(std::move(nombre)), precio(precio), cantidad(cantidad) {}

std::string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }
int Producto::getCantidad() const { return cantidad; }

void Producto::mostrar() const {
    std::cout << std::left << std::setw(20) << nombre
              << " S/ " << std::fixed << std::setprecision(2) << std::setw(10) << precio
              << " Cant: " << cantidad << std::endl;
}