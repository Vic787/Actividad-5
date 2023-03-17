#include <iostream>

using namespace std;

main(){
	string nombre;
	int dato;
	cout << "Ingrese dato: ";
	cin >> dato;
	cin.ignore();
	cout << "Ingrese nombre completo: ";
	getline(cin, nombre);
	
	cout << nombre << endl;
	
	system("Pause");
}
