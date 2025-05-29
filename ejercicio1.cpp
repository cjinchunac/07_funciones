#include <iostream>
using namespace std;
void dividir(int val1, int val2);

int main () {
	int a, b, mayor, menor;
	cout << "=== DIVISION ENTERA CON RESTO ===" << endl;
    cout << "Este programa calcula el cociente y el resto de una division entre dos numeros" << endl << endl;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	if (a>=b) {
		mayor=a;
		menor=b;
	}	
	else {
		mayor=b;
		menor=a;
	}
	dividir(mayor, menor);
	cout<<endl<<endl<<"Gracias por usar este programa";
	return 0;
}

void dividir (int val1, int val2) {
	int cociente, resto, numerador, denominador;
	numerador=val1;
	denominador=val2;
	cociente=0;
	while (val1>=val2) {
		val1=val1-val2;
		cociente=cociente+1;
		resto=val1;
	}
	cout<<"\nEl cociente de la division de "<<numerador<<" / "<<denominador<<" es: "<<cociente;
	cout<<"\nEl resto de la division de "<<numerador<<" / "<<denominador<<" es: "<<resto;
}
