
#include "Inventario.h"

#include <iostream>

void Inventario::agregar(const Producto& p) {
    productos.push_back(p);
}

bool Inventario::vacio() const {
    return productos.empty();
}

std::size_t Inventario::tamano() const {
    return productos.size();
}

const Producto& Inventario::obtener(std::size_t indice) const {
    return productos.at(indice);
}

void Inventario::listar() const {
    if (productos.empty()) {
        std::cout << "(inventario vacio)" << std::endl;
        return;
    }

    std::size_t i = 1;

    for (const auto& p : productos) {
        std::cout << i++ << ". ";
        p.mostrar();
    }
}
