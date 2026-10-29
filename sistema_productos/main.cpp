
#include <iostream>
#include <limits>
#include <string>

#include "Descuento.h"
#include "Inventario.h"
#include "Producto.h"

using namespace std;

static void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

static void agregarProducto(Inventario& inv) {
    string nombre;
    double precio;
    int cantidad;

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Precio: ";
    cin >> precio;

    cout << "Cantidad: ";
    cin >> cantidad;

    if (cin.fail() || precio < 0 || cantidad < 0) {
        cout << "Datos invalidos." << endl;
        limpiarEntrada();
        return;
    }

    limpiarEntrada();
    inv.agregar(Producto(nombre, precio, cantidad));
    cout << "Producto agregado." << endl;
}

static bool elegirDos(const Inventario& inv, size_t& i, size_t& j) {
    if (inv.tamano() < 2) {
        cout << "Se necesitan al menos 2 productos." << endl;
        return false;
    }

    inv.listar();

    cout << "Numero del primer producto: ";
    cin >> i;

    cout << "Numero del segundo producto: ";
    cin >> j;

    if (cin.fail() || i < 1 || j < 1 ||
        i > inv.tamano() || j > inv.tamano()) {
        cout << "Seleccion invalida." << endl;
        limpiarEntrada();
        return false;
    }

    limpiarEntrada();
    --i;
    --j;
    return true;
}

int main() {
    Inventario inv;

    // Datos de ejemplo
    inv.agregar(Producto("Laptop", 2500.0, 5));
    inv.agregar(Producto("Mouse", 45.5, 30));
    inv.agregar(Producto("Teclado", 120.0, 15));
    inv.agregar(Producto("Monitor", 800.0, 8));

    int opcion = -1;

    do {
        cout << "\n===== SISTEMA DE PRODUCTOS =====\n"
             << "1. Listar productos\n"
             << "2. Agregar producto\n"
             << "3. Filtrar por rango de precio (lambda)\n"
             << "4. Aplicar descuento (inline)\n"
             << "5. Comparar precios de dos productos (friend)\n"
             << "6. Combinar dos productos (operator+)\n"
             << "7. Valor total del inventario\n"
             << "0. Salir\n"
             << "Opcion: ";

        if (!(cin >> opcion)) {
            if (cin.eof()) {
                break;
            }

            limpiarEntrada();
            cout << "Entrada invalida." << endl;
            opcion = -1;
            continue;
        }

        limpiarEntrada();

        switch (opcion) {
            case 1:
                inv.listar();
                break;

            case 2:
                agregarProducto(inv);
                break;

            case 3: {
                double min, max;

                cout << "Precio minimo: ";
                cin >> min;

                cout << "Precio maximo: ";
                cin >> max;

                if (cin.fail()) {
                    cout << "Entrada invalida." << endl;
                    limpiarEntrada();
                    break;
                }

                limpiarEntrada();

                if (min > max) {
                    cout << "El minimo no puede superar al maximo."
                         << endl;
                    break;
                }

                auto res = inv.filtrarPorPrecio(min, max);

                cout << "Resultados (" << res.size() << "):" << endl;
                for (const auto& p : res) {
                    cout << "  " << p << endl;
                }
                break;
            }

            case 4: {
                if (inv.vacio()) {
                    cout << "Inventario vacio." << endl;
                    break;
                }

                inv.listar();

                size_t i;
                cout << "Numero de producto: ";
                cin >> i;

                if (cin.fail() || i < 1 || i > inv.tamano()) {
                    cout << "Seleccion invalida." << endl;
                    limpiarEntrada();
                    break;
                }

                double pct;
                cout << "Porcentaje de descuento (0-100): ";
                cin >> pct;

                if (cin.fail()) {
                    cout << "Entrada invalida." << endl;
                    limpiarEntrada();
                    break;
                }

                limpiarEntrada();

                if (pct < 0 || pct > 100) {
                    cout << "Porcentaje invalido." << endl;
                    break;
                }

                const Producto& p = inv.obtener(i - 1);

                cout << p.getNombre() << ": S/ " << p.getPrecio()
                     << " -> S/ "
                     << precioConDescuento(p.getPrecio(), pct)
                     << " (ahorro S/ "
                     << calcularDescuento(p.getPrecio(), pct)
                     << ")" << endl;
                break;
            }

            case 5: {
                size_t i, j;

                if (!elegirDos(inv, i, j)) {
                    break;
                }

                const Producto& a = inv.obtener(i);
                const Producto& b = inv.obtener(j);

                if (compararPrecios(a, b)) {
                    cout << a.getNombre() << " es mas caro que "
                         << b.getNombre() << endl;
                } else if (compararPrecios(b, a)) {
                    cout << b.getNombre() << " es mas caro que "
                         << a.getNombre() << endl;
                } else {
                    cout << "Ambos cuestan lo mismo." << endl;
                }
                break;
            }

            case 6: {
                size_t i, j;

                if (!elegirDos(inv, i, j)) {
                    break;
                }

                Producto combo = inv.obtener(i) + inv.obtener(j);
                cout << "Combo: " << combo << endl;
                break;
            }

            case 7:
                cout << "Valor total del inventario: S/ "
                     << inv.valorTotal() << endl;
                break;

            case 0:
                cout << "Hasta luego." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 0);

    return 0;
}
