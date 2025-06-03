#include <iostream>
using namespace std;
int vprimo (int N);
int main () {
	int n,v;
	cout<<"¡¡VERIFICADOR DE NUMEROS PRIMOS!!"<<endl<<endl;
	cout<<"Escriba un numero: ";
	cin>>n;
	cout<<endl;
	v=vprimo(n);
	if (n>0) {
		if (v==1)
			cout<<"El numero es primo";
		else
			cout<<"El numero NO es primo";
	}
	else
		cout<<"Ha ingresado un valor erroneo (numero negativo o caracteres)";
	return 0;
}

int vprimo (int N) {
	int c, i, V;
	c=0;
	for (i=1;i<=N;i++) {
		if (N%i==0)
			c=c+1;
	}
	if (c==2)
		V=1;
	return V;
}
