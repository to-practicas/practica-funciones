// Autor: Cristhian
#include "Producto.h"

// Funcion friend: usa directamente los atributos privados
bool compararPrecios(const Producto& a, const Producto& b) {
    return a.precio > b.precio;
}
