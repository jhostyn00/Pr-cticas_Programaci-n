#include <iostream>
using namespace std;

int main(void) {
  float num1, num2;
  char operacion;

  cout<<"Ingrese el primer numero: ";
  cin>>num1;

  cout<<"Ingrese el segundo numero: ";
  cin>>num2;

  cout<<"Ingrese el tipo de operacion: ";
  cin>>operacion;

  switch(operacion){
    case '+':
      cout<<"La suma de "<<num1<<" y "<<num2<<" es: "<<num1 + num2<<endl;
      break;
    case '-':
      cout<<"La resta de "<<num1<<" y "<<num2<<" es: "<<num1 - num2<<endl;
      break;
    case '*':
      cout<<"La multiplicacion de "<<num1<<" y "<<num2<<" es: "<<num1 * num2<<endl;
      break;
    case '/':
      cout<<"La division de "<<num1<<" y "<<num2<<" es: "<<num1 / num2<<endl;
      break;
    default:
      cout<<"No es una operacion valida"<<endl;
      break;

    return 0;

  }
}
