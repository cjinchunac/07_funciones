#include <iostream>
using namespace std;
void MCDyMCM(int a, int b, int *mcd, int *mcm);
int main () {
	int x=18, y=24;
	int rMCD, rMCM;
	MCDyMCM(x,y,&rMCD,&rMCM);
	cout<<"MCD: "<<rMCD<<endl; //rMCD se sobreescribio gracias al puntero *mcd
	cout<<"MCM: "<<rMCM<<endl; //MCM se sobreescribio gracias al puntero *mcm
	return 0;
}

void MCDyMCM(int a, int b, int *mcd, int *mcm) { //la función hace que *mcd=&rMCD, el puntero apunta en la dirección de almacenamiento de rMCD
	int i;
	i=1;
	*mcd=1;
	while (i<=a&&i<=b) {
		if (a%i==0&&b%i==0)
			*mcd=i;
		i=i+1;
	}
	*mcm=(a*b)/(*mcd); //al asignar valores a los punteros *mcd y *mcm sobreescribe los valores de rMCD y rMCM de la función principal
}
