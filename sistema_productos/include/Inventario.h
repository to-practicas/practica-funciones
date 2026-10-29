
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <cstddef>

#include "Producto.h"

class Inventario {
private:
    std::vector<Producto> productos;

public:
    void agregar(const Producto& p);
    void listar() const;
    bool vacio() const;

    // Filtra productos con precio en [min, max] usando una lambda
    std::vector<Producto> filtrarPorPrecio(double min, double max) const;

    // Devuelve el valor total del inventario (precio * cantidad)
    double valorTotal() const;

    // Acceso por indice para combinar/comparar desde main
    const Producto& obtener(std::size_t indice) const;
    std::size_t tamano() const;
};

#endif
