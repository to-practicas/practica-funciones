# Sistema de Productos: explicacion por seccion

## Funcion inline (Wilber)

`Descuento.h` define `calcularDescuento` y `precioConDescuento` como `inline`. Son funciones de una sola linea, ideales para que el compilador las expanda en el punto de llamada y se evite el costo de la llamada.

## Clase Producto y funciones const (Wilber)

`Producto` tiene atributos privados (`nombre`, `precio`, `cantidad`). Los getters y `mostrar()` son `const`: garantizan que solo leen el objeto. Los setters no son `const` y validan que los valores no sean negativos.
