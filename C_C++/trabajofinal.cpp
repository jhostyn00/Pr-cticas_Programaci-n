#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int stock;
};

vector<Producto> inventario[4]; // 0: Electrodomésticos, 1: Ropa, 2: Deportes, 3: Muebles
vector<string> ventas;

void IngresarProducto(int deptIndex);
void ModificarProducto(int deptIndex);
void EliminarProducto(int deptIndex);
void ProcesarVenta(int deptIndex);
void MostrarProductos();
void MostrarReporteVentas();

int main() {
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 10; ++j)
            IngresarProducto(i);

    int opcion;
    do {
        cout << "\nMenu Principal\n1. Ingresar producto\n2. Modificar producto\n3. Eliminar producto\n4. Realizar venta\n5. Mostrar productos\n6. Mostrar reporte de ventas\n7. Salir\nSeleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: IngresarProducto(0); break;
            case 2: ModificarProducto(0); break;
            case 3: EliminarProducto(0); break;
            case 4: ProcesarVenta(0); break;
            case 5: MostrarProductos(); break;
            case 6: MostrarReporteVentas(); break;
        }
    } while (opcion != 7);

    return 0;
}

void IngresarProducto(int deptIndex) {
    Producto p;
    cout << "Ingrese nombre, precio y stock del producto: ";
    cin >> p.nombre >> p.precio >> p.stock;
    inventario[deptIndex].push_back(p);
}

void ModificarProducto(int deptIndex) {
    string nombre;
    cout << "Ingrese nombre del producto a modificar: ";
    cin >> nombre;

    for (Producto& p : inventario[deptIndex]) {
        if (p.nombre == nombre) {
            cout << "Ingrese nuevo nombre, precio y stock del producto: ";
            cin >> p.nombre >> p.precio >> p.stock;
            return;
        }
    }
    cout << "Producto no encontrado.\n";
}

void EliminarProducto(int deptIndex) {
    string nombre;
    cout << "Ingrese nombre del producto a eliminar: ";
    cin >> nombre;

    for (auto it = inventario[deptIndex].begin(); it != inventario[deptIndex].end(); ++it) {
        if (it->nombre == nombre) {
            inventario[deptIndex].erase(it);
            cout << "Producto eliminado.\n";
            return;
        }
    }
    cout << "Producto no encontrado.\n";
}

void ProcesarVenta(int deptIndex) {
    string nombre;
    int cantidad;
    cout << "Ingrese nombre del producto a vender: ";
    cin >> nombre;
    cout << "Ingrese cantidad a vender: ";
    cin >> cantidad;

    for (Producto& p : inventario[deptIndex]) {
        if (p.nombre == nombre) {
            if (p.stock >= cantidad) {
                p.stock -= cantidad;
                ventas.push_back("Venta: " + nombre + " - Cantidad: " + to_string(cantidad) + " - Total: " + to_string(cantidad * p.precio));
                cout << "Venta realizada.\n";
                return;
            } else {
                cout << "Stock insuficiente.\n";
                return;
            }
        }
    }
    cout << "Producto no encontrado.\n";
}

void MostrarProductos() {
    string departamentos[4] = {"Electrodomésticos", "Ropa", "Deportes", "Muebles"};
    for (int i = 0; i < 4; ++i) {
        cout << "\nProductos en " << departamentos[i] << ":\n";
        for (const Producto& p : inventario[i]) {
            cout << "Nombre: " << p.nombre << ", Precio: " << p.precio << ", Stock: " << p.stock << "\n";
        }
    }
}

void MostrarReporteVentas() {
    cout << "\nReporte de Ventas:\n";
    for (const string& venta : ventas) {
        cout << venta << "\n";
    }
}
