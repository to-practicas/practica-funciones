#ifndef DESCUENTO_H
#define DESCUENTO_H

// Monto que se descuenta del precio (porcentaje entre 0 y 100)
inline double calcularDescuento(double precio, double porcentaje) {
    return precio * porcentaje / 100.0;
}

// Precio final luego de aplicar el descuento
inline double precioConDescuento(double precio, double porcentaje) {
    return precio - calcularDescuento(precio, porcentaje);
}

#endif
