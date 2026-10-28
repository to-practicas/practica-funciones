````markdown
# POO - Funciones en C++ (Practica 5 + Sistema de Productos)


Repositorio grupal con dos entregables:


1. **Practica 5:** sobrecarga del operador `+` (y `==` como reto) en `Vector2D`.
2. **Sistema de Productos:** integra `inline`, `friend`, `const`, `lambda` y sobrecarga de operadores.


## Integrantes


Wilber, Jhon, Gerson, Cristhian, Diego y Jaime. Ver `docs/reparto-tareas.md`.


## Compilacion con CMake


```bash
cmake -S . -B build
cmake --build build
./build/vector2d
./build/sistema_productos
```

## Compilacion sin CMake


```bash
g++ -std=c++17 -Wall -Wextra -Ipractica05_vector2d/include \
    practica05_vector2d/main.cpp practica05_vector2d/src/Vector2D.cpp -o vector2d


g++ -std=c++17 -Wall -Wextra -Isistema_productos/include \
    sistema_productos/main.cpp sistema_productos/src/*.cpp -o sistema
```


## Estructura


```
practica05_vector2d/   Practica 5 (Vector2D)
sistema_productos/     Sistema de Productos
docs/                  Reparto de tareas y explicaciones
```



