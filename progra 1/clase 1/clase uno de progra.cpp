#include <cstdlib>

#include <iostream>

#include <windows.h>

using namespace std;

int main() {
	system ("color f0");
	Beep(456, 123);
	// de cero a seis de 2 en dos solo numeros pares.
	cout << "los numeros pares de cero a seis son:"<<endl;
	for (int i=0; i<=6; i=i+2 ){
		cout << i << endl;
			
	}
		//se inicia la variable i en cero, la condicion es i<=6 que me dice que si ejecute el ciclo 
		//mientras que el valor sea menor o igual a seis, por ultimo se ingresa una actualizacion del
		//dato, en este caso se le suman dos unidades el valor inicial de la variable i.
		// lo mismo se hace cuando se quiere ordenar los datos de menor a mayor solo que en vez de sumarle
		//se le resta la canidad de unidades que queremos mostrar.
	
	cout << "los numero de diez a cero son:"<<endl;
	//de 10 a cero de uno en uno
	//este contador generalmente se llama i pero tambien se le puede llamar j.
    for (int i=10; i>=0; i=--i){
		cout << i << endl;
		
	}
	//al ciclo se le colocan las llaves cuando se incluiran mas de una linea en el for,
	//en el caso que solo sea una se puede trabajar sin las llaves
	
	
	cout << "el arreglo x contiene los siguientes valores en memoria"<< endl;
	// los Arreglos pueden tener muchas lineas para no escribir todo ese monton de lineas es q utilizacmos el ciclo for
	int x[3];
	
	for (int i=0; i<=3; i++){
	
	cout << "INGRESE UN NUMERO\n";//este bucle se ejecutara mientras que i sea menos o igual a 3
	cin >> x[i];
	cout << x[i] << endl;
	}
	cout << "press the enter key to continue"<< endl;
	
	cin.get();
	
	return EXIT_SUCCESS;
}
