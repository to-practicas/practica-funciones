# Sistema de Productos: explicacion por seccion

## Funcion inline (Wilber)

`Descuento.h` define `calcularDescuento` y `precioConDescuento` como `inline`. Son funciones de una sola linea, ideales para que el compilador las expanda en el punto de llamada y se evite el costo de la llamada.

## Clase Producto y funciones const (Wilber)

`Producto` tiene atributos privados (`nombre`, `precio`, `cantidad`). Los getters y `mostrar()` son `const`: garantizan que solo leen el objeto. Los setters no son `const` y validan que los valores no sean negativos.

## Friend y operadores (Cristhian)

- `compararPrecios(a, b)` es `friend`: accede directo a `precio` sin pasar por el getter. Devuelve `true` si `a` es mas caro que `b`.
- `operator+` combina dos productos en un combo: concatena nombres, suma precios y cantidades.
- `operator<<` (reto) permite `cout << producto` con formato `[Nombre | S/ 0.00 | Cant: n]`. Es `friend` porque necesita acceso a los atributos privados y su operando izquierdo es `ostream`, no `Producto`.

## Lambda (Jhon)

En `sistema_productos/src/Inventario.cpp` se utilizan funciones lambda para implementar operaciones sobre el inventario:

- **`filtrarPorPrecio`** utiliza `std::copy_if` y una lambda que captura `min` y `max` por valor. La lambda comprueba si el precio de cada producto está dentro del rango indicado, incluidos sus límites.
- **`valorTotal`** utiliza `std::accumulate` y una lambda que suma el precio multiplicado por la cantidad de cada producto, obteniendo el valor total del inventario.

## Menú principal (Jhon)

El archivo `sistema_productos/main.cpp` contiene el menú principal que permite probar las funcionalidades del sistema:

- Listar y agregar productos al inventario.
- Filtrar productos por rango de precio utilizando lambdas.
- Aplicar descuentos mediante funciones `inline`.
- Comparar precios utilizando una función `friend`.
- Combinar dos productos mediante la sobrecarga del operador `+`.
- Calcular el valor total del inventario.

El menú también valida entradas y selecciones para manejar datos incorrectos y permitir que el usuario continúe utilizando el programa.