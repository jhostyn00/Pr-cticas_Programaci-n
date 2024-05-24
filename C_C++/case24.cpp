
#include <iostream>
using namespace std;

int main() {
    int lista[] = {1, 2, 3, 4, 5}, valor, pos = 0;
    bool encontrado = false;
    regresa:
    cout << "\nIngresa un numero: ";
    cin >> valor;
    while (encontrado == false && pos < 5) {
        if (valor == lista[pos]) {
            encontrado = true;
            break;
        }
        pos++;
    }
    if (encontrado == false) {
        cout << "\nEl numero que ingresaste no esta en la lista, intenta de nuevo: \n";
        pos = 0;
        goto regresa;
    } else {
        cout << "\nEl numero " << valor << " se encuentra en la lista\n";
    }
    return 0;
}