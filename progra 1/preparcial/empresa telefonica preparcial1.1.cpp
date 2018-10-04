//desarrollado por: Herberth Ovidio Jurado Maradiaga
//asignatura: Programacion 1
//Catedratica: Ingeniera Ligia Astrid Hernandez
//codigo fuente: calcular el total a pagar por las llamadas realizadas dependiendo el tiempo que dure la llamada

#include <iostream>// entradas y salidas de datos
#include <windows.h>// nos servira para poner un sonido al finalizar la ejecucion

using namespace std;//le desimos al compilador que use el espacio de nombre de iostream

float preciodellamadas (float nummin){//crearemos la funcion total que nos devolvera el precio de las llamadas
	float total;//creamos la varible total de tipo flotante para almacenar los precios de las llamadas
	do
	{//mediante el ciclo do while condicionaremos que si el usuario 
	//ingrese un numero menor a cero le vuelva a pedir al usuario que ingrese los valores 
	system("cls");
	cout << "  //////////     BIENVINDO AL SISTEMA     \\\\\\\\\\  " << endl;//le damos la bienvenida al usuario
	cout << " ingrese la cantidad de minutos. " << endl;//le pedimos al usuario que ingrese los datos
	cin >> nummin;//almacenamos los datos que el usuario ingrese
	while (cin.fail()){
			system ("cls");	
			cin.clear();
			cin.ignore(1000, '\n');//llamamos esta funcion para evitar el ingreso de letras
			cout << "el dato no es un numero" << "\n";
			cout << "intentelo de nuevo" << "\n";
			system ("pause");
		}
	
    }while( nummin<=0 );
    
    if ( nummin >= 1 && nummin <= 10){//condicionamos que si el valor ingresado sea mayor 
		//o igual que 1 y menor o igual a diez, el valor ingresado se multiplicara por 0.05 que vale cada minuto
		//de ese intervalo de tiempo.
		total = nummin * 0.05;	
		}
		else if ( nummin >= 11 && nummin <= 15 ){//condicionamos que si el valor ingresado sea mayor 
		//o igual que 11 y menor o igual a 15, el valor ingresado se multiplicara por 0.08 que vale cada minuto
		//de ese intervalo de tiempo.
			total = nummin * 0.08;
		}
		else if (nummin > 15 ){//condicionamos que si el valor ingresado sea mayor 
		// que 15, el valor ingresado se multiplicara por 0.1 que vale cada minuto
		//de ese intervalo de tiempo.
			total = nummin * 0.1;
		}
    
    return total;//la funcion retornara el total a pagar por el tiempo de llamada
}

int main() {
	system("color f0");
	float nummin;//declaramos la variable de tipo float que recibira la funcion preciodellamadas
	system ("cls");
	Beep(849,606);
	cout << "el total de minutos es: " << nummin <<  " min" << endl;//imprimimos el numero de minutos.
    cout << "el total a pagar por la llamada es: $ " <<preciodellamadas (nummin)<< endl;//imprimomon el total a pagar por la llamada.
    Beep (841,501);	// le ponemos un sonito al programa
	return 0;
}
