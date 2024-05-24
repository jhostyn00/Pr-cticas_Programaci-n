#include <iostream>
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
        subtotal += precio[i];

        cout << "Ingrese cantidad del producto " << i + 1 << ": ";
        cin >> numero[i];
    }
    cout << "Producto" << "\t"<<"Precio"<<"\t"<<"Cantidad"<< endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout <<nombre[i]<<"\t"<< precio[i] <<"\t"<< numero[i] << endl;
    }
    
    igv = (subtotal/100)*18;
    total = subtotal + igv;
    cout << "SubTotal: " << subtotal << endl;
    cout << "IGV: " << igv << endl;
    cout << "Total: " << total << endl;
    

 

    return 0;
}