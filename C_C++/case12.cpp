#include <iostream>
using namespace std;

int main(void) {
    string matriz[5][2] = {{"Av Lima 419", "Villa Maria"}, {"Jr. Aguarico 330", "Breña"}, {"Av. Alcanfores 325", "Chaclacayo"}, {"Jr. Rosa Toro 1235", "Ate"}, {"Av. Alfonso Ugarte", "Breña"}};
    
    //cout<<endl<<matriz[2][0]<<" , "<<matriz[2][1]<<endl;


    int filas = sizeof(matriz) / sizeof(matriz[0]);
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<matriz[i][j]<<endl;
        }
    }


}