// Autor: Cristhian
#include <iomanip>

#include "Producto.h"

// Funcion friend: usa directamente los atributos privados
bool compararPrecios(const Producto& a, const Producto& b) {
    return a.precio > b.precio;
}

// Combina dos productos en un "combo"
Producto Producto::operator+(const Producto& otro) const {
    return Producto(nombre + " + " + otro.nombre,
                    precio + otro.precio,
                    cantidad + otro.cantidad);
}

// Formato: [Nombre | S/ 0.00 | Cant: n]
std::ostream& operator<<(std::ostream& os, const Producto& p) {
    os << "[" << p.nombre << " | S/ " << std::fixed << std::setprecision(2)
       << p.precio << " | Cant: " << p.cantidad << "]";
    return os;
}
