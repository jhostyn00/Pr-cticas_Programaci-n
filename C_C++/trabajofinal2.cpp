#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Producto {
    string nombre;
    double precio;
    int stock;
};

struct Departamento {
    string nombre;
    vector<Producto> productos;

    Departamento(string nombre) : nombre(nombre), productos() {}

    void mostrarProductos() {
        for (auto& p : productos)
            cout << p.nombre << " - Precio: S/" << p.precio << " - Stock: " << p.stock << endl;
    }

    void agregarProducto(string nombre, double precio, int stock) {
        productos.push_back({nombre, precio, stock});
    }

    bool buscarProducto(string nombre, Producto& encontrado) {
        for (auto& p : productos)
            if (p.nombre == nombre) {
                encontrado = p;
                return true;
            }
        return false;
    }

    void modificarProducto(string nombre, double precio, int stock) {
        for (auto& p : productos)
            if (p.nombre == nombre) {
                p.precio = precio;
                p.stock = stock;
                break;
            }
    }

    void eliminarProducto(string nombre) {
        for (auto it = productos.begin(); it != productos.end(); ++it)
            if (it->nombre == nombre) {
                productos.erase(it);
                break;
            }
    }

    void procesarVenta(string nombre, int cantidad) {
        for (auto& p : productos)
            if (p.nombre == nombre) {
                if (p.stock >= cantidad) {
                    p.stock -= cantidad;
                    cout << "Venta realizada: " << cantidad << " unidades de " << nombre << " vendidas." << endl;
                } else {
                    cout << "Stock insuficiente para " << nombre << ". Disponible: " << p.stock << endl;
                }
                break;
            }
    }
};

int main() {
    vector<Departamento> departamentos = {
        Departamento("Electrodomésticos"), 
        Departamento("Ropa"), 
        Departamento("Deportes"), 
        Departamento("Muebles")
    };

    departamentos[0].agregarProducto("Refrigeradora", 1500, 10);
    departamentos[0].agregarProducto("Lavadora", 1200, 8);
    departamentos[1].agregarProducto("Camiseta", 50, 100);
    departamentos[1].agregarProducto("Jeans", 120, 60);
    departamentos[2].agregarProducto("Bicicleta", 800, 15);
    departamentos[2].agregarProducto("Balón de Fútbol", 30, 50);
    departamentos[3].agregarProducto("Sofá", 2000, 5);
    departamentos[3].agregarProducto("Mesa", 850, 7);

    while (true) {
        cout << "\n--- Sistema de Venta ---\n1. Mostrar productos\n2. Agregar producto\n3. Modificar producto\n4. Eliminar producto\n5. Realizar venta\n6. Salir\nSeleccione una opción: ";
        int opcion; cin >> opcion; cin.ignore();

        if (opcion == 6) break;

        string depto, nombre; double precio; int stock, cantidad;
        cout << "Ingrese el departamento: "; getline(cin, depto);

        bool departamentoEncontrado = false;
        for (auto& d : departamentos) {
            if (d.nombre == depto) {
                departamentoEncontrado = true;
                switch (opcion) {
                    case 1:
                        d.mostrarProductos();
                        break;
                    case 2:
                        cout << "Nombre del producto: "; getline(cin, nombre);
                        cout << "Precio del producto: "; cin >> precio;
                        cout << "Stock del producto: "; cin >> stock; cin.ignore();
                        d.agregarProducto(nombre, precio, stock);
                        break;
                    case 3:
                        cout << "Nombre del producto: "; getline(cin, nombre);
                        cout << "Nuevo precio: "; cin >> precio;
                        cout << "Nuevo stock: "; cin >> stock; cin.ignore();
                        d.modificarProducto(nombre, precio, stock);
                        break;
                    case 4:
                        cout << "Nombre del producto: "; getline(cin, nombre);
                        d.eliminarProducto(nombre);
                        break;
                    case 5:
                        cout << "Nombre del producto: "; getline(cin, nombre);
                        cout << "Cantidad a vender: "; cin >> cantidad; cin.ignore();
                        d.procesarVenta(nombre, cantidad);
                        break;
                    default:
                        cout << "Opción no válida. Intente nuevamente.\n";
                }
                break;
            }
        }
        if (!departamentoEncontrado) {
            cout << "Departamento no encontrado.\n";
        }
    }

    return 0;
}
