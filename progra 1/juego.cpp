//codigo fuente: juego XO
//desarrollado por: Herberth Ovidio Jurado Maradiaga
#include <iostream>//Libreria que se utiliza en la mayoria de programas, ya que hace posibles muchas funciones
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
//variables globales
char letras [3][3];//para la matriz del juego
char jugador = 'X'; //tipo de jugador
//funciones
void tablero (); //inicio del juego
void mostrarTabla ();//mostrar la tabla del juego
bool ganador () ;//cuando gana
bool empate () ; //hay empate
 

int main (){
	system ("color f0");
	Beep (1000,999);
	tablero ();//llamada de funcion
	while (!ganador () && !empate()) { //se hace el proceso hasta que hay un empate o ganador
		mostrarTabla (); //llamada de funcion
		int fila = 0; //declaracion de variable para la posicion de fila
		int col = 0 ;//declaracion de variable para la posicion de columna
		
		cout <<endl<<"\tSeleccione la fila en que quiere jugar "<<jugador <<"="	;//seleccion de fila
		cin >> fila ;//lectura de variable
		cout <<endl<<"\tSeleccione la columna en que quiere jugar "<<jugador <<"="	; //seleccion de columna
		cin >> col ; //lectura de variable	
		
		//condicion para cuando el usuario intente ingresar en un puesto ya ocupado
		if (letras [fila][col]!='_'){
			cout <<"ERROR, intente nuevamente" <<endl ;
		}
		//sino continua el juego
		else {
			letras [fila][col] = jugador ;
			if (jugador == 'X'){
				jugador = 'O';//jugador que obtiene 0
			}
			else {
				jugador = 'X'; //jugador que obtiene x
			}
		}
	} 
	cout <<endl ;
	mostrarTabla (); //llamada de funcion
	cout <<endl;
	Beep(899,877);
	system ("pause"); //pausa, para el fin o continuacion de juego
}
	
//declaracion para funcion inicio
//como la tabla o matriz estara ejecutada
	void tablero (){
		for (int fila=0 ; fila<3 ; fila++) { 
			for (int col=0 ; col<3 ; col++) {
			letras [fila][col]='_';
		}
 }
}
	//declaracion para funcion mostrar
	//se mostrara la tabla y en que posiciones va ingresando el usuario
	void mostrarTabla (){
		for (int fila=0 ; fila<3 ; fila++) {
			for (int col=0 ; col<3 ; col++) {
			cout <<"\t" <<letras [fila][col];
		}
		cout <<endl;
	}
}	
//declaracion para funciones de que forma y posiciones se puede ganar el juego
	bool ganador (){
		//en posicion horizontal
		//si cumple con esta posicion uno de los dos jugadores gana
		char jugadorLocalizado = letras [0][0];
		for (int fila=0 ; fila<3 ; fila++) {
			for (int col=0 ; col<3 ; col++){
				if (letras [fila][col] == '_' ) {
					break ; break ; //rompe las condiciones anteriores
				}
				if (jugadorLocalizado != letras [fila][col] ) {
					break; break ; //rompe las condiciones anteriores
				}
				jugadorLocalizado = letras [fila][col] ;
				if (col == 2) {
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ;
				}
			}
		}
		//en posicion vertical
		//si cumple con esta posicion uno de los dos jugadores gana
	jugadorLocalizado = letras [0][0] ;
		for (int fila=0 ; fila<3 ; fila++) {
			for (int col=0 ; col<3 ; col++) {
			
			if (letras [col][fila] == '_') {
				break; break;  //rompe las condiciones anteriores
			}
			if (jugadorLocalizado != letras [col][fila] ){
				break; break;  //rompe las condiciones anteriores
			
			}	
			jugadorLocalizado = letras [fila][col] ;
			if (col==2){
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ;//retorna un valor verdadero
			}
		}
	}
	//en posicion de izquierda a derecha o sea cruzada
	//si cumple con esta posicion uno de los dos jugadores gana
		jugadorLocalizado = letras [0][0] ;
		for (int fila=0 ; fila<3 ; fila++) {
			if (letras [fila][fila] == '_') {
				break;  //rompe las condiciones anteriores
			}
			if (jugadorLocalizado != letras [fila][fila] ){
				break;  //rompe las condiciones anteriores
			
			}	
			jugadorLocalizado = letras [fila][fila] ;
			if (fila==2){
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ; //retorna un valor verdadero
			}
		}
		///en posicion de derecha a izquierda o sea cruzada
		//si cumple con esta posicion uno de los dos jugadores gana
		jugadorLocalizado = letras [0][2] ;
		for (int fila=2 ; fila>=0 ; fila--) {
			if (letras [2-fila][fila] == '_') {
				break; //rompe las condiciones anteriores
			}
			if (jugadorLocalizado != letras [2-fila][fila] ){
				break; //rompe las condiciones anteriores
			
			}	
			jugadorLocalizado = letras [2-fila][fila] ;
			if (fila==0){
				cout <<"\t*FELICIDADES!! usted ha ganado " << jugadorLocalizado ;
				return true ; //retorna un valor verdadero
		}
	}
	return false ; //retorna un valor falso si lo anterior no se cumple
}
//declaracion de funcion si hay empate
bool empate (){
	for (int fila=0 ; fila<3 ; fila++) {
			for (int col=0 ; col<3 ; col++){
				if (letras [fila][col]=='_'){
					return false ;//sera un valor falso por no ganar
				}
			}
				
		}
		cout <<"\tEMPATE !!"<<endl ;
		return true ;////retorna un valor verdadero
}

	
	
	
	
	

