#include <iostream>
#include <windows.h>

using namespace std;

    //aqui se declaran de forma global la matriz, pero no es recomendable debido a que afectan a todas las funciones
	int mat3[5][5];

void llenarMat();
void imprimirMat();
void limpiar();

int main() {
	//las variables nos sirven para guardar valores de forma temporal
	//tarea para el viernes
	//crear una cuenta de icot y ahi subimos la tarea
	//las m,atrices son arreglos de filas y columnas.
	// se declara primero el tipo de dato, el nombre de la matris , el numero de filas y el numero de columnas.        
	/*este ciclo nos servitra para imprimir el valor de la matriz mat3*/
	//int n;
	system("color f1");
	Beep(899,877);
	llenarMat();
	limpiar();
	imprimirMat();
	//cout << factorial(3) << endl;
	
	return 0;
}

void llenarMat(){
	
for (int fila=0; fila<5; fila++){/*tiene un contador que se llama fila y se inicia en cero la condicion es que se efctue 
	la operaion mientras fila sea < 5, y se actualiza el contador en una unidad*/
		//la asignacion de un valor se hace mediante el nombre de la matriz y la posicion.
		for (int col=0; col<5; col++){/*en este ciclo le damos valores a las columnas iniciando el cnotador colen cero
		y condicionando que se ejecute mientras que sea menor que cinco y la actualizamos en una unidad*/
		      //mat[fila][col]=0;	/*para cada ciclo externo es decir donde se declaro fila, se hacen cinco ciclos internos
		      //es decir donde se declara col*/
		      if (fila == col || fila%2==0 && col%2 == 0 || fila%2==1 && col%2 ==1){
		      	//para cuando fila sea igual a columna o fila sea para y col sea par o fila impar y col impar 
		      	//mat3 va ser igual a cero, es decir que cuando los pares ordenados fila, col sean iguales, sean pares
		      	//o sean impares mat3 sera igual a cero
		      	mat3[fila][col]=0;
		      }
		      else
		      {
		      	/*si ningna de las condiciones anteriores se cumplen, es decir fila y col no son
			iguales o fila y col no son pares o impares mat3 sera igual a 1*/
		            mat3[fila][col]=1;
		      }
		}	
	}	
}

void imprimirMat(){
	limpiar();
	for (int fila=0; fila<5; fila++){
		
		for (int col=0; col<5; col++){
		cout << mat3[fila][col] << "\t";
		}
		cout << "\n";	
	}
}
void limpiar()
{
	system("cls");
}
