#include <iostream>
#include <windows.h>
using namespace std;
float sumar (float x, float y);//declaramos la funcion sumar, que recibira los valores de x y y
void pedirNum();//declaramos la funcion pedirNum
//ejemplo paso por valor

int main() {//() decimos que el metodo main no recibe parametros
	system("color f0");
	Beep(899,877);
	/*todas las funciones deben recibir datos y retornar datos.
	argumentos son los valores que la funcion recibe uno solo se llama paramtros estos lo hay
	por valor y por referencia
	la diferencia esq  x valor se hacen copia en la memoria y x referencia no se hacen copias*/
	
	pedirNum();
	//para saber la posicion de memoria escribimos &x o &y
	return 0;
}

void pedirNum()
{
	float x;//declaromos variables de tipo flotante para poder ingresar numeros reales
	float y;
	float res;//aqui se almacenara el valor de la operacion
	
	 cout << "ingrese un numeros" << endl;//le pedimos al usuario que ingrese el primer numero
	 cin >> x;
	 
	 cout << "ingrese otro numero" << endl;//le pedimos al usuario que ingrese el segundo numero
	 cin >> y;	
	 
	
	
	res = sumar (x,y);//realizamos la operacion suma llamando la funcion sumar 
	cout << "el resultado es: " << res << endl;//imprimimos el resultado de la operacion
	cout << &x << endl;
	cout << &y << endl;
}
//esta es la implementacion de las funciones
float sumar (float x, float y)//le pasamos los valores de X y Y
{//como esta es una funcion por valor
	cout << &x << endl;//imprimimos la posicion de las variables para comprobar que las
	//funciones por valor hacen una copia de la variable
	cout << &y << endl;
	return x+y;//la funcion retornara la suma de X y Y
}
