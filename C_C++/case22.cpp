#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    char texto1[] = "Jhostyn Malpartida";
    char texto2[20];
    cout<<"Texto destino: "<<texto2<<endl;
    strcpy(texto2,texto1);
    cout<<"Texto origen: "<<texto1<<endl;
    cout<<"Texto destino: "<<texto2<<" "<<strlen(texto2)<<endl;
    return 0;
}