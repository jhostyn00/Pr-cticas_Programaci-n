/*
 *
 * Programa C++
 * Leer un número de 3 cifras y obtener el mayor número que se puede formar
 * con las cifras del número introducido
 *
 */
#include <iostream>
using namespace std;
int main()
{
    //declaración de variables
    int n, c1, c2, c3, mayor, menor, medio;
	
    //se introduce el número 
    cout << "\nIntroduce un numero de tres cifras: ";
    cin >> n;

    if(n>=100 and n<=999)     //si el número es de tres cifras
    {   
        //se obtienen por separado las cifras del número
        c3=n%10;              //c3 contiene la última cifra
        c1=int(n/100);        //c1 contiene la primera cifra
        c2=n%100;
        c2=int(c2/10);        //c2 contiene la cifra central
		
        //instrucciones para obtener la cifra mayor del número
        mayor=c1;             
        if (c2>mayor)
        {
            mayor=c2;
        }
        if (c3>mayor)
        {
            mayor=c3;
        }
		
        //instrucciones para obtener la cifra menor
        menor=c1;             
        if (c2<menor)
        {
            menor=c2;
        }
        if (c3<menor)
        {
            menor=c3;
        }
		
        //instrucciones para obtener la cifra que no es ni la mayor ni la menor                                   
        if(c1 > menor and c1 < mayor) 
        {  
            medio=c1;
        }
        else if (c2 > menor and c2 < mayor)
             {
                medio = c2;
             }
             else if(c3 > menor and c3 < mayor )
                  {
                    medio = c3;
                  }
                  else if(c1==c2 or c1==c3)
                       {
                          medio = c1;
                       }
                       else
                       {
                           medio = c2;
                       }
					   
        //obtener el número mayor que se puede formar con esas tres cifras                                        
        n=mayor*100+medio*10+menor;  

        //Se muestra por pantalla el número obtenido
        cout << n << endl;                  
    }
    else
        cout << "\nNo es un numero de tres cifras" << endl;
        
    system("pause");
}