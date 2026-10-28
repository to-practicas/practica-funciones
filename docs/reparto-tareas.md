```markdown
# Reparto de tareas (sorteo aleatorio)


| Integrante | Paquete | Entregable |
|---|---|---|
| Diego | A. Base del repositorio | README, .gitignore, CMakeLists.txt, estructura, este documento |
| Gerson | B. Practica 5 (nucleo) | `Vector2D.h`, `Vector2D.cpp` (constructores, getters, `mostrar`, `operator+`) |
| Jaime | C. Practica 5 (reto y cierre) | `operator==`, `practica05_vector2d/main.cpp`, `docs/explicacion-practica5.md` |
| Wilber | D. Sistema: clase base | `Descuento.h` (inline), `Producto.h`, `Producto.cpp` (const) |
| Cristhian | E. Sistema: operadores | `ProductoOperadores.cpp` (friend, `+`, `<<`) |
| Jhon | F. Sistema: lambda e integracion | `Inventario.h/.cpp`, `sistema_productos/main.cpp`, pruebas finales |


## Revision cruzada de Pull Requests


- Diego revisa a Gerson
- Gerson revisa a Jaime
- Jaime revisa a Wilber
- Wilber revisa a Cristhian
- Cristhian revisa a Jhon
- Jhon revisa a Diego


## Ramas


`feat/diego-setup`, `feat/gerson-vector2d`, `feat/jaime-igualdad`, `feat/wilber-producto`, `feat/cristhian-operadores`, `feat/jhon-inventario`.


## Orden recomendado de merge a main

1. Diego, 2. Gerson, 3. Wilber, 4. Jaime, 5. Cristhian, 6. Jhon.
```
