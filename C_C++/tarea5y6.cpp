#include <iostream>
using namespace std;

struct ubicacion {
    char direccion[50];
    char distrito[35];
};

struct empleados {
    char nombre[25];
    char telefono[10];
    ubicacion dirempleados;
};

empleados e1 = {"Susana", "999-477", {"Jr. Aguarico 330", "Breña"}};
empleados e2 = {"Lola", "995-451", {"Jr. Agustino 222", "Surquillo"}};
empleados e3 = {"Susana", "988-451", {"Jr. Susana 110", "Surco"}};
empleados e4 = {"Gabriel", "987-651", {"Jr. Arcangel 353", "Miraflores"}};
empleados e5 = {"Alberto", "991-357", {"Jr. Albertino 200", "Chosica"}};

struct cliente {
    char nombre[25];
    char telefono[10];
    char cargo[20];
    ubicacion dircliente;
};
cliente c1, c2, c3;

int main() {
    cout << "-----------------------------DATOS DEL EMPLEADO-----------------------\n";
    cout << "\n" << "EMPLEADO 1:\n";
    cout << "\n" << "Nombre : " << e1.nombre << "\t" << " Direccion : " << e1.dirempleados.direccion << "\n" << " Distrito : " << e1.dirempleados.distrito << "\t" << " Telefono : " << e1.telefono << "\n";
    cout << "\n" << "EMPLEADO 2:\n";
    cout << "\n" << "Nombre : " << e2.nombre << "\t" << " Direccion : " << e2.dirempleados.direccion << "\n" << " Distrito : " << e2.dirempleados.distrito << "\t" << " Telefono : " << e2.telefono << "\n";
    cout << "\n" << "EMPLEADO 3:\n";
    cout << "\n" << "Nombre : " << e3.nombre << "\t" << " Direccion : " << e3.dirempleados.direccion << "\n" << " Distrito : " << e3.dirempleados.distrito << "\t" << " Telefono : " << e3.telefono << "\n";
    cout << "\n" << "EMPLEADO 4:\n";
    cout << "\n" << "Nombre : " << e4.nombre << "\t" << " Direccion : " << e4.dirempleados.direccion << "\n" << " Distrito : " << e4.dirempleados.distrito << "\t" << " Telefono : " << e4.telefono << "\n";
    cout << "\n" << "EMPLEADO 5:\n";
    cout << "\n" << "Nombre : " << e5.nombre << "\t" << " Direccion : " << e5.dirempleados.direccion << "\n" << " Distrito : " << e5.dirempleados.distrito << "\t" << " Telefono : " << e5.telefono << "\n";
    cout << "\n\n";
    cout << "-----------------------------DATOS DEL CLIENTE-----------------------\n";
    cout << "Nombre del cliente 1:\n";
    cin >> c1.nombre;
    cout << "Direccion del cliente 1:\n";
    cin >> c1.dircliente.direccion;
    cout << "Telefono del cliente 1:\n";
    cin >> c1.telefono;
    cout << "Cargo del cliente 1:\n";
    cin >> c1.cargo;

    cout << "Nombre del cliente 2:\n";
    cin >> c2.nombre;
    cout << "Direccion del cliente 2:\n";
    cin >> c2.dircliente.direccion;
    cout << "Telefono del cliente 2:\n";
    cin >> c2.telefono;
    cout << "Cargo del cliente 2:\n";
    cin >> c2.cargo;

    cout << "Nombre del cliente 3:\n";
    cin >> c3.nombre;
    cout << "Direccion del cliente 3:\n";
    cin >> c3.dircliente.direccion;
    cout << "Telefono del cliente 3:\n";
    cin >> c3.telefono;
    cout << "Cargo del cliente 3:\n";
    cin >> c3.cargo;

    cout << "La informacion de los clientes ingresados son: \n";
    cout << "CLIENTE 1" << "Nombre : " << c1.nombre << "\t" << " Direccion : " << c1.dircliente.direccion << "\n" << " Telefono : " << c1.telefono << "\t" << " Cargo : " << c1.cargo << "\n";
    cout << "CLIENTE 2" << "Nombre : " << c2.nombre << "\t" << " Direccion : " << c2.dircliente.direccion << "\n" << " Telefono : " << c2.telefono << "\t" << " Cargo : " << c2.cargo << "\n";
    cout << "CLIENTE 3" << "Nombre : " << c3.nombre << "\t" << " Direccion : " << c3.dircliente.direccion << "\n" << " Telefono : " << c3.telefono << "\t" << " Cargo : " << c3.cargo << "\n";
    return 0;
}
