#include <iostream>
using namespace std;
int main(){
	int opcion,a,b,p,m,j,s,i,n;
	float x1, s1 , e1;
	double x2, s2 , e2;
	long double x3, s3 , e3;
	
	cout << "1. Ejercicio 1\n2.Ejercicio 2\n0.Salir\n";
	cin >> opcion;
	while (opcion!=0) {
		switch (opcion) {
			case 1:
				
				cout << "Ingrese un valor para N: ";
				cin >> n;
				//division
				x1 = 1.0f / n;
				x2 = 1.0 / n;
				x3 = 1.0L / n;

				// suma de las x
				i = 0;
				while (i < n) {
					s1 += x1;
					s2 += x2;
					s3 += x3;
					i++;
				}

				// calcular
				e1 = fabs(1.0f - s1);
				e2 = fabs(1.0 - s2);
				e3 = fabsl(1.0L - s3);

				// Impresión 
				cout << "Error con float: " << e1 << endl;
				cout << "Error con double: " << e2 << endl;
				cout << "Error con long double: " << e3 << endl;

			break;
				case 2:
					m = 0;
					cout << "Ingrese P: " << endl;
					cin >> p;
					cout << "Ingrese A: " << endl;
					cin >> a;
					cout << "Ingrese B: " << endl;
					cin >> b;
					//decrementacion
					while (b>0&&p>0) {
						j = a / b;
						m += j;
						b--;
						p--;
					}
					//suma total de divisores
					cout << "M= " << m << endl;
					break;
						default:
						cout << "Opcion no valida";
		}
		//condicion del ciclo
		cout << "1. Ejercicio 1\n2.Ejercicio 2\n0.Salir\n";
		cin >> opcion;
	}
}