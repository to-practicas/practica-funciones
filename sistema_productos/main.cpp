
#include <iostream>
#include <limits>
#include <string>

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
             << "0. Salir\n"
             << "Opcion: ";

        if (!(cin >> opcion)) {
            if (cin.eof()) {
                break;
            }

            limpiarEntrada();
            cout << "Entrada invalida." << endl;
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

            case 0:
                cout << "Hasta luego." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 0);

    return 0;
}