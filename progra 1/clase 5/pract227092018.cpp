#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	system("color f2");
	Beep(899,877);
	//las variables nos sirven para guardar valores de forma temporal
	//tarea para el viernes
	//crear una cuenta de icot y ahi subimos la tarea
	//las m,atrices son arreglos de filas y columnas.
	// se declara primero el tipo de dato, el nombre de la matris , el numero de filas y el numero de columnas.
	int mat[5][5];
	int mat2[5][5];
	int mat3[5][5];
	//luego la llenamos para el uso de los datos
	//nos apollaremos de ciclo for
	for (int fila=0; fila<5; fila++){/*tiene un contador que se llama fila y se inicia en cero la condicion es que se efctue 
	la operaion mientras fila sea < 5, y se actualiza el contador en una unidad*/
		//la asignacion de un valor se hace mediante el nombre de la matriz y la posicion.
		for (int col=0; col<5; col++){/*en este ciclo le damos valores a las columnas iniciando el cnotador colen cero
		y condicionando que se ejecute mientras que sea menor que cinco y la actualizamos en una unidad*/
		      mat[fila][col]=0;	/*para cada ciclo externo es decir donde se declaro fila, se hacen cinco ciclos internos
		      es decir donde se declara col*/
		      if (fila == 4 || col == 2){
		      	mat[fila][col]=0;
                mat2[fila][col]=0;
		      }
		      else
		      {
		        mat2[fila][col]=1;
		      }
		      mat3[fila][col]=mat[fila][col]+mat2[fila][col];
		}	
	}
	/*este ciclo nos servitra para imprimir el valor de la matriz mat3*/
	for (int fila=0; fila<5; fila++){
		
		for (int col=0; col<5; col++){
		cout << mat3[fila][col] << "\t";
		}
		cout << "\n";	
    }
	
	return 0;
}
