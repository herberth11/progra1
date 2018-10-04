//programa desarrollado por: Herberth Ovidio Jurado Maradiaga
//carnet: JM18006
//Realizar un progrma que defina el sueldo de un trabajador segun
//cantidad de ventas
#include <iostream>
//la biblioteca iostream nos sirve para dar
//entrsada y salida a los datos del programa
#include <stdio.h> 
//incluiremos esta biblioteca para poder cambiarle el
//color al texto y fonda ventana de ejecucion.
#include <windows.h>
/*incluiremos la biblioteca windows.h que nos ayudara para llamar
un archivo multimedia almacenado en la memoria de la pc*/
//le decimos al compilador que utilice el espacio de nombre
using namespace std;

//aqui inicia la ejecucion del programa.
int main() {
     
     cout << "\a";
	/*le damos al fondo de ejecucon del programa un color verde
	claro al fondo y rojo al texto*/
	system("color d0");
	
	 //declarasmos las variables tipo entero
	 /*en la variable ventas se almacenara el darto que
	 ingrese el usuario del numero de ventas que realice 
	 el vendedor en el mes*/
	 int ventas;
	 
	/*en la variable salario se almacenara el dato correspondiente a cada
	valor ingresado en ventas*/
	 int salario;
	 //le damos la bienvenida el usuario
	 cout << "  \n";
	 cout << "////////   BIENVENIDO   \\\\\\\\" << endl;
	 /*mientras se cumpla que ventas sea menor o igual a cero se ejecutara el do while
	para evitar que el valor ingresado sea negativo o igual a cero.*/
	 do
	 {
	 	//le pedimos qiue ingrese la
	    //cantidad de ventas del vendedor en el mes
	 	cout<< "ingrese el numero de ventas en el mes." << endl;
	 	/*aqui le decimons al compilador que mientras el dato que se pide
	 	anteriormente se almacene en la variable ventas y el valor ingresado no sea
	 	entero se repita el bucle while*/
	 	while ((cin>>ventas).fail()){
	 	//limpiamos el valor ingresado, es decir la memoria ocupada con dicho valor
		cin.clear();
		/*la funcion fflush realiza la limpieza de buffer(almacenamiento temporaneo)
		de entrada de (stdin) standar input(estandar de entrada)*/
		fflush(stdin);
		cout << "entrada invalida\n";
		cout << "ingrese de nuevo el numero de ventas del mes\n";
	   }
	 	
	 }while(ventas <= 0);
	 
	 /*mediente la condicion if else comparamos el valor almecenado en las variable ventas
	 para conocer el salario que le corresponde a cada empleado*/
	  if (ventas <= 500000 && ventas > 0){
	  	/*si el valor de las ventas es menor o igual que 500000 y mayor
		que cero el salrio es de $80000*/ 
	  	salario = 80000;
	  }
	  else if (ventas >= 500001 && ventas <= 1000000){
	  	/*si el valor de las ventas es mayor o igual que 500001 y menor
		que 1000000 el salrio es de $160000*/ 
	  	 salario = 160000;
	  }
	  else if (ventas >= 1000001 && ventas <= 1500000){
	  	/*si el valor de las ventas es mayor o igual que 1000001 y menor
		que 1500000 el salrio es de $320000*/ 
	  	salario = 320000;
	  }
	  else if (ventas >= 1500001 && ventas <= 2500000){
	  	/*si el valor de las ventas es mayor o igual que 1500001 y menor
		que 250000 el salrio es de $450000*/ 
	  	salario = 450000;
	  }
	  else if (ventas >= 2500001 && ventas < 4000000){
	  	/*si el valor de las ventas es mayor o igual que 2500001 y menor
		que 4000000 el salrio es de $550000*/ 
	  	salario = 550000;
	  }
	  else if (ventas > 4000000){
	  	/*si el valor de las ventas es mayor que 4000000
		  el salario sera igual al 20% de las ventas*/ 
	  	salario = ventas * 0.2;
	  }
	  //imprimimos en pantalla el valor del salario del empleado
	  cout <<"el salario del vendedor es: $"<<salario<<endl;
	  
	  // le devolvemos el control al main
	return 0;
}
