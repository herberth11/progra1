//Herberth Ovidio Jurado Maradiaga
//programacion 1
//jueves 20 de septiembre del 2018
//codigo fuente: creacion de funciones.
/*como se declara una funcion(tipo de dato), 
como se llama(es cuando le pediomos a una funcion que se ejecute), 
y como se iMplementa(como se va a calcular esa funcion).*/
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void limpiar();
int pedriCanSuma(int vn);
int sumar(int a, int num);

int main() {
	Beep(890,786);
	system("color f0");
	
	
	int vn;//no afecta la varible declarada en int main porque esta en otro contexto
		
	limpiar();//nos sirve para limpiar la pantalla y que ya no se muestre lo ingresado antes
	    //se llama la funcion
	pedriCanSuma(vn);
	
	return 0;
}

void limpiar(){
	system ("cls");
	cout << "/-/-/-/-/-/-/-/-/-/-/-/-" << endl;
	cout << "programa de suma de numeros" << endl;
	cout << "UNIVERSIDAD DE EL SALVADOR" << endl;
	cout << "VERSION" /*<< sumar (1,2)*/ << endl;
}

int pedriCanSuma(int vn){
	
	//n es un contador que nos sirve para contar la cantidad de veces que se van a sumar
	int num;//auxiliares: nos sirve para leer un numero
	int suma;
	do{
	cout << "cuantos numeros quiere sumar[2-4]: " << endl;
	cin >>vn;
	suma=0;
	for (int i=0; i<vn; i++){
		limpiar();
		cout << "ingresde el numero" << endl;
		cin >>num;
	}
	
	for (int i=0; i<vn; i++){
	 //la suma se inicia en cero porque al entrar en while la suma sera igual a cero.
	suma=sumar (suma, num);
	cout << suma<< endl;
    }
	}while(vn<2 || vn>4);//nos sirve para que si el usuario ingrese un numero menor a dos o mayor
	//a cuatro le vuelva a pedir al usuario que ingrese de nuevo los datos
	cout << "el resultado es: " << suma << endl;
}

int sumar (int a, int num){//esta funcion recibe el valor de la variable a y la variable au
		return a+num;//retorna la suma de estas variables
	}
