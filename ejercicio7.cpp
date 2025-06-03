#include <iostream>
using namespace std;
int MCD (int, int);
int MCM (int, int);
int main () {
	int num1, num2, mcd, mcm;
	cin>>num1>>num2;
	mcd=MCD(num1,num2);
	mcm=MCM(num1,num2);
	cout<<"El MCD de estos numeros es: "<<mcd<<endl;
	cout<<"EL MCM de estos numeros es: "<<mcm<<endl;
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
