#include <iostream>
using namespace std;
void dividir(int val1, int val2);

int main () {
	int a, b, ma, me;
	cout<<"=== DIVISION ENTERA CON RESTO ==="<<endl;
	cout<<"Este programa calcula el cociente y el resto de una division entre dos numeros"<<endl<<endl;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	if (a>=b) {
		ma=a;
		me=b;
	}	
	else {
		ma=b;
		me=a;
	}
	dividir(ma, me);
	cout<<endl<<endl<<"Gracias por usar este programa";
	return 0;
}

void dividir (int val1, int val2) {
	int c, r, nu, de;
	nu=val1;
	de=val2;
	c=0;
	if (val2==0)
		cout<<"NO SE PUEDE DIVIDIR ENTRE 0";
	while (val1>=val2) {
		val1=val1-val2;
		c=c+1;
		r=val1;
	}
	cout<<"\nEl cociente de la division de "<<nu<<" / "<<de<<" es: "<<c;
	cout<<"\nEl resto de la division de "<<nu<<" / "<<de<<" es: "<<r;
}
