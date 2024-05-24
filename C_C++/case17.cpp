#include <iostream>
#include <string>
 
int main() {
    std::string matrizA[3][3], matrizB[3][3];
 
    // Solicitar al usuario que ingrese los datos de la matrizA
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Ingresar los datos de la matriz en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            std::getline(std::cin, matrizA[i][j]);
        }
    }
 
    // Llenar la matrizB con los datos transpuestos de la matrizA
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizB[j][i] = matrizA[i][j];
        }
    }
 
    // Imprimir matrizA
    std::cout << "\nMATRIZ A\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout <<"\t"<<matrizA[i][j] <<"\t";
        }
        std::cout << "\n";
    }
 
    // Imprimir matrizB
    std::cout << "\nMATRIZ B\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout <<"\t"<< matrizB[i][j] <<"\t";
        }
        std::cout << "\n";
    }
 
    return 0;
}