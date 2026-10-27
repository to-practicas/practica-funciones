// Autor: Cristhian
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
