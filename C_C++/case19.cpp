#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int subtotal = 0, igv, total, cantidad;
    cout << "Ingrese cantidad de productos: ";
    cin >> cantidad;
    int precio[cantidad];
    string nombre[cantidad];
    int numero[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese nombre del producto " << i + 1 << ": ";
        cin >> nombre[i];

        cout << "Ingrese precio del producto " << i + 1 << ": ";
        cin >> precio[i];

        cout << "Ingrese cantidad del producto " << i + 1 << ": ";
        cin >> numero[i];
        cout << endl;

        subtotal += precio[i] * numero[i];
    }

    cout << left << setw(15) << "Producto" << setw(10) << "Precio" << setw(10) << "Cantidad" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << left << setw(15) << nombre[i] << setw(10) << precio[i] << setw(10) << numero[i] << endl;
    }

    igv = (subtotal * 18) / 100;
    total = subtotal + igv;

    cout << "SubTotal: " << subtotal << endl;
    cout << "IGV: " << igv << endl;
    cout << "Total: " << total << endl;

    return 0;
}
