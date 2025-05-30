#include <iostream>
using namespace std;
int generador(int cantidad);

int main() {
    int n;
    cout<<"Generador de la serie Fibonacci";
    cout<<"\nIngrese la cantidad de terminos a generar: ";
    cin>>n;
    generador(n);
    return 0;
}

int generador(int cantidad) {
    int a, b, c, suma, i;
    char opcion;
	a = 0;
	b = 1;
	suma = 0;
	if (cantidad<=0) {
        cout << "Debe ingresar un numero positivo.\n";
    }
    
    cout << "\nSerie Fibonacci:\n";
    for (i=0;i<cantidad;i++) {
        if (i<=1)
            c=i;
        else {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<" ";
        suma=suma+c;
    }
    
    cout<<"\n\n¿Desea mostrar la suma de los terminos? (s/n): ";
    cin>>opcion;
    switch (opcion) {
    	case 's':
    		cout<<"La suma de los "<<cantidad<<" terminos es: "<<suma;
    		break;
    	case 'n':
    		cout<<"Gracias por usar el programa, tenga buen dia";
    		break;
    	default:
    		cout<<"No ingreso algo correcto, adios";
	}
}
