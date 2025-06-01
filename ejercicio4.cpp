#include <iostream>
using namespace std;
int factorial (int N);
void combinatoria (int m, int n);
int main () {
	int m, n;
	cout<<"Vamos a aplicar una combinatoria de m sobre n"<<endl;
	cout<<"Escriba m: ";
	cin>>m;
	cout<<"Escriba n: ";
	cin>>n;
	combinatoria (m,n);
	return 0;
}

void combinatoria (int m, int n) {
	int c;
	c=(factorial(m))/(factorial(n)*factorial(m-n));
	cout<<"La respuesta de esta combinatoria es: "<<c;
}

int factorial (int N) {
	int f, i;
	f=1;
	for(i=1;i<=N;i++)
		f=f*i;
	return f;
}

