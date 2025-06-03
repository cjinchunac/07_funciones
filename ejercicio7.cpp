#include <iostream>
using namespace std;
int MCD (int, int);
int MCM (int, int);
int main () {
	int num1, num2, mcd, mcm;
	cout<<"¡¡A CONTINUACION CALCULAREMOS EL MCD Y MCM DE DOS NUMEROS!!"<<endl;
	cout<<"Usted ingresara dos numeros"<<endl;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if (num1>=0&&num2>=0) {
		mcd=MCD(num1,num2);
		mcm=MCM(num1,num2);
		cout<<endl<<"El MCD de estos numeros es: "<<mcd<<endl;
		cout<<"EL MCM de estos numeros es: "<<mcm<<endl;
	}
	else
		cout<<endl<<"NO HA INGRESADO VALORES VALIDOS";
	return 0;
}

int MCD (int a, int b) {
    int c;
	while (b!=0) {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}

int MCM (int a, int b) {
	int m, c;
	c=MCD(a,b);
	m=a*b/c;
	return m;
}
