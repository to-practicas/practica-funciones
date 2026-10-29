
#include "Inventario.h"

#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

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

std::vector<Producto> Inventario::filtrarPorPrecio(
    double min, double max) const {

    std::vector<Producto> resultado;

    // Lambda que captura min y max por valor
    auto enRango = [min, max](const Producto& p) {
        return p.getPrecio() >= min &&
               p.getPrecio() <= max;
    };

    std::copy_if(
        productos.begin(),
        productos.end(),
        std::back_inserter(resultado),
        enRango
    );

    return resultado;
}

double Inventario::valorTotal() const {
    return std::accumulate(
        productos.begin(),
        productos.end(),
        0.0,
        [](double acc, const Producto& p) {
            return acc + p.getPrecio() * p.getCantidad();
        }
    );
}
