#include <iostream>
using namespace std;
void resta(int val1, int val2);
int producto(int val1, int val2);

int main () {
	int num1, num2, resultado;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	resta(num1,num2);
	resta(num2,num1);
	resultado=producto(num1,num2);
	cout<<"\nLa multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado;
	return 0;
}

void resta(int val1, int val2) {
	int sustrac;
	sustrac=val1-val2;
	cout<<"\nLa resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
}

int producto(int val1, int val2) {
	int prod;
	prod=val1*val2;
	return(prod);
}

