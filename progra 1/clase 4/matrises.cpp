#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	
	system("color f0");
	Beep(899,877);
	int x[3][3];//declaramos variable de tipo entero para imprimir numeros entero en la pantalla
	char y[3][3];//declaramos una variable de tipo char para imprimir caracteres
	
	for (int i=0; i<3; i++){//mediante este for llenamos la matriz y[4][4]
		for (int j=3; j>0; j--){
			y[i][j]='y';
			cout << y[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << endl;//damos un salto de linea
	
	for (int i=0; i<3; i++)//mediante este intervalo llanamos la matriz X[4][4]
	{
		for (int j=0; j<3; j++){
			x[i][j]=0;
			cout << x[i][j]<<"--";
		}
		cout << endl;
	}
	
	cout << endl;//damos un salto de linea
for (int i=0; i<3; i++){//en este ciclo condicionaremos las filas
	for (int j=0; j<=3; j++){
		if (i==2){//si i es igual a 3 entonces las posiciones 3,2 y 3,3 seran igual a 3
		x[2][1]=3;
		x[2][2]=3;
	}
	cout << x[i][j] << "  ";
	}
	cout << "\n";
}
	
	system ("pause");
	
	return 0;
}
