#include <iostream>

using namespace std;

main(){
	// Arreglos bidimensionales, matriz, tabla
	int fil = 0, col = 0;
	cout << "Ingrese filas: ";
	cin >> fil;
	cout << "Ingrese columnas: ";
	cin >> col;
	int matriz[fil][col];
	cout << "---------- Ingresar ----------" << endl;
	
	for(int i = 0; i < fil; i++){
		for(int ii = 0; ii < col; ii++){
			cout << i << ", " << ii << ": ";
			cin >> matriz[i][ii];
		}
		cout << "_____________ " << endl;
	}
	
	cout << "---------- Mostrar ----------" << endl;
	for(int i = 0; i < fil; i++){
		for(int ii = 0; ii < col; ii++){
			cout << i << ", " << ii << ": " << matriz[i][ii] << endl;
		}
	}
	
	system("Pause");
}
