#include <iostream>

using namespace std;

main(){
	int tam = 0, suma = 0, promedio = 0;
	
	cout << "Cuantas notas desea ingresar: " << endl;
	cin >> tam; // 5
	
	int notas[tam];
	
	for(int i = 0; i < tam; i++){
		cout << "Ingrese nota [" << i << "]: ";
		cin >> notas[i];
	}
	
	for(int i = 0; i < tam; i++){
		suma += notas[i];
	}
	promedio = suma / tam;
	cout << "El promedio es: " << promedio << endl;
	
	system("Pause");
}
