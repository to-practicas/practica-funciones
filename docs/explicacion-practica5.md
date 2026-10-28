# Practica 5: Sobrecarga del operador +

**Autor de la documentacion:** Jaime

## Objetivo

Redefinir el operador `+` para que dos objetos `Vector2D` puedan sumarse con la sintaxis natural `a + b`.

## Implementacion

```cpp
Vector2D Vector2D::operator+(const Vector2D& otro) const {
    return Vector2D(x + otro.x, y + otro.y);
}
```

- Se declara como **funcion miembro**: el operando izquierdo es `this` y el derecho es `otro`.
- Recibe `otro` por **referencia constante** para evitar copias y no modificarlo.
- Es `const` porque no altera al vector que la invoca.
- Devuelve un **nuevo** `Vector2D`; los operandos originales no cambian.
- Al devolver un `Vector2D`, permite encadenar: `a + b + c`.

## Reto: operator==

```cpp
bool Vector2D::operator==(const Vector2D& otro) const {
    const double eps = 1e-9;
    return std::fabs(x - otro.x) < eps &&
           std::fabs(y - otro.y) < eps;
}
```

Como los componentes son `double`, se comparan con una tolerancia pequeña en lugar de exigir igualdad exacta.

## Casos de prueba (en `main.cpp`)

| Caso | Resultado esperado |
|---|---|
| (1,2) + (3,4) | (4,6) |
| (1,2) + (3,4) + (10,10) | (14,16) |
| (1,2) == (3,4) | No |
| (a+b) == (b+a) | Si (conmutativa) |
| Dos vectores con las mismas componentes | Son iguales |

## Compilar y ejecutar

```bash
g++ -std=c++17 -Wall -Wextra -Ipractica05_vector2d/include \
    practica05_vector2d/main.cpp practica05_vector2d/src/Vector2D.cpp -o vector2d
./vector2d
```
