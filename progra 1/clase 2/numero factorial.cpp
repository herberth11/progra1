#include <iostream>//entrada y salida de datos
#include <windows.h>//nos servira para reproducir un sonido

using namespace std;//usamos el espacio de nombre de iostream

int factorial (int num);//declaracion de la funcion, esta funcion recibira
//el entero num.

int main() {
	system("color f3");
	Beep(987,789);
int num;//aqui se almacenara el numero que el usuario ingrese
cout << "ingrese un numero" << endl;//le pedimos al usuario que ingrese un numero
cin >> num;//lo guardamos en num
cout << "el reslutado es: "<<factorial(num) << endl;//imprimimos el valor del factorial, llamando
//la funcion factorial que es donde se realiza la operacion.
Beep(987,789);

	return 0;
}

//esta es la implementacion de la funcion factorial
int factorial (int num){
int fact = 1;//declaramos e inicializamos la variable fact en 1
for (int i=1; i<=num; i++){//mediente el ciclo for calculamos el factorial
//diciendo que el bucle se repita mientras que i sea menor o igual al numero
//ingresado por el usuario 
fact=fact*i;//realizamos la operacion
}
return fact;//y la funcion retornara el valor de fact.
//que sera el factorial del numero ingresado.
}
