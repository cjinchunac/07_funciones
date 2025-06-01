#include <iostream>
using namespace std;
int verificar (int N);
int main () {
	int n, v;
	cout<<"CONSULTE SI SU NUMERO ES PERFECTO: ";
	cin>>n;
	v=verificar(n);
	if (v==1)
		cout<<"EL NUMERO ES PERFECTO";
	else
		cout<<"EL NUMERO NO ES PERFECTO";
	return 0;
}

int verificar (int N) {
	int s, i, ver;
	s=0;
	for (i=1;i<=N-1;i++) {
		if (N%i==0) 
			s=s+i;
	}
	if (N==s)
		ver=1;
	else
		ver=0;
	return ver;
}

