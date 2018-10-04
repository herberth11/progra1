//desarrollado por: Herberth Ovidio Jurado Maradiaga
//asignatura: Programacion 1
//Catedratica: Ingeniera Ligia Astrid Hernandez
//codigo fuente: calcular el total de insumos necesarios para la elaboracion de detreminada cantidad de bebidas

#include <iostream>//entradas y salidas
#include <windows.h> //reproducir sonido multimedia
using namespace std;//agregar espacios de nombre

void bebidas (int beb);

int main() {
	system("color f1");
	int beb;//declaramos variables
	Beep(678,123); //ejecutamos un sonido al mostrar el resultado
	do
	{
	cout << "seleccione la bebida de la que quiere calcular el total de insumos" << endl;//le decimos al usuario que seleccione un valor
	cout << "1. Sodas" << endl;//entres sodas y jugos para calcular el total de insumos necesarios para la elaboracion.
	cout << "2. Jugos" << endl;
    cin >> beb;//aqui alamcenamos la opcion que elija el usuario para luego utilizarla en la funcion bebidas en la condicion if else
	Beep(678,123); //ejecutamos un sonido
	while (cin.fail()){
			system ("cls");	
			cin.clear();
			cin.ignore(1000, '\n');//llamamos esta funcion para evitar el ingreso de letras
			cout << "el dato no es un numero" << "\n";
			cout << "intentelo de nuevo" << "\n";
			system ("pause");
			Beep(678,123); //ejecutamos un sonido
		}
	}while (beb <=0);
	
	system ("cls"); //limpiamos la pantalla para que la proxima opcion aprezca solo
    bebidas (beb);/*aqui llamamos la funcion bebidas para
	que nos imprima en pantalla la cantidad de insumos necesarios para la bebida selccionada.*/
    Beep(678,123); //ejecutamos un sonido
	return 0;//le regresamos el control a main 
}

//aqui implementamos la funcion
void bebidas (int beb){/*creamos la funcion bebidas mediente void porque la funcion no retornara nada solo hara 
loa calulos establecidos dentro de ella y en main vamos imprimir su resultado para conocer la cantidad de insumos
ademass recibira los datos de la variable beb que se declarara el la funcion main*/ 
	int bebidas; //declaramos la varible bebidas que sera donde se almacenaran los datos que el usuario ingrese
	int agua;/*en esta variable se almacenara la oprsaraion realizada entre el valor proporcionado por el usuario
	y la cantidad de mililitros de agua que se usan para cada bebida por unidad*/
	int azucar;/*en esta variable se almacenara la oprsaraion realizada entre el valor proporcionado por el usuario
	y la cantidad de gramos de azuca que se usan para cada bebida por unidad*/
	if ( beb == 1){/*mendiante if else condicionaremos que el valor ingreado el la variable beb es igual a uno
	se calcule el total de agua y azucar con los valores de la tabla que corresponden a la elaboracion de una soda
	si corresponde a ella o a la tabla de jugos*/
		cout << "ingrese la cantidad de Sodas que se van a producir: " << endl;
		cin >> bebidas;
		agua = bebidas * 500;
		azucar = bebidas * 800;
		cout << "La cantidad a producir de Sodas es: " << bebidas << "\n";
	}
	else if (beb == 2){
		cout << "ingrese la cantidad de Jugos que se van a producir: " << endl;
		cin >> bebidas;
		agua = bebidas * 600;
		azucar = bebidas * 700;
		cout << "La cantidad a producir de Jugos es: " << bebidas << "\n";
	}
	cout << "El total de agua es: " << agua << " ml."<< endl;/*imprimimos los resultados
	de las operaciones alamacenadas en cada variable*/
	cout << "El total de azucar es: " << azucar <<" g."<< endl;/* que seran los resultados que la 
	funcion mostrara cuando la llamenos en la funcion main*/
	
}
