#include <iostream>
using namespace std;
void MCDyMCM (int a, int b, int &mcd, int &mcm);
int main () {
	int x=18, y=24;
	int rMCD, rMCM;
	MCDyMCM(x,y,rMCD,rMCM);
	cout<<"MCD: "<<rMCD<<endl; //rMCD tiene un valor gracias a la referencia usada en la función MCDyMCM "mcm"
	cout<<"MCM: "<<rMCM<<endl; //rMCM tiene un valor gracias a la referencia usada en la función MCDyMCM "mcd"
	return 0;
}

void MCDyMCM (int a, int b, int &mcd, int &mcm) {
	int i;
	i=1;
	mcd=1;
	while (i<=a&&i<=b) {
		if (a%i==0&&b%i==0)
			mcd=i;
		i=i+1;
	}
	mcm=(a*b)/mcd; //los valores mcd y mcm son utilizados como referencia en esta función para referirse a rMCD y rMCM y sobreescribirlo
}
