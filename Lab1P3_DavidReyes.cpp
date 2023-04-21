#include <iostream>
using namespace std;
int main(){
	int opcion,n,x,s,a,b,p,m,j;
	
	cout << "1. Ejercicio 1\n2.Ejercicio 2\n0.Salir\n";
	cin >> opcion;
	while (opcion!=0) {
		switch (opcion) {
			case 1:
				 n = 0;
				 cout << "Ingrese el valor de N: ";

			break;
				case 2:
					m = 0;
					cout << "Ingrese P: " << endl;
					cin >> p;
					cout << "Ingrese A: " << endl;
					cin >> a;
					cout << "Ingrese B: " << endl;
					cin >> b;
					while (b>0&&p>0) {
						j = a / b;
						m += j;
						b--;
						p--;
					}
					cout << "M= " << m << endl;
					break;
						default:
						cout << "Opcion no valida";
		}
		cout << "1. Ejercicio 1\n2.Ejercicio 2\n0.Salir\n";
		cin >> opcion;
	}
}