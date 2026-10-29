# Pruebas de integración del Sistema de Productos

**Responsable:** Jhon

| # | Opción | Entrada | Resultado esperado | Resultado obtenido |
|---|---|---|---|---|
| 1 | 3 (filtro, lambda) | Mínimo: 40, máximo: 900 | Mouse, Teclado y Monitor (3 resultados) | Correcto: se muestran los 3 productos esperados. |
| 2 | 4 (descuento, inline) | Producto 1, descuento del 10 % | Laptop: S/ 2500 → S/ 2250 (ahorro S/ 250) | Correcto: se calcula el precio final y el ahorro esperados. |
| 3 | 5 (friend) | Productos 1 y 2 | Laptop es más caro que Mouse | Correcto: se identifica a Laptop como el producto más caro. |
| 4 | 6 (operator+) | Productos 1 y 2 | Combo: [Laptop + Mouse \| S/ 2545.50 \| Cant: 35] | Correcto: se combinan los nombres, precios y cantidades. |
| 5 | 7 (valor total) | Inventario inicial | S/ 22065 | Correcto: el total inicial coincide con el esperado. |
| 6 | Entrada inválida | Letra `x` en lugar de un número, seguida de `0` | El menú vuelve a mostrarse y permite salir sin bloquearse | Correcto: muestra «Entrada invalida.», vuelve al menú y sale con «Hasta luego.». |