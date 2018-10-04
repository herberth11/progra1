//Programa hecho por: Herberth Ovidio Jurado Maradiaga
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <stdlib.h>//control de procesos
#include <time.h>//manipulacion de hora y fecha del sistema


using namespace std;

//inicio
int main (){
	system ("color f5");//asignamos color de fondo y de texto
	//utilizacion de el random
	srand (time (NULL)); //el tiempo sera de tipo nulo

	
	int matriz [3][3]; //declaracion de primer variable para la primera matriz
	
	for (int i=0 ; i<3 ; i++){ //ciclo que va desde cero a menor que 3 incrementando en 1 (para las filas)
		for (int j=0 ; j<3 ; j++){ //ciclo que va desde cero a menor que 3 incrementando en 1 (para las columnas)
		
		
		matriz [i][j] = rand () % 101; //Random-la matriz tomara valores de 1 a 101
		
		}	
	}
	//impresion de primera matriz
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			cout << matriz [i][j] <<" ";
		}
		cout << endl;
		
	}
	
		int matri [3][3]; //declaracion de primer variable para la segunda matriz
	
	for (int i=0 ; i<3 ; i++){//ciclo que va desde cero a menor que 3 incrementando en 1 (para las filas)
		for (int j=0 ; j<3 ; j++){ //ciclo que va desde cero a menor que 3 incrementando en 1 (para las columnas)
		
		
		matri [i][j] = rand () % 101; //Random-la matriz tomara valores de 1 a 101
		
		}
		cout << endl;	
	}
	//impresion de segunda matriz
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			cout << matri [i][j] <<" ";
		}
		cout << endl;
	}
	/*declaracion de variable para el resultado de la suma de las dos matrices
	donde se declara con el mismo tipo de columnas y filas*/
	int resultado [3][3];
	cout<<endl;
	cout<<"RESULTADO "<<endl; //Texto
	cout<<endl;
	for (int i=0 ; i<3 ; i++){
		for (int j=0; j<3; j++){
			resultado[i][j]=matri [i][j]+matriz[i][j]; //suma de matrices
			cout<<resultado[i][j]<<" "; //impresion de resultados
			
		}
		
		cout<<endl;
		
	}
	
	return 0;	//no retorna ningun valor
}
