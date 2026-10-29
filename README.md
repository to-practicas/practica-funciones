# POO - Funciones en C++

Repositorio del trabajo en grupo de la práctica **PRAC05 – Funciones en C++**.

* **Práctica 5:** sobrecarga del operador `+` (y `==` como reto) en `Vector2D`.
* **Sistema de Productos:** integración de `inline`, `friend`, `const`, `lambda` y sobrecarga de operadores.

## Integrantes

- Wilber
- Jhon 
- Gerson
- Cristhian
- Diego 
- Jaime 

## Requisitos

* Compilador C++17 (g++ 8+, clang 7+ o MSVC 2019+)
* `make` **o** CMake 3.10+

## Compilar

Con CMake:

```bash
cmake -S . -B build
cmake --build build

```

Sin CMake (con g++):

```bash
# Práctica 5
g++ -std=c++17 -Wall -Wextra -Ipractica05_vector2d/include \
    practica05_vector2d/main.cpp practica05_vector2d/src/Vector2D.cpp -o build/vector2d

# Sistema de Productos
g++ -std=c++17 -Wall -Wextra -Isistema_productos/include \
    sistema_productos/main.cpp sistema_productos/src/*.cpp -o build/sistema_productos

```

## Ejecutar

```bash
./build/vector2d
./build/sistema_productos

```

En Windows con CMake/Visual Studio los ejecutables quedan en `build/Debug/` o `build/Release/`.

## Estructura

```
practica05_vector2d/    Práctica 5 (Vector2D)
sistema_productos/      Sistema de Productos (include/, src/)
docs/                   Reparto de tareas y explicaciones

```

## Convenciones de Git

* Ramas: `main` (estable), `develop` (integración) y una rama por tarea (`feat/...`).
* Mensajes: `feat:`, `fix:`, `docs:`, `test:`, `chore:`.
* Todo cambio entra por Pull Request revisado por otro integrante.
* Cada integrante usa su propio usuario de Git (`git config user.name` / `user.email`).
